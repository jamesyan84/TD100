#ifndef __ASM_MACH_MFP_PXA910_H
#define __ASM_MACH_MFP_PXA910_H

#include <plat/mfp.h>

/* UART0 */
#define GPIO47_UART0_RXD	MFP_CFG(GPIO47, AF6)
#define GPIO48_UART0_TXD	MFP_CFG(GPIO48, AF6)

/* UART1 */
#define GPIO29_UART1_CTS	MFP_CFG(GPIO29, AF4)
#define GPIO30_UART1_RTS	MFP_CFG(GPIO30, AF4)
#define GPIO31_UART1_TXD	MFP_CFG(GPIO31, AF4)
#define GPIO32_UART1_RXD	MFP_CFG(GPIO32, AF4)

/* UART2 */
#define GPIO43_UART2_RXD	MFP_CFG(GPIO43, AF7)
#define GPIO44_UART2_TXD	MFP_CFG(GPIO44, AF7)
#define GPIO51_UART2_RXD	MFP_CFG(GPIO51, AF1)
#define GPIO52_UART2_TXD	MFP_CFG(GPIO52, AF1)

/*IRDA*/
#define GPIO51_IRDA_SHDN	MFP_CFG(GPIO51, AF0)

/* SMC */
#define SM_nCS0_nCS0		MFP_CFG(SM_nCS0, AF0)
#define SM_ADV_SM_ADV		MFP_CFG(SM_ADV, AF0)
#define SM_SCLK_SM_SCLK		MFP_CFG(SM_SCLK, AF0)
#define SM_SCLK_SM_SCLK		MFP_CFG(SM_SCLK, AF0)
#define SM_BE0_SM_BE0		MFP_CFG(SM_BE0, AF1)
#define SM_BE1_SM_BE1		MFP_CFG(SM_BE1, AF1)

/* I2C */
#define GPIO53_CI2C_SCL		MFP_CFG(GPIO53, AF2)
#define GPIO54_CI2C_SDA		MFP_CFG(GPIO54, AF2)

/* SSP1 (I2S) */
#define GPIO24_SSP1_SDATA_IN	MFP_CFG_DRV(GPIO24, AF1, MEDIUM)
#define GPIO21_SSP1_BITCLK	MFP_CFG_DRV(GPIO21, AF1, MEDIUM)
#define GPIO20_SSP1_SYSCLK	MFP_CFG_DRV(GPIO20, AF1, MEDIUM)
#define GPIO22_SSP1_SYNC	MFP_CFG_DRV(GPIO22, AF1, MEDIUM)
#define GPIO23_SSP1_DATA_OUT	MFP_CFG_DRV(GPIO23, AF1, MEDIUM)
#define GPIO124_MN_CLK_OUT	MFP_CFG_DRV(GPIO124, AF1, MEDIUM)
#define GPIO123_CLK_REQ		MFP_CFG_DRV(GPIO123, AF0, MEDIUM)


#define GPIO25_GSSP_BITCLK	MFP_CFG_DRV(GPIO25, AF1, MEDIUM)
#define GPIO26_GSSP_SYNC	MFP_CFG_DRV(GPIO26, AF1, MEDIUM)
#define GPIO27_GSSP_TXD		MFP_CFG_DRV(GPIO27, AF1, MEDIUM)
#define GPIO28_GSSP_RXD		MFP_CFG_DRV(GPIO28, AF1, MEDIUM)


/* one wire */
#define ONEWIRE_CLK_REQ		MFP_CFG(GPIO123, AF2)

