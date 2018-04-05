;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.1 Update 1
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Clock_1
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

; Clock_2
Clock_2__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
Clock_2__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
Clock_2__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
Clock_2__CFG2_SRC_SEL_MASK EQU 0x07
Clock_2__INDEX EQU 0x02
Clock_2__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_2__PM_ACT_MSK EQU 0x04
Clock_2__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_2__PM_STBY_MSK EQU 0x04

; Clock_3
Clock_3__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock_3__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock_3__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock_3__CFG2_SRC_SEL_MASK EQU 0x07
Clock_3__INDEX EQU 0x01
Clock_3__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_3__PM_ACT_MSK EQU 0x02
Clock_3__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_3__PM_STBY_MSK EQU 0x02

; LCD_Char_LCDPort
LCD_Char_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_Char_LCDPort__0__MASK EQU 0x01
LCD_Char_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_Char_LCDPort__0__PORT EQU 2
LCD_Char_LCDPort__0__SHIFT EQU 0
LCD_Char_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_Char_LCDPort__1__MASK EQU 0x02
LCD_Char_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_Char_LCDPort__1__PORT EQU 2
LCD_Char_LCDPort__1__SHIFT EQU 1
LCD_Char_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_Char_LCDPort__2__MASK EQU 0x04
LCD_Char_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__2__PORT EQU 2
LCD_Char_LCDPort__2__SHIFT EQU 2
LCD_Char_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_Char_LCDPort__3__MASK EQU 0x08
LCD_Char_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_Char_LCDPort__3__PORT EQU 2
LCD_Char_LCDPort__3__SHIFT EQU 3
LCD_Char_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_Char_LCDPort__4__MASK EQU 0x10
LCD_Char_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_Char_LCDPort__4__PORT EQU 2
LCD_Char_LCDPort__4__SHIFT EQU 4
LCD_Char_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_Char_LCDPort__5__MASK EQU 0x20
LCD_Char_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_Char_LCDPort__5__PORT EQU 2
LCD_Char_LCDPort__5__SHIFT EQU 5
LCD_Char_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_Char_LCDPort__6__MASK EQU 0x40
LCD_Char_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_Char_LCDPort__6__PORT EQU 2
LCD_Char_LCDPort__6__SHIFT EQU 6
LCD_Char_LCDPort__AG EQU CYREG_PRT2_AG
LCD_Char_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_Char_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_Char_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_Char_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_Char_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_Char_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_Char_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_Char_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_Char_LCDPort__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_Char_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_Char_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_Char_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_Char_LCDPort__MASK EQU 0x7F
LCD_Char_LCDPort__PORT EQU 2
LCD_Char_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_Char_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_Char_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_Char_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_Char_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_Char_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_Char_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_Char_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_Char_LCDPort__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__SHIFT EQU 0
LCD_Char_LCDPort__SLW EQU CYREG_PRT2_SLW

; PWM
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB05_06_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB05_06_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
PWM_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB05_CTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB05_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B1_UDB05_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB05_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB05_MSK
PWM_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB05_06_ST
PWM_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
PWM_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B1_UDB05_MSK
PWM_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
PWM_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
PWM_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
PWM_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B1_UDB05_ST_CTL
PWM_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B1_UDB05_ST_CTL
PWM_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B1_UDB05_ST
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB04_05_A0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB04_05_A1
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB04_05_D0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB04_05_D1
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB04_05_F0
PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB04_05_F1
PWM_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B1_UDB04_A0_A1
PWM_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B1_UDB04_A0
PWM_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B1_UDB04_A1
PWM_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B1_UDB04_D0_D1
PWM_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B1_UDB04_D0
PWM_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B1_UDB04_D1
PWM_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
PWM_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B1_UDB04_F0_F1
PWM_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B1_UDB04_F0
PWM_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B1_UDB04_F1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B1_UDB05_06_A0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B1_UDB05_06_A1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B1_UDB05_06_D0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B1_UDB05_06_D1
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B1_UDB05_06_F0
PWM_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B1_UDB05_06_F1
PWM_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B1_UDB05_A0_A1
PWM_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B1_UDB05_A0
PWM_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B1_UDB05_A1
PWM_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B1_UDB05_D0_D1
PWM_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B1_UDB05_D0
PWM_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B1_UDB05_D1
PWM_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B1_UDB05_F0_F1
PWM_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B1_UDB05_F0
PWM_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B1_UDB05_F1
PWM_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
PWM_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL

; Pin_1
Pin_1__0__INTTYPE EQU CYREG_PICU3_INTTYPE1
Pin_1__0__MASK EQU 0x02
Pin_1__0__PC EQU CYREG_PRT3_PC1
Pin_1__0__PORT EQU 3
Pin_1__0__SHIFT EQU 1
Pin_1__AG EQU CYREG_PRT3_AG
Pin_1__AMUX EQU CYREG_PRT3_AMUX
Pin_1__BIE EQU CYREG_PRT3_BIE
Pin_1__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Pin_1__BYP EQU CYREG_PRT3_BYP
Pin_1__CTL EQU CYREG_PRT3_CTL
Pin_1__DM0 EQU CYREG_PRT3_DM0
Pin_1__DM1 EQU CYREG_PRT3_DM1
Pin_1__DM2 EQU CYREG_PRT3_DM2
Pin_1__DR EQU CYREG_PRT3_DR
Pin_1__INP_DIS EQU CYREG_PRT3_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT3_LCD_EN
Pin_1__MASK EQU 0x02
Pin_1__PORT EQU 3
Pin_1__PRT EQU CYREG_PRT3_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Pin_1__PS EQU CYREG_PRT3_PS
Pin_1__SHIFT EQU 1
Pin_1__SLW EQU CYREG_PRT3_SLW

; QuadDec
QuadDec_bQuadDec_Stsreg__0__MASK EQU 0x01
QuadDec_bQuadDec_Stsreg__0__POS EQU 0
QuadDec_bQuadDec_Stsreg__1__MASK EQU 0x02
QuadDec_bQuadDec_Stsreg__1__POS EQU 1
QuadDec_bQuadDec_Stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
QuadDec_bQuadDec_Stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB06_07_ST
QuadDec_bQuadDec_Stsreg__2__MASK EQU 0x04
QuadDec_bQuadDec_Stsreg__2__POS EQU 2
QuadDec_bQuadDec_Stsreg__3__MASK EQU 0x08
QuadDec_bQuadDec_Stsreg__3__POS EQU 3
QuadDec_bQuadDec_Stsreg__MASK EQU 0x0F
QuadDec_bQuadDec_Stsreg__MASK_REG EQU CYREG_B1_UDB06_MSK
QuadDec_bQuadDec_Stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
QuadDec_bQuadDec_Stsreg__STATUS_REG EQU CYREG_B1_UDB06_ST
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB06_07_A0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB06_07_A1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB06_07_D0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB06_07_D1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB06_07_ACTL
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB06_07_F0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB06_07_F1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__A0_A1_REG EQU CYREG_B0_UDB06_A0_A1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__A0_REG EQU CYREG_B0_UDB06_A0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__A1_REG EQU CYREG_B0_UDB06_A1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__D0_D1_REG EQU CYREG_B0_UDB06_D0_D1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__D0_REG EQU CYREG_B0_UDB06_D0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__D1_REG EQU CYREG_B0_UDB06_D1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB06_ACTL
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__F0_F1_REG EQU CYREG_B0_UDB06_F0_F1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__F0_REG EQU CYREG_B0_UDB06_F0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__F1_REG EQU CYREG_B0_UDB06_F1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB07_08_A0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB07_08_A1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB07_08_D0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB07_08_D1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB07_08_F0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB07_08_F1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__A0_A1_REG EQU CYREG_B0_UDB07_A0_A1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__A0_REG EQU CYREG_B0_UDB07_A0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__A1_REG EQU CYREG_B0_UDB07_A1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__D0_D1_REG EQU CYREG_B0_UDB07_D0_D1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__D0_REG EQU CYREG_B0_UDB07_D0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__D1_REG EQU CYREG_B0_UDB07_D1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__F0_F1_REG EQU CYREG_B0_UDB07_F0_F1
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__F0_REG EQU CYREG_B0_UDB07_F0
QuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__F1_REG EQU CYREG_B0_UDB07_F1
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB04_05_ACTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB04_05_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB04_05_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB04_05_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB04_05_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB04_05_MSK
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB04_05_MSK
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB04_05_MSK
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB04_05_MSK
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__7__MASK EQU 0x80
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__7__POS EQU 7
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB04_ACTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB04_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB04_ST_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__COUNT_REG EQU CYREG_B0_UDB04_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB04_ST_CTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__MASK EQU 0x80
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
QuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB04_MSK
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__0__MASK EQU 0x01
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__0__POS EQU 0
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__1__MASK EQU 0x02
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__1__POS EQU 1
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB07_08_ST
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__2__MASK EQU 0x04
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__2__POS EQU 2
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__3__MASK EQU 0x08
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__3__POS EQU 3
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__5__MASK EQU 0x20
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__5__POS EQU 5
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__6__MASK EQU 0x40
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__6__POS EQU 6
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__MASK EQU 0x6F
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__MASK_REG EQU CYREG_B1_UDB07_MSK
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
QuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__STATUS_REG EQU CYREG_B1_UDB07_ST

