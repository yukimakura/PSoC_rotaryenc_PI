/*******************************************************************************
* File Name: enc_a_R.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_enc_a_R_H) /* Pins enc_a_R_H */
#define CY_PINS_enc_a_R_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "enc_a_R_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 enc_a_R__PORT == 15 && ((enc_a_R__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    enc_a_R_Write(uint8 value);
void    enc_a_R_SetDriveMode(uint8 mode);
uint8   enc_a_R_ReadDataReg(void);
uint8   enc_a_R_Read(void);
void    enc_a_R_SetInterruptMode(uint16 position, uint16 mode);
uint8   enc_a_R_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the enc_a_R_SetDriveMode() function.
     *  @{
     */
        #define enc_a_R_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define enc_a_R_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define enc_a_R_DM_RES_UP          PIN_DM_RES_UP
        #define enc_a_R_DM_RES_DWN         PIN_DM_RES_DWN
        #define enc_a_R_DM_OD_LO           PIN_DM_OD_LO
        #define enc_a_R_DM_OD_HI           PIN_DM_OD_HI
        #define enc_a_R_DM_STRONG          PIN_DM_STRONG
        #define enc_a_R_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define enc_a_R_MASK               enc_a_R__MASK
#define enc_a_R_SHIFT              enc_a_R__SHIFT
#define enc_a_R_WIDTH              1u

/* Interrupt constants */
#if defined(enc_a_R__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in enc_a_R_SetInterruptMode() function.
     *  @{
     */
        #define enc_a_R_INTR_NONE      (uint16)(0x0000u)
        #define enc_a_R_INTR_RISING    (uint16)(0x0001u)
        #define enc_a_R_INTR_FALLING   (uint16)(0x0002u)
        #define enc_a_R_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define enc_a_R_INTR_MASK      (0x01u) 
#endif /* (enc_a_R__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define enc_a_R_PS                     (* (reg8 *) enc_a_R__PS)
/* Data Register */
#define enc_a_R_DR                     (* (reg8 *) enc_a_R__DR)
/* Port Number */
#define enc_a_R_PRT_NUM                (* (reg8 *) enc_a_R__PRT) 
/* Connect to Analog Globals */                                                  
#define enc_a_R_AG                     (* (reg8 *) enc_a_R__AG)                       
/* Analog MUX bux enable */
#define enc_a_R_AMUX                   (* (reg8 *) enc_a_R__AMUX) 
/* Bidirectional Enable */                                                        
#define enc_a_R_BIE                    (* (reg8 *) enc_a_R__BIE)
/* Bit-mask for Aliased Register Access */
#define enc_a_R_BIT_MASK               (* (reg8 *) enc_a_R__BIT_MASK)
/* Bypass Enable */
#define enc_a_R_BYP                    (* (reg8 *) enc_a_R__BYP)
/* Port wide control signals */                                                   
#define enc_a_R_CTL                    (* (reg8 *) enc_a_R__CTL)
/* Drive Modes */
#define enc_a_R_DM0                    (* (reg8 *) enc_a_R__DM0) 
#define enc_a_R_DM1                    (* (reg8 *) enc_a_R__DM1)
#define enc_a_R_DM2                    (* (reg8 *) enc_a_R__DM2) 
/* Input Buffer Disable Override */
#define enc_a_R_INP_DIS                (* (reg8 *) enc_a_R__INP_DIS)
/* LCD Common or Segment Drive */
#define enc_a_R_LCD_COM_SEG            (* (reg8 *) enc_a_R__LCD_COM_SEG)
/* Enable Segment LCD */
#define enc_a_R_LCD_EN                 (* (reg8 *) enc_a_R__LCD_EN)
/* Slew Rate Control */
#define enc_a_R_SLW                    (* (reg8 *) enc_a_R__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define enc_a_R_PRTDSI__CAPS_SEL       (* (reg8 *) enc_a_R__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define enc_a_R_PRTDSI__DBL_SYNC_IN    (* (reg8 *) enc_a_R__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define enc_a_R_PRTDSI__OE_SEL0        (* (reg8 *) enc_a_R__PRTDSI__OE_SEL0) 
#define enc_a_R_PRTDSI__OE_SEL1        (* (reg8 *) enc_a_R__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define enc_a_R_PRTDSI__OUT_SEL0       (* (reg8 *) enc_a_R__PRTDSI__OUT_SEL0) 
#define enc_a_R_PRTDSI__OUT_SEL1       (* (reg8 *) enc_a_R__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define enc_a_R_PRTDSI__SYNC_OUT       (* (reg8 *) enc_a_R__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(enc_a_R__SIO_CFG)
    #define enc_a_R_SIO_HYST_EN        (* (reg8 *) enc_a_R__SIO_HYST_EN)
    #define enc_a_R_SIO_REG_HIFREQ     (* (reg8 *) enc_a_R__SIO_REG_HIFREQ)
    #define enc_a_R_SIO_CFG            (* (reg8 *) enc_a_R__SIO_CFG)
    #define enc_a_R_SIO_DIFF           (* (reg8 *) enc_a_R__SIO_DIFF)
#endif /* (enc_a_R__SIO_CFG) */

/* Interrupt Registers */
#if defined(enc_a_R__INTSTAT)
    #define enc_a_R_INTSTAT            (* (reg8 *) enc_a_R__INTSTAT)
    #define enc_a_R_SNAP               (* (reg8 *) enc_a_R__SNAP)
    
	#define enc_a_R_0_INTTYPE_REG 		(* (reg8 *) enc_a_R__0__INTTYPE)
#endif /* (enc_a_R__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_enc_a_R_H */


/* [] END OF FILE */
