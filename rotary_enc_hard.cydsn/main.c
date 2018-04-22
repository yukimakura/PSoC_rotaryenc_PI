/* ========================================
 *
 * Copyright yukimakura, 2018
 * rotary_enc
 * PI control
 * ========================================
*/
#include "project.h"
#include <stdio.h>
<<<<<<< HEAD

//定数
#define Kp      10
#define Ki      5
#define Kd      0.1

#define target  0x800a  //ロータリエンコーダは32767が基準
#define isr_clock 5 //割り込みの周期（Hz）
=======
#include <stdlib.h>

#define isr_clock 10 //割り込みの周期（Hz）

typedef struct{
    short temp_Count;
    short Count;
    unsigned short target;  //ロータリエンコーダは32767が基準;
    float ans;
    float dt, preTime;
    float vol;
    float P, I, D, preP;
    float Kp,Ki,kd;//定数
}MOTOR_STATUS;
>>>>>>> bde16a60fc9443ec2d8f488d376a61c4e0b16aa3

MOTOR_STATUS l_motor,r_motor;



inline MOTOR_STATUS PID(MOTOR_STATUS motors) {
    
    motors.dt = 1 / isr_clock;
    motors.P  = motors.target - motors.temp_Count;
    motors.I += motors.P * motors.dt;
    //D  = (P - preP) / dt;　微分を入れると回らなくなる模様
    motors.preP = motors.P;

    motors.ans += motors.Kp * motors.P + motors.Ki * motors.I;
    
    return motors;
}

CY_ISR(dtisr_func){

    //Count = 0;
    l_motor.temp_Count = 0xFFFF / 2;
    r_motor.temp_Count = 0xFFFF / 2; //32767を基準値として前転後転を区別する。
    
    
    PWM_L_WriteCompare(l_motor.ans);
    PWM_R_WriteCompare(r_motor.ans);
    
    // 現在のカウンタ値取得
    l_motor.temp_Count -= QuadDec_L_GetCounter();
    r_motor.temp_Count -= QuadDec_R_GetCounter();
    
    //一定時間分の回転数を取りたいため、ここでカウンタの値を初期化
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
    r_motor.Kp = 20;
    r_motor.Ki = 1;
    
<<<<<<< HEAD
    //Count = 0;
    temp_Count = 0xFFFF / 2;
    
    // 現在のカウンタ値取得
    PWM_WriteCompare(ans);
    
    temp_Count -= QuadDec_GetCounter();
    isrcnt++; 
    QuadDec_SetCounter(0);
=======
>>>>>>> bde16a60fc9443ec2d8f488d376a61c4e0b16aa3
    
    
    l_motor.temp_Count = 0xFFFF/2;
    l_motor.Count = 0xFFFF/2;
    l_motor.target = 0x800a;  //ロータリエンコーダは32767が基準;
    l_motor.ans = 0;
    l_motor.Kp = 20;
    l_motor.Ki = 1;
}


int main(void)
{
<<<<<<< HEAD
    CyGlobalIntEnable; /* Enable global interrupts. */
    PWM_Start();
    UART_Start();
    char str[10];
    
    //PWM_WriteCompare(100);
    USBUART_CDC_Init();
    //volatile int dbg_ans = 0;
    
    //int uart_count = 0;
    //char buff[64] = "";
=======
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    PWM_R_Start();
    PWM_L_Start();
    UART_Start();
    char str[10];
    init();

    QuadDec_R_Start();
    QuadDec_L_Start();
>>>>>>> bde16a60fc9443ec2d8f488d376a61c4e0b16aa3

    dt_isr_StartEx(dtisr_func);

   
    for(;;)
    {
<<<<<<< HEAD
       //dbg_ans = (int)(ans*1000000);
       //dbg_ans = ans;
       // LCD_Char_PrintNumber(Clock_2_GetSourceRegister());
        
        //LCD_Char_Position(0,0); 
        //LCD_Char_PrintNumber(temp_Count);
        
        
        Count = (0xFFFF/2) - temp_Count;
        sprintf(str,"tempcnt = %x",temp_Count);
        UART_PutString(str);
        UART_PutCRLF(0x0a);
        sprintf(str,"cnt = %x",Count);
=======

               
        sprintf(str,"r.tempcnt = %x",r_motor.temp_Count);
        UART_PutString(str);
        
        sprintf(str,"r.target = %x",r_motor.target);
        UART_PutString(str);
        
        sprintf(str,"r.cnt = %x",r_motor.Count);
>>>>>>> bde16a60fc9443ec2d8f488d376a61c4e0b16aa3
        UART_PutString(str);
        
        sprintf(str,"--%d--",r_motor.target - r_motor.temp_Count);
        UART_PutString(str);
        
        sprintf(str,"r.ans = %d",(int)r_motor.ans);
        UART_PutString(str);
        
<<<<<<< HEAD
=======
        UART_PutCRLF(0x0a);
        
>>>>>>> bde16a60fc9443ec2d8f488d376a61c4e0b16aa3
    }
}

/* [] END OF FILE */
