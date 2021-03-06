/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_emi.c
 *
 * Project:
 * --------
 *   Android
 *
 * Description:
 * ------------
 *   This Module defines the EMI (external memory interface) related setting.
 *
 * Author:
 * -------
 *  EMI auto generator V0.01
 *
 *   Memory Device database last modified on 2012/6/29
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!
 * It could be overwritten!
 *============================================================================
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "mt6577_emi.h"

#define NUM_EMI_RECORD (1)

int num_of_emi_records = NUM_EMI_RECORD ;

EMI_SETTINGS emi_settings[] =
{
     
	//H9TP32A4GDMCPR
	{
		0x0202,		/* TYPE */
		{0x90,0x01,0x4A,0x20,0x58,0x49,0x4E,0x59,0x48,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		0x0000212E,		/* EMI_CONA_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL0_VAL */
		0xAA00AA00,		/* DRAMC_DRVCTL1_VAL */
		0x00000007,		/* DRAMC_DLE_VAL */
		0x45C844B7,		/* DRAMC_ACTIM_VAL */
		0x01000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF00407A0,		/* DRAMC_CONF1_VAL */
		0xA0064170,		/* DRAMC_DDR2CTL_VAL */
		0x9F0D8CA0,		/* DRAMC_TEST2_3_VAL */
		0x00406340,		/* DRAMC_CONF2_VAL */
		0x21322842,		/* DRAMC_PD_CTRL_VAL */
		0x00000000,		/* DRAMC_PADCTL3_VAL */
		0x00000000,		/* DRAMC_DQODLY_VAL */
		0x00000003,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		{0x20000000,0,0,0},		/* DRAM RANK SIZE */
		{0,0,0,0,0,0},		/* reserved 6 */
		0x00010032,		/* DDR2_MODE_REG1 */
		0x00020002,		/* DDR2_MODE_REG2 */
		0x00030003,		/* DDR2_MODE_REG3 */
		0x000A00FF,		/* DDR2_MODE_REG10 */
		0x003F0000		/* DDR2_MODE_REG63 */
	}
};
