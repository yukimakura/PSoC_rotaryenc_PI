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

#define target  32775  //ロータリエンコーダは32767が基準
#define isr_clock 10   //割り込みの周期（Hz）


volatile short temp_Count = 0xFFFF,Count = 0xFFFF;
float ans = 0;
float dt, preTime;
float vol;
float P, I, D, preP;




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
    
    QuadDec_SetCounter(0);
    
    PID();
    
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    PWM_Start();
    
    QuadDec_Start();
    
    dt_isr_StartEx(dtisr_func);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
   
    for(;;)
    {
      
        temp_Count = 0xFFFF / 2;
        // 現在のカウンタ値取得
        
        PWM_WriteCompare(ans);//PIの計算の答えの値を与える
        
        temp_Count -= QuadDec_GetCounter();//ロータリエンコーダから値を取得

    }
}

/* [] END OF FILE */
