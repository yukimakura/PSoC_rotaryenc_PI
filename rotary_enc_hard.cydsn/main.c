/* ========================================
 *
 * Copyright yukimakura, 2018
 * rotary_enc
 * PI control
 * ========================================
*/
#include "project.h"
#include <stdio.h>

//定数
#define Kp      10
#define Ki      5
#define Kd      0.1

#define isr_clock 5 //割り込みの周期（Hz）

typedef struct{
    short temp_Count;
    short Count;
    short target;  //ロータリエンコーダは32767が基準;
    float ans;
    float dt, preTime;
    float vol;
    float P, I, D, preP;
}MOTOR_STATUS;

MOTOR_STATUS l_motor,r_motor;



inline MOTOR_STATUS PID(MOTOR_STATUS motors) {
    
    motors.dt = 1 / isr_clock;
    motors.P  = motors.target - motors.temp_Count;
    motors.I += motors.P * motors.dt;
    //D  = (P - preP) / dt;
    motors.preP = motors.P;

    //ans += Kp * P + Ki * I + Kd * D;
    motors.ans += Kp * motors.P + Ki * motors.I;
    
    return motors;
}

CY_ISR(dtisr_func){

    //Count = 0;
    l_motor.temp_Count = 0xFFFF / 2;
    r_motor.temp_Count = 0xFFFF / 2;
    
    // 現在のカウンタ値取得
    PWM_L_WriteCompare(l_motor.ans);
    PWM_R_WriteCompare(r_motor.ans);
    
    l_motor.temp_Count += QuadDec_L_GetCounter();
    r_motor.temp_Count += QuadDec_R_GetCounter();
    
    QuadDec_L_SetCounter(0);
    QuadDec_R_SetCounter(0);

    l_motor = PID(l_motor);
    r_motor = PID(r_motor);
    
}

void init(){
    r_motor.temp_Count = 0xFFFF;
    r_motor.Count = 0xFFFF;
    r_motor.target = 0x800a;  //ロータリエンコーダは32767が基準;
    r_motor.ans = 0;
    
    l_motor.temp_Count = 0xFFFF;
    l_motor.Count = 0xFFFF;
    l_motor.target = 0x800a;  //ロータリエンコーダは32767が基準;
    l_motor.ans = 0;
}


int main(void)
{
    init();
    CyGlobalIntEnable; /* Enable global interrupts. */
    PWM_R_Start();
    PWM_L_Start();
    UART_Start();
    char str[10];
    
    //PWM_WriteCompare(100);
    USBUART_CDC_Init();
    //volatile int dbg_ans = 0;
    
    //int uart_count = 0;
    //char buff[64] = "";


    QuadDec_R_Start();
    QuadDec_L_Start();
    
    
    
    dt_isr_StartEx(dtisr_func);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
   
    for(;;)
    {
       //dbg_ans = (int)(ans*1000000);
       //dbg_ans = ans;
       // LCD_Char_PrintNumber(Clock_2_GetSourceRegister());
        
        //LCD_Char_Position(0,0); 
        //LCD_Char_PrintNumber(temp_Count);
        
        l_motor.Count = (0xFFFF/2) - l_motor.temp_Count;
        r_motor.Count = (0xFFFF/2) - r_motor.temp_Count;

        
        sprintf(str,"r.tempcnt = %x",r_motor.temp_Count);
        UART_PutString(str);
        
        sprintf(str,"r.cnt = %x",r_motor.Count);
        UART_PutString(str);
        
        sprintf(str,"r.ans = %d",(int)r_motor.ans);
        UART_PutString(str);
        
        UART_PutCRLF(0x0a);
        
        //buff[0] = 's';
        //data_conv(buff,1,temp_Count);
        //buff[8] = 'e';
        
//        if(0 != USBUART_GetConfiguration())//USB周り
//            {
//                
//                USBUART_PutString(buff);
//                
//
//                if(0 != USBUART_DataIsReady())
//                {
//                    //uart_count = USBUART_GetAll(buff);
//                    if( uart_count != 0){
//
//                    while(0 == USBUART_CDCIsReady()){}
//
//                    //   USBUART_PutString("test");
//
//
//                    if(64 == uart_count){
//                          while(0 == USBUART_CDCIsReady()){}
//                          //sent zero packet
//                          USBUART_PutData(NULL,0);
//                    }      
//                }
//            }     
//        }//USB周り終
        
    }
}

/* [] END OF FILE */