/* DFI */
#define DF_IO0_ND_IO0		MFP_CFG(DF_IO0, AF0)
#define DF_IO1_ND_IO1		MFP_CFG(DF_IO1, AF0)
#define DF_IO2_ND_IO2		MFP_CFG(DF_IO2, AF0)
#define DF_IO3_ND_IO3		MFP_CFG(DF_IO3, AF0)
#define DF_IO4_ND_IO4		MFP_CFG(DF_IO4, AF0)
#define DF_IO5_ND_IO5		MFP_CFG(DF_IO5, AF0)
#define DF_IO6_ND_IO6		MFP_CFG(DF_IO6, AF0)
#define DF_IO7_ND_IO7		MFP_CFG(DF_IO7, AF0)
#define DF_IO8_ND_IO8		MFP_CFG(DF_IO8, AF0)
#define DF_IO9_ND_IO9		MFP_CFG(DF_IO9, AF0)
#define DF_IO10_ND_IO10		MFP_CFG(DF_IO10, AF0)
#define DF_IO11_ND_IO11		MFP_CFG(DF_IO11, AF0)
#define DF_IO12_ND_IO12		MFP_CFG(DF_IO12, AF0)
#define DF_IO13_ND_IO13		MFP_CFG(DF_IO13, AF0)
#define DF_IO14_ND_IO14		MFP_CFG(DF_IO14, AF0)
#define DF_IO15_ND_IO15		MFP_CFG(DF_IO15, AF0)
#define DF_nCS0_SM_nCS2_nCS0	MFP_CFG(DF_nCS0_SM_nCS2, AF0)
#define DF_ALE_SM_WEn_ND_ALE	MFP_CFG(DF_ALE_SM_WEn, AF1)
#define DF_CLE_SM_OEn_ND_CLE	MFP_CFG(DF_CLE_SM_OEn, AF0)
#define DF_WEn_DF_WEn		MFP_CFG(DF_WEn, AF1)
#define DF_REn_DF_REn		MFP_CFG(DF_REn, AF1)
#define DF_RDY0_DF_RDY0		MFP_CFG(DF_RDY0, AF0)

/*keypad*/
#define GPIO00_KP_MKIN0		MFP_CFG(GPIO0, AF1)
#define GPIO01_KP_MKOUT0	MFP_CFG(GPIO1, AF1)
#define GPIO02_KP_MKIN1		MFP_CFG(GPIO2, AF1)
#define GPIO03_KP_MKOUT1	MFP_CFG(GPIO3, AF1)
#define GPIO04_KP_MKIN2		MFP_CFG(GPIO4, AF1)
#define GPIO05_KP_MKOUT2	MFP_CFG(GPIO5, AF1)
#define GPIO06_KP_MKIN3		MFP_CFG(GPIO6, AF1)
#define GPIO07_KP_MKOUT3	MFP_CFG(GPIO7, AF1)
#define GPIO08_KP_MKIN4		MFP_CFG(GPIO8, AF1)
#define GPIO09_KP_MKOUT4	MFP_CFG(GPIO9, AF1)
#define GPIO10_KP_MKIN5		MFP_CFG(GPIO10, AF1)
#define GPIO11_KP_MKOUT5	MFP_CFG(GPIO11, AF1)
#define GPIO12_KP_MKIN6		MFP_CFG(GPIO12, AF1)
#define GPIO13_KP_MKOUT6	MFP_CFG(GPIO13, AF1)
#define GPIO14_KP_MKIN7		MFP_CFG(GPIO14, AF1)
#define GPIO15_KP_MKOUT7	MFP_CFG(GPIO15, AF1)
#define GPIO16_KP_DKIN0		MFP_CFG(GPIO16, AF1)
#define GPIO17_KP_DKIN1		MFP_CFG(GPIO17, AF1)
#define GPIO18_KP_DKIN2		MFP_CFG(GPIO18, AF1)
#define GPIO19_KP_DKIN3		MFP_CFG(GPIO19, AF1)