; USBUART
USBUART_arb_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_arb_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_arb_int__INTC_MASK EQU 0x400000
USBUART_arb_int__INTC_NUMBER EQU 22
USBUART_arb_int__INTC_PRIOR_NUM EQU 7
USBUART_arb_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_22
USBUART_arb_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_arb_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_bus_reset__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_bus_reset__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_bus_reset__INTC_MASK EQU 0x800000
USBUART_bus_reset__INTC_NUMBER EQU 23
USBUART_bus_reset__INTC_PRIOR_NUM EQU 7
USBUART_bus_reset__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_23
USBUART_bus_reset__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_bus_reset__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_Dm__0__INTTYPE EQU CYREG_PICU15_INTTYPE7
USBUART_Dm__0__MASK EQU 0x80
USBUART_Dm__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC1
USBUART_Dm__0__PORT EQU 15
USBUART_Dm__0__SHIFT EQU 7
USBUART_Dm__AG EQU CYREG_PRT15_AG
USBUART_Dm__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dm__BIE EQU CYREG_PRT15_BIE
USBUART_Dm__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dm__BYP EQU CYREG_PRT15_BYP
USBUART_Dm__CTL EQU CYREG_PRT15_CTL
USBUART_Dm__DM0 EQU CYREG_PRT15_DM0
USBUART_Dm__DM1 EQU CYREG_PRT15_DM1
USBUART_Dm__DM2 EQU CYREG_PRT15_DM2
USBUART_Dm__DR EQU CYREG_PRT15_DR
USBUART_Dm__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dm__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_Dm__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dm__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dm__MASK EQU 0x80
USBUART_Dm__PORT EQU 15
USBUART_Dm__PRT EQU CYREG_PRT15_PRT
USBUART_Dm__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dm__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dm__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dm__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dm__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dm__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dm__PS EQU CYREG_PRT15_PS
USBUART_Dm__SHIFT EQU 7
USBUART_Dm__SLW EQU CYREG_PRT15_SLW
USBUART_Dp__0__INTTYPE EQU CYREG_PICU15_INTTYPE6
USBUART_Dp__0__MASK EQU 0x40
USBUART_Dp__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC0
USBUART_Dp__0__PORT EQU 15
USBUART_Dp__0__SHIFT EQU 6
USBUART_Dp__AG EQU CYREG_PRT15_AG
USBUART_Dp__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dp__BIE EQU CYREG_PRT15_BIE
USBUART_Dp__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dp__BYP EQU CYREG_PRT15_BYP
USBUART_Dp__CTL EQU CYREG_PRT15_CTL
USBUART_Dp__DM0 EQU CYREG_PRT15_DM0
USBUART_Dp__DM1 EQU CYREG_PRT15_DM1
USBUART_Dp__DM2 EQU CYREG_PRT15_DM2
USBUART_Dp__DR EQU CYREG_PRT15_DR
USBUART_Dp__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dp__INTSTAT EQU CYREG_PICU15_INTSTAT
USBUART_Dp__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_Dp__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dp__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dp__MASK EQU 0x40
USBUART_Dp__PORT EQU 15
USBUART_Dp__PRT EQU CYREG_PRT15_PRT
USBUART_Dp__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dp__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dp__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dp__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dp__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dp__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dp__PS EQU CYREG_PRT15_PS
USBUART_Dp__SHIFT EQU 6
USBUART_Dp__SLW EQU CYREG_PRT15_SLW
USBUART_Dp__SNAP EQU CYREG_PICU_15_SNAP_15
USBUART_dp_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_dp_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_dp_int__INTC_MASK EQU 0x1000
USBUART_dp_int__INTC_NUMBER EQU 12
USBUART_dp_int__INTC_PRIOR_NUM EQU 7
USBUART_dp_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_12
USBUART_dp_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_dp_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_ep_0__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_0__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_0__INTC_MASK EQU 0x1000000
USBUART_ep_0__INTC_NUMBER EQU 24
USBUART_ep_0__INTC_PRIOR_NUM EQU 7
USBUART_ep_0__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_24
USBUART_ep_0__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_0__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_ep_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_1__INTC_MASK EQU 0x01
USBUART_ep_1__INTC_NUMBER EQU 0
USBUART_ep_1__INTC_PRIOR_NUM EQU 7
USBUART_ep_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
USBUART_ep_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_ep_2__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_2__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_2__INTC_MASK EQU 0x02
USBUART_ep_2__INTC_NUMBER EQU 1
USBUART_ep_2__INTC_PRIOR_NUM EQU 7
USBUART_ep_2__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
USBUART_ep_2__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_2__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_ep_3__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_3__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_3__INTC_MASK EQU 0x04
USBUART_ep_3__INTC_NUMBER EQU 2
USBUART_ep_3__INTC_PRIOR_NUM EQU 7
USBUART_ep_3__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
USBUART_ep_3__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_3__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_sof_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_sof_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_sof_int__INTC_MASK EQU 0x200000
USBUART_sof_int__INTC_NUMBER EQU 21
USBUART_sof_int__INTC_PRIOR_NUM EQU 7
USBUART_sof_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_21
USBUART_sof_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_sof_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
USBUART_USB__ARB_CFG EQU CYREG_USB_ARB_CFG
USBUART_USB__ARB_EP1_CFG EQU CYREG_USB_ARB_EP1_CFG
USBUART_USB__ARB_EP1_INT_EN EQU CYREG_USB_ARB_EP1_INT_EN
USBUART_USB__ARB_EP1_SR EQU CYREG_USB_ARB_EP1_SR
USBUART_USB__ARB_EP2_CFG EQU CYREG_USB_ARB_EP2_CFG
USBUART_USB__ARB_EP2_INT_EN EQU CYREG_USB_ARB_EP2_INT_EN
USBUART_USB__ARB_EP2_SR EQU CYREG_USB_ARB_EP2_SR
USBUART_USB__ARB_EP3_CFG EQU CYREG_USB_ARB_EP3_CFG
USBUART_USB__ARB_EP3_INT_EN EQU CYREG_USB_ARB_EP3_INT_EN
USBUART_USB__ARB_EP3_SR EQU CYREG_USB_ARB_EP3_SR
USBUART_USB__ARB_EP4_CFG EQU CYREG_USB_ARB_EP4_CFG
USBUART_USB__ARB_EP4_INT_EN EQU CYREG_USB_ARB_EP4_INT_EN
USBUART_USB__ARB_EP4_SR EQU CYREG_USB_ARB_EP4_SR
USBUART_USB__ARB_EP5_CFG EQU CYREG_USB_ARB_EP5_CFG
USBUART_USB__ARB_EP5_INT_EN EQU CYREG_USB_ARB_EP5_INT_EN
USBUART_USB__ARB_EP5_SR EQU CYREG_USB_ARB_EP5_SR
USBUART_USB__ARB_EP6_CFG EQU CYREG_USB_ARB_EP6_CFG
USBUART_USB__ARB_EP6_INT_EN EQU CYREG_USB_ARB_EP6_INT_EN
USBUART_USB__ARB_EP6_SR EQU CYREG_USB_ARB_EP6_SR
USBUART_USB__ARB_EP7_CFG EQU CYREG_USB_ARB_EP7_CFG
USBUART_USB__ARB_EP7_INT_EN EQU CYREG_USB_ARB_EP7_INT_EN
USBUART_USB__ARB_EP7_SR EQU CYREG_USB_ARB_EP7_SR
USBUART_USB__ARB_EP8_CFG EQU CYREG_USB_ARB_EP8_CFG
USBUART_USB__ARB_EP8_INT_EN EQU CYREG_USB_ARB_EP8_INT_EN
USBUART_USB__ARB_EP8_SR EQU CYREG_USB_ARB_EP8_SR
USBUART_USB__ARB_INT_EN EQU CYREG_USB_ARB_INT_EN
USBUART_USB__ARB_INT_SR EQU CYREG_USB_ARB_INT_SR
USBUART_USB__ARB_RW1_DR EQU CYREG_USB_ARB_RW1_DR
USBUART_USB__ARB_RW1_RA EQU CYREG_USB_ARB_RW1_RA
USBUART_USB__ARB_RW1_RA_MSB EQU CYREG_USB_ARB_RW1_RA_MSB
USBUART_USB__ARB_RW1_WA EQU CYREG_USB_ARB_RW1_WA
USBUART_USB__ARB_RW1_WA_MSB EQU CYREG_USB_ARB_RW1_WA_MSB
USBUART_USB__ARB_RW2_DR EQU CYREG_USB_ARB_RW2_DR
USBUART_USB__ARB_RW2_RA EQU CYREG_USB_ARB_RW2_RA
USBUART_USB__ARB_RW2_RA_MSB EQU CYREG_USB_ARB_RW2_RA_MSB
USBUART_USB__ARB_RW2_WA EQU CYREG_USB_ARB_RW2_WA
USBUART_USB__ARB_RW2_WA_MSB EQU CYREG_USB_ARB_RW2_WA_MSB
USBUART_USB__ARB_RW3_DR EQU CYREG_USB_ARB_RW3_DR
USBUART_USB__ARB_RW3_RA EQU CYREG_USB_ARB_RW3_RA
USBUART_USB__ARB_RW3_RA_MSB EQU CYREG_USB_ARB_RW3_RA_MSB
USBUART_USB__ARB_RW3_WA EQU CYREG_USB_ARB_RW3_WA
USBUART_USB__ARB_RW3_WA_MSB EQU CYREG_USB_ARB_RW3_WA_MSB
USBUART_USB__ARB_RW4_DR EQU CYREG_USB_ARB_RW4_DR
USBUART_USB__ARB_RW4_RA EQU CYREG_USB_ARB_RW4_RA
USBUART_USB__ARB_RW4_RA_MSB EQU CYREG_USB_ARB_RW4_RA_MSB
USBUART_USB__ARB_RW4_WA EQU CYREG_USB_ARB_RW4_WA
USBUART_USB__ARB_RW4_WA_MSB EQU CYREG_USB_ARB_RW4_WA_MSB
USBUART_USB__ARB_RW5_DR EQU CYREG_USB_ARB_RW5_DR
USBUART_USB__ARB_RW5_RA EQU CYREG_USB_ARB_RW5_RA
USBUART_USB__ARB_RW5_RA_MSB EQU CYREG_USB_ARB_RW5_RA_MSB
USBUART_USB__ARB_RW5_WA EQU CYREG_USB_ARB_RW5_WA
USBUART_USB__ARB_RW5_WA_MSB EQU CYREG_USB_ARB_RW5_WA_MSB
USBUART_USB__ARB_RW6_DR EQU CYREG_USB_ARB_RW6_DR
USBUART_USB__ARB_RW6_RA EQU CYREG_USB_ARB_RW6_RA
USBUART_USB__ARB_RW6_RA_MSB EQU CYREG_USB_ARB_RW6_RA_MSB
USBUART_USB__ARB_RW6_WA EQU CYREG_USB_ARB_RW6_WA
USBUART_USB__ARB_RW6_WA_MSB EQU CYREG_USB_ARB_RW6_WA_MSB
USBUART_USB__ARB_RW7_DR EQU CYREG_USB_ARB_RW7_DR
USBUART_USB__ARB_RW7_RA EQU CYREG_USB_ARB_RW7_RA
USBUART_USB__ARB_RW7_RA_MSB EQU CYREG_USB_ARB_RW7_RA_MSB
USBUART_USB__ARB_RW7_WA EQU CYREG_USB_ARB_RW7_WA
USBUART_USB__ARB_RW7_WA_MSB EQU CYREG_USB_ARB_RW7_WA_MSB
USBUART_USB__ARB_RW8_DR EQU CYREG_USB_ARB_RW8_DR
USBUART_USB__ARB_RW8_RA EQU CYREG_USB_ARB_RW8_RA
USBUART_USB__ARB_RW8_RA_MSB EQU CYREG_USB_ARB_RW8_RA_MSB
USBUART_USB__ARB_RW8_WA EQU CYREG_USB_ARB_RW8_WA
USBUART_USB__ARB_RW8_WA_MSB EQU CYREG_USB_ARB_RW8_WA_MSB
USBUART_USB__BUF_SIZE EQU CYREG_USB_BUF_SIZE
USBUART_USB__BUS_RST_CNT EQU CYREG_USB_BUS_RST_CNT
USBUART_USB__CR0 EQU CYREG_USB_CR0
USBUART_USB__CR1 EQU CYREG_USB_CR1
USBUART_USB__CWA EQU CYREG_USB_CWA
USBUART_USB__CWA_MSB EQU CYREG_USB_CWA_MSB
USBUART_USB__DMA_THRES EQU CYREG_USB_DMA_THRES
USBUART_USB__DMA_THRES_MSB EQU CYREG_USB_DMA_THRES_MSB
USBUART_USB__DYN_RECONFIG EQU CYREG_USB_DYN_RECONFIG
USBUART_USB__EP_ACTIVE EQU CYREG_USB_EP_ACTIVE
USBUART_USB__EP_TYPE EQU CYREG_USB_EP_TYPE
USBUART_USB__EP0_CNT EQU CYREG_USB_EP0_CNT
USBUART_USB__EP0_CR EQU CYREG_USB_EP0_CR
USBUART_USB__EP0_DR0 EQU CYREG_USB_EP0_DR0
USBUART_USB__EP0_DR1 EQU CYREG_USB_EP0_DR1
USBUART_USB__EP0_DR2 EQU CYREG_USB_EP0_DR2
USBUART_USB__EP0_DR3 EQU CYREG_USB_EP0_DR3
USBUART_USB__EP0_DR4 EQU CYREG_USB_EP0_DR4
USBUART_USB__EP0_DR5 EQU CYREG_USB_EP0_DR5
USBUART_USB__EP0_DR6 EQU CYREG_USB_EP0_DR6
USBUART_USB__EP0_DR7 EQU CYREG_USB_EP0_DR7
USBUART_USB__MEM_DATA EQU CYREG_USB_MEM_DATA_MBASE
USBUART_USB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
USBUART_USB__PM_ACT_MSK EQU 0x01
USBUART_USB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
USBUART_USB__PM_STBY_MSK EQU 0x01
USBUART_USB__SIE_EP_INT_EN EQU CYREG_USB_SIE_EP_INT_EN
USBUART_USB__SIE_EP_INT_SR EQU CYREG_USB_SIE_EP_INT_SR
USBUART_USB__SIE_EP1_CNT0 EQU CYREG_USB_SIE_EP1_CNT0
USBUART_USB__SIE_EP1_CNT1 EQU CYREG_USB_SIE_EP1_CNT1
USBUART_USB__SIE_EP1_CR0 EQU CYREG_USB_SIE_EP1_CR0
USBUART_USB__SIE_EP2_CNT0 EQU CYREG_USB_SIE_EP2_CNT0
USBUART_USB__SIE_EP2_CNT1 EQU CYREG_USB_SIE_EP2_CNT1
USBUART_USB__SIE_EP2_CR0 EQU CYREG_USB_SIE_EP2_CR0
USBUART_USB__SIE_EP3_CNT0 EQU CYREG_USB_SIE_EP3_CNT0
USBUART_USB__SIE_EP3_CNT1 EQU CYREG_USB_SIE_EP3_CNT1
USBUART_USB__SIE_EP3_CR0 EQU CYREG_USB_SIE_EP3_CR0
USBUART_USB__SIE_EP4_CNT0 EQU CYREG_USB_SIE_EP4_CNT0
USBUART_USB__SIE_EP4_CNT1 EQU CYREG_USB_SIE_EP4_CNT1
USBUART_USB__SIE_EP4_CR0 EQU CYREG_USB_SIE_EP4_CR0
USBUART_USB__SIE_EP5_CNT0 EQU CYREG_USB_SIE_EP5_CNT0
USBUART_USB__SIE_EP5_CNT1 EQU CYREG_USB_SIE_EP5_CNT1
USBUART_USB__SIE_EP5_CR0 EQU CYREG_USB_SIE_EP5_CR0
USBUART_USB__SIE_EP6_CNT0 EQU CYREG_USB_SIE_EP6_CNT0
USBUART_USB__SIE_EP6_CNT1 EQU CYREG_USB_SIE_EP6_CNT1
USBUART_USB__SIE_EP6_CR0 EQU CYREG_USB_SIE_EP6_CR0
USBUART_USB__SIE_EP7_CNT0 EQU CYREG_USB_SIE_EP7_CNT0
USBUART_USB__SIE_EP7_CNT1 EQU CYREG_USB_SIE_EP7_CNT1
USBUART_USB__SIE_EP7_CR0 EQU CYREG_USB_SIE_EP7_CR0
USBUART_USB__SIE_EP8_CNT0 EQU CYREG_USB_SIE_EP8_CNT0
USBUART_USB__SIE_EP8_CNT1 EQU CYREG_USB_SIE_EP8_CNT1
USBUART_USB__SIE_EP8_CR0 EQU CYREG_USB_SIE_EP8_CR0
USBUART_USB__SOF0 EQU CYREG_USB_SOF0
USBUART_USB__SOF1 EQU CYREG_USB_SOF1
USBUART_USB__USB_CLK_EN EQU CYREG_USB_USB_CLK_EN
USBUART_USB__USBIO_CR0 EQU CYREG_USB_USBIO_CR0
USBUART_USB__USBIO_CR1 EQU CYREG_USB_USBIO_CR1

