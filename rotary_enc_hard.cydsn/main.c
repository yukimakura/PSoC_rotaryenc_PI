/* ========================================
 *
 * Copyright yukimakura, 2018
 * rotary_enc
 * PI control
 * ========================================
*/
#include "project.h"

//定数
#define Kp      60
#define Ki      500 
#define Kd      0.1

#define target  32780  //ロータリエンコーダは32767が基準
#define isr_clock 10　　//割り込みの周期（Hz）


volatile short temp_Count = 0xFFFF,Count = 0xFFFF;
float ans = 0;
float dt, preTime;
float vol;
float P, I, D, preP;

volatile short isrcnt;

int data_conv(char data[],int baias,short num){
    
    data[baias] = num >> 8;
    data[baias+1] = num >> 0;
    
    return  baias+2;
}

inline void PID() {
    
    dt = 1 / isr_clock;
    P  = target - temp_Count;
    I += P * dt;
    //D  = (P - preP) / dt;
    preP = P;

    //ans += Kp * P + Ki * I + Kd * D;
    ans += Kp * P + Ki * I;
}

CY_ISR(dtisr_func){
    
    //Count = 0;
    isrcnt++; 
    QuadDec_SetCounter(0);
    
    PID();
    
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    PWM_Start();
    
    //PWM_WriteCompare(100);
    USBUART_Start(0,USBUART_5V_OPERATION);
    while(!USBUART_bGetConfiguration()){}
    LCD_Char_Start();
    USBUART_CDC_Init();
    //volatile int dbg_ans = 0;
    

    //int uart_count = 0;
    //char buff[64] = "";

    QuadDec_Start();
    
    dt_isr_StartEx(dtisr_func);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
   
    
    for(;;)
    {
       //dbg_ans = (int)(ans*1000000);
       //dbg_ans = ans;
       // LCD_Char_PrintNumber(Clock_2_GetSourceRegister());
        temp_Count = 0xFFFF / 2;
        // 現在のカウンタ値取得
        
        PWM_WriteCompare(ans);
        
        temp_Count -= QuadDec_GetCounter();
        //LCD_Char_Position(0,0); 
        //LCD_Char_PrintNumber(temp_Count);
        
        Count = (0xFFFF/2) - temp_Count;
        
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