/* LCD */
#define GPIO81_LCD_FCLK		MFP_CFG(GPIO81, AF1)
#define GPIO82_LCD_LCLK		MFP_CFG(GPIO82, AF1)
#define GPIO83_LCD_PCLK		MFP_CFG(GPIO83, AF1)
#define GPIO84_LCD_DENA		MFP_CFG(GPIO84, AF1)
#define GPIO85_LCD_DD0		MFP_CFG(GPIO85, AF1)
#define GPIO86_LCD_DD1		MFP_CFG(GPIO86, AF1)
#define GPIO87_LCD_DD2		MFP_CFG(GPIO87, AF1)
#define GPIO88_LCD_DD3		MFP_CFG(GPIO88, AF1)
#define GPIO89_LCD_DD4		MFP_CFG(GPIO89, AF1)
#define GPIO90_LCD_DD5		MFP_CFG(GPIO90, AF1)
#define GPIO91_LCD_DD6		MFP_CFG(GPIO91, AF1)
#define GPIO92_LCD_DD7		MFP_CFG(GPIO92, AF1)
#define GPIO93_LCD_DD8		MFP_CFG(GPIO93, AF1)
#define GPIO94_LCD_DD9		MFP_CFG(GPIO94, AF1)
#define GPIO95_LCD_DD10		MFP_CFG(GPIO95, AF1)
#define GPIO96_LCD_DD11		MFP_CFG(GPIO96, AF1)
#define GPIO97_LCD_DD12		MFP_CFG(GPIO97, AF1)
#define GPIO98_LCD_DD13		MFP_CFG(GPIO98, AF1)
#define GPIO100_LCD_DD14	MFP_CFG(GPIO100, AF1)
#define GPIO101_LCD_DD15	MFP_CFG(GPIO101, AF1)
#define GPIO102_LCD_DD16	MFP_CFG(GPIO102, AF1)
#define GPIO103_LCD_DD17	MFP_CFG(GPIO103, AF1)
#define GPIO104_LCD_DD18	MFP_CFG(GPIO104, AF1)
#define GPIO105_LCD_DD19	MFP_CFG(GPIO105, AF1)
#define GPIO106_LCD_DD20	MFP_CFG(GPIO106, AF1)
#define GPIO107_LCD_DD21	MFP_CFG(GPIO107, AF1)
#define GPIO108_LCD_DD22	MFP_CFG(GPIO108, AF1)
#define GPIO109_LCD_DD23	MFP_CFG(GPIO109, AF1)

#define GPIO104_LCD_SPIDOUT	MFP_CFG(GPIO104, AF3)
#define GPIO105_LCD_SPIDIN	MFP_CFG(GPIO105, AF3)
#define GPIO107_LCD_CS1 	MFP_CFG(GPIO107, AF3)
#define GPIO108_LCD_DCLK	MFP_CFG(GPIO108, AF3)

#define GPIO106_LCD_RESET	MFP_CFG(GPIO106, AF0)

/*smart panel*/
#define GPIO82_LCD_A0		MFP_CFG(GPIO82, AF0)
#define GPIO83_LCD_WR		MFP_CFG(GPIO83, AF0)
#define GPIO103_LCD_CS		MFP_CFG(GPIO103, AF0)

/*1wire*/
#define GPIO106_1WIRE		MFP_CFG(GPIO106, AF3)

/*CCIC*/
#define GPIO67_CCIC_IN7		MFP_CFG_DRV(GPIO67, AF1, MEDIUM)
#define GPIO68_CCIC_IN6		MFP_CFG_DRV(GPIO68, AF1, MEDIUM)
#define GPIO69_CCIC_IN5		MFP_CFG_DRV(GPIO69, AF1, MEDIUM)
#define GPIO70_CCIC_IN4		MFP_CFG_DRV(GPIO70, AF1, MEDIUM)
#define GPIO71_CCIC_IN3		MFP_CFG_DRV(GPIO71, AF1, MEDIUM)
#define GPIO72_CCIC_IN2		MFP_CFG_DRV(GPIO72, AF1, MEDIUM)
#define GPIO73_CCIC_IN1		MFP_CFG_DRV(GPIO73, AF1, MEDIUM)
#define GPIO74_CCIC_IN0		MFP_CFG_DRV(GPIO74, AF1, MEDIUM)
#define GPIO75_CAM_HSYNC	MFP_CFG_DRV(GPIO75, AF1, MEDIUM)
#define GPIO76_CAM_VSYNC	MFP_CFG_DRV(GPIO76, AF1, MEDIUM)
#define GPIO77_CAM_MCLK		MFP_CFG_DRV(GPIO77, AF1, MEDIUM)
#define GPIO78_CAM_PCLK		MFP_CFG_DRV(GPIO78, AF1, MEDIUM)