; dt_isr
dt_isr__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
dt_isr__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
dt_isr__INTC_MASK EQU 0x08
dt_isr__INTC_NUMBER EQU 3
dt_isr__INTC_PRIOR_NUM EQU 7
dt_isr__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_3
dt_isr__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
dt_isr__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; enc_a
enc_a__0__INTTYPE EQU CYREG_PICU3_INTTYPE6
enc_a__0__MASK EQU 0x40
enc_a__0__PC EQU CYREG_PRT3_PC6
enc_a__0__PORT EQU 3
enc_a__0__SHIFT EQU 6
enc_a__AG EQU CYREG_PRT3_AG
enc_a__AMUX EQU CYREG_PRT3_AMUX
enc_a__BIE EQU CYREG_PRT3_BIE
enc_a__BIT_MASK EQU CYREG_PRT3_BIT_MASK
enc_a__BYP EQU CYREG_PRT3_BYP
enc_a__CTL EQU CYREG_PRT3_CTL
enc_a__DM0 EQU CYREG_PRT3_DM0
enc_a__DM1 EQU CYREG_PRT3_DM1
enc_a__DM2 EQU CYREG_PRT3_DM2
enc_a__DR EQU CYREG_PRT3_DR
enc_a__INP_DIS EQU CYREG_PRT3_INP_DIS
enc_a__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
enc_a__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
enc_a__LCD_EN EQU CYREG_PRT3_LCD_EN
enc_a__MASK EQU 0x40
enc_a__PORT EQU 3
enc_a__PRT EQU CYREG_PRT3_PRT
enc_a__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
enc_a__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
enc_a__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
enc_a__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
enc_a__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
enc_a__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
enc_a__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
enc_a__PS EQU CYREG_PRT3_PS
enc_a__SHIFT EQU 6
enc_a__SLW EQU CYREG_PRT3_SLW