/* MMC1 */
#define MMC1_DAT7_MMC1_DAT7	MFP_CFG_DRV(MMC1_DAT7, AF0, MEDIUM)
#define MMC1_DAT6_MMC1_DAT6	MFP_CFG_DRV(MMC1_DAT6, AF0, MEDIUM)
#define MMC1_DAT5_MMC1_DAT5	MFP_CFG_DRV(MMC1_DAT5, AF0, MEDIUM)
#define MMC1_DAT4_MMC1_DAT4	MFP_CFG_DRV(MMC1_DAT4, AF0, MEDIUM)
#define MMC1_DAT3_MMC1_DAT3	MFP_CFG_DRV(MMC1_DAT3, AF0, FAST)
#define MMC1_DAT2_MMC1_DAT2	MFP_CFG_DRV(MMC1_DAT2, AF0, FAST)
#define MMC1_DAT1_MMC1_DAT1	MFP_CFG_DRV(MMC1_DAT1, AF0, FAST)
#define MMC1_DAT0_MMC1_DAT0	MFP_CFG_DRV(MMC1_DAT0, AF0, FAST)
#define MMC1_CMD_MMC1_CMD	MFP_CFG_DRV(MMC1_CMD, AF0, FAST)
#define MMC1_CLK_MMC1_CLK	MFP_CFG_DRV(MMC1_CLK, AF0, FAST)
#define MMC1_CD_MMC1_CD		MFP_CFG_DRV(MMC1_CD, AF0, MEDIUM)
#define MMC1_WP_MMC1_WP		MFP_CFG_DRV(MMC1_WP, AF0, MEDIUM)

/* MMC2 */
#define MMC2_DAT3_GPIO_37       MFP_CFG_DRV(GPIO37, AF1, MEDIUM)
#define MMC2_DAT2_GPIO_38       MFP_CFG_DRV(GPIO38, AF1, MEDIUM)
#define MMC2_DAT1_GPIO_39       MFP_CFG_DRV(GPIO39, AF1, MEDIUM)
#define MMC2_DAT1_IRQ_GPIO_39   MFP_CFG(GPIO39, AF0)
#define MMC2_DAT0_GPIO_40       MFP_CFG_DRV(GPIO40, AF1, MEDIUM)
#define MMC2_CMD_GPIO_41        MFP_CFG_DRV(GPIO41, AF1, MEDIUM)
#define MMC2_CLK_GPIO_42        MFP_CFG_DRV(GPIO42, AF1, VERY_SLOW)

/* wlan */
#define WLAN_PD_GPIO_14                 MFP_CFG(GPIO14, AF0)
#define WLAN_RESET_GPIO_20              MFP_CFG(GPIO20, AF0)
#define WIB_EN_GPIO_33                  MFP_CFG(GPIO33, AF0)
#define WLAN_BT_RESET_GPIO_34           MFP_CFG(GPIO34, AF0)
#define WLAN_MAC_WAKEUP_GPIO_35         MFP_CFG(GPIO35, AF0)
#define WLAN_LHC_GPIO_36                MFP_CFG(GPIO36, AF0)

/* PWM */
#define GPIO27_PWM3_AF2		MFP_CFG(GPIO27, AF2)
#define GPIO51_PWM2_OUT		MFP_CFG(GPIO51, AF2)
#define GPIO117_PWM1_OUT	MFP_CFG(GPIO117, AF2)
#define GPIO118_PWM2_OUT	MFP_CFG(GPIO118, AF2)
#define GPIO119_PWM3_OUT	MFP_CFG(GPIO119, AF2)
#define GPIO120_PWM4_OUT	MFP_CFG(GPIO120, AF2)

/* cmmb spi */
#define GPIO33_SSP0_CLK		MFP_CFG(GPIO33, AF2)
#define GPIO34_SSP0_FRM		MFP_CFG(GPIO34, AF0)
#define GPIO35_SSP0_RXD		MFP_CFG(GPIO35, AF2)
#define GPIO36_SSP0_TXD		MFP_CFG(GPIO36, AF2)
#define GPIO14				MFP_CFG(GPIO14, AF0)

/* TDS */
#define GPIO55_TDS_LNACTRL		MFP_CFG(GPIO55, AF0)
#define GPIO56_TDS_MIXCTRL		MFP_CFG(GPIO56, AF0)
#define GPIO57_TDS_TRXSW		MFP_CFG(GPIO57, AF0)
#define GPIO58_TDS_RXREV		MFP_CFG(GPIO58, AF0)
#define GPIO59_TDS_TXREV		MFP_CFG(GPIO59, AF0)

/*GPIO*/
#define GPIO0_GPIO0			MFP_CFG(GPIO0, AF0)
#define GPIO1_GPIO1			MFP_CFG(GPIO1, AF0)
#define GPIO2_GPIO2			MFP_CFG(GPIO2, AF0)
#define GPIO3_GPIO3			MFP_CFG(GPIO3, AF0)
#define GPIO4_GPIO4			MFP_CFG(GPIO4, AF0)
#define GPIO5_GPIO5			MFP_CFG(GPIO5, AF0)
#define GPIO6_GPIO6			MFP_CFG(GPIO6, AF0)
#define GPIO7_GPIO7			MFP_CFG(GPIO7, AF0)
#define GPIO8_GPIO8			MFP_CFG(GPIO8, AF0)
#define GPIO9_GPIO9			MFP_CFG(GPIO9, AF0)
#define GPIO13_GPIO13			MFP_CFG(GPIO13, AF0)
#define GPIO15_GPIO15			MFP_CFG(GPIO15, AF0)
#define GPIO16_GPIO16			MFP_CFG(GPIO16, AF0)
#define GPIO17_GPIO17			MFP_CFG(GPIO17, AF0)
#define GPIO18_GPIO18			MFP_CFG(GPIO18, AF0)
#define GPIO19_GPIO19			MFP_CFG(GPIO19, AF0)
#define GPIO20_GPIO20			MFP_CFG(GPIO20, AF0)
#define GPIO43_GPIO43			MFP_CFG(GPIO43, AF0)
#define GPIO44_GPIO44			MFP_CFG(GPIO44, AF0)
#define GPIO45_GPIO45			MFP_CFG(GPIO45, AF0)
#define GPIO46_GPIO46			MFP_CFG(GPIO46, AF0)
#define GPIO49_GPIO49			MFP_CFG(GPIO49, AF0)
#define GPIO50_GPIO50			MFP_CFG(GPIO50, AF0)
#define GPIO53_GPIO53			MFP_CFG(GPIO53, AF0)
#define GPIO54_GPIO54			MFP_CFG(GPIO54, AF0)
#define GPIO60_GPIO60			MFP_CFG(GPIO60, AF0)
#define GPIO79_GPIO79			MFP_CFG(GPIO79, AF0)
#define GPIO81_GPIO81			MFP_CFG(GPIO81, AF0)
#define GPIO82_GPIO82			MFP_CFG(GPIO82, AF0)
#define GPIO84_GPIO84			MFP_CFG(GPIO84, AF0)
#define GPIO104_GPIO104			MFP_CFG(GPIO104, AF0)
#define GPIO105_GPIO105			MFP_CFG(GPIO105, AF0)
#define GPIO106_GPIO106			MFP_CFG(GPIO106, AF0)
#define GPIO107_GPIO107			MFP_CFG(GPIO107, AF0)
#define GPIO108_GPIO108			MFP_CFG(GPIO108, AF0)
#define GPIO109_GPIO109			MFP_CFG(GPIO109, AF0)
#define GPIO124_GPIO124			MFP_CFG(GPIO124, AF0)

/*GPIO*/
#define GPIO15_GPIO15		MFP_CFG(GPIO15, AF0)

/* RF */
/* TDS */
#define GPIO61_GPIO61			MFP_CFG(GPIO61, AF5)
#define GPIO62_GPIO62			MFP_CFG(GPIO62, AF5)
#define GPIO63_GPIO63			MFP_CFG(GPIO63, AF5)
#define GPIO64_GPIO64			MFP_CFG(GPIO64, AF5)
#define GPIO65_GPIO65			MFP_CFG(GPIO65, AF5)
#define GPIO66_GPIO66			MFP_CFG(GPIO66, AF5)
/* GSM */
#define GPIO110_GPIO110			MFP_CFG(GPIO110, AF0)
#define GPIO111_GPIO111			MFP_CFG(GPIO111, AF0)
#define GPIO112_GPIO112			MFP_CFG(GPIO112, AF0)
#define GPIO113_GPIO113			MFP_CFG(GPIO113, AF0)
#define GPIO114_GPIO114			MFP_CFG(GPIO114, AF1)
#define GPIO115_GPIO115			MFP_CFG(GPIO115, AF1)
#define GPIO116_GPIO116			MFP_CFG(GPIO116, AF1)

/* max3373 i2c_trst */
#define I2C_TRST_GPIO86			MFP_CFG_DRV(DF_nCS1_SM_nCS3, AF1, FAST)
#define I2C_TRST_GPIO35			MFP_CFG_DRV(GPIO35, AF0, FAST)

#endif /* __ASM_MACH MFP_PXA910_H */