; enc_b
enc_b__0__INTTYPE EQU CYREG_PICU3_INTTYPE7
enc_b__0__MASK EQU 0x80
enc_b__0__PC EQU CYREG_PRT3_PC7
enc_b__0__PORT EQU 3
enc_b__0__SHIFT EQU 7
enc_b__AG EQU CYREG_PRT3_AG
enc_b__AMUX EQU CYREG_PRT3_AMUX
enc_b__BIE EQU CYREG_PRT3_BIE
enc_b__BIT_MASK EQU CYREG_PRT3_BIT_MASK
enc_b__BYP EQU CYREG_PRT3_BYP
enc_b__CTL EQU CYREG_PRT3_CTL
enc_b__DM0 EQU CYREG_PRT3_DM0
enc_b__DM1 EQU CYREG_PRT3_DM1
enc_b__DM2 EQU CYREG_PRT3_DM2
enc_b__DR EQU CYREG_PRT3_DR
enc_b__INP_DIS EQU CYREG_PRT3_INP_DIS
enc_b__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
enc_b__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
enc_b__LCD_EN EQU CYREG_PRT3_LCD_EN
enc_b__MASK EQU 0x80
enc_b__PORT EQU 3
enc_b__PRT EQU CYREG_PRT3_PRT
enc_b__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
enc_b__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
enc_b__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
enc_b__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
enc_b__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
enc_b__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
enc_b__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
enc_b__PS EQU CYREG_PRT3_PS
enc_b__SHIFT EQU 7
enc_b__SLW EQU CYREG_PRT3_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 16
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 16
CYDEV_CHIP_MEMBER_4D EQU 12
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 17
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 15
CYDEV_CHIP_MEMBER_4I EQU 21
CYDEV_CHIP_MEMBER_4J EQU 13
CYDEV_CHIP_MEMBER_4K EQU 14
CYDEV_CHIP_MEMBER_4L EQU 20
CYDEV_CHIP_MEMBER_4M EQU 19
CYDEV_CHIP_MEMBER_4N EQU 9
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 18
CYDEV_CHIP_MEMBER_4Q EQU 11
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 22
CYDEV_CHIP_MEMBER_FM3 EQU 26
CYDEV_CHIP_MEMBER_FM4 EQU 27
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 23
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 24
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 25
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 0
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000008
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP EQU 1
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END