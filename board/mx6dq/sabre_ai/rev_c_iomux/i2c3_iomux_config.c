/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: i2c3_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for i2c3 module.
void i2c3_iomux_config(void)
{
    // Config i2c3.I2C3_SCL to pad GPIO03(R7)
    // HW_IOMUXC_SW_MUX_CTL_PAD_GPIO03_WR(0x00000012);
    // HW_IOMUXC_SW_PAD_CTL_PAD_GPIO03_WR(0x0001B860);
    // HW_IOMUXC_I2C3_SCL_IN_SELECT_INPUT_WR(0x00000001);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_GPIO03(0x020E022C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: esai signal: ESAI_RX_HF_CLK
    //     ALT2 (2) - Select instance: i2c3 signal: I2C3_SCL
    //     ALT3 (3) - Select instance: xtalosc signal: XTALOSC_REF_CLK_24M
    //     ALT4 (4) - Select instance: ccm signal: CCM_CLKO2
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO03
    //     ALT6 (6) - Select instance: usb signal: USB_H1_OC
    //     ALT7 (7) - Select instance: mlb signal: MLB_CLK
    HW_IOMUXC_SW_MUX_CTL_PAD_GPIO03_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO03_SION_V(ENABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO03_MUX_MODE_V(ALT2));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_GPIO03(0x020E05FC)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_GPIO03_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_ODE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_SPEED_V(50MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_DSE_V(60_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO03_SRE_V(SLOW));
    // Pad GPIO03 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_I2C3_SCL_IN_SELECT_INPUT(0x020E08A8)
    //   DAISY [1:0] - MUX Mode Select Field Reset: EIM_DATA17_ALT6
    //                 Selecting Pads Involved in Daisy Chain.
    //     EIM_DATA17_ALT6 (0) - Select signal i2c3 I2C3_SCL as input from pad EIM_DATA17(ALT6).
    //     GPIO03_ALT2 (1) - Select signal i2c3 I2C3_SCL as input from pad GPIO03(ALT2).
    //     GPIO05_ALT6 (2) - Select signal i2c3 I2C3_SCL as input from pad GPIO05(ALT6).
    HW_IOMUXC_I2C3_SCL_IN_SELECT_INPUT_WR(
            BF_IOMUXC_I2C3_SCL_IN_SELECT_INPUT_DAISY_V(GPIO03_ALT2));

    // Config i2c3.I2C3_SDA to pad EIM_DATA18(D24)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_WR(0x00000016);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_WR(0x0001B860);
    // HW_IOMUXC_I2C3_SDA_IN_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18(0x020E0098)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_DATA18
    //     ALT1 (1) - Select instance: ecspi1 signal: ECSPI1_MOSI
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_DI0_PIN07
    //     ALT3 (3) - Select instance: ipu2 signal: IPU2_CSI1_DATA17
    //     ALT4 (4) - Select instance: ipu1 signal: IPU1_DI1_D0_CS
    //     ALT5 (5) - Select instance: gpio3 signal: GPIO3_IO18
    //     ALT6 (6) - Select instance: i2c3 signal: I2C3_SDA
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_SION_V(ENABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_MUX_MODE_V(ALT6));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18(0x020E03AC)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_ODE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_SPEED_V(50MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_DSE_V(60_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_SRE_V(SLOW));
    // Pad EIM_DATA18 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_I2C3_SDA_IN_SELECT_INPUT(0x020E08AC)
    //   DAISY [1:0] - MUX Mode Select Field Reset: EIM_DATA18_ALT6
    //                 Selecting Pads Involved in Daisy Chain.
    //     EIM_DATA18_ALT6 (0) - Select signal i2c3 I2C3_SDA as input from pad EIM_DATA18(ALT6).
    //     GPIO06_ALT2 (1) - Select signal i2c3 I2C3_SDA as input from pad GPIO06(ALT2).
    //     GPIO16_ALT6 (2) - Select signal i2c3 I2C3_SDA as input from pad GPIO16(ALT6).
    HW_IOMUXC_I2C3_SDA_IN_SELECT_INPUT_WR(
            BF_IOMUXC_I2C3_SDA_IN_SELECT_INPUT_DAISY_V(EIM_DATA18_ALT6));

    // Config i2c3.EIMD18_I2C3_STEER to pad EIM_ADDR24(F25)
    // EIMD18_I2C3_STEER; WAS Instance:gpio5 Signal:GPIO5_IO04
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR24_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR24(0x020E00D4)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_ADDR24
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DISP1_DATA19
    //     ALT2 (2) - Select instance: ipu2 signal: IPU2_CSI1_DATA19
    //     ALT3 (3) - Select instance: ipu2 signal: IPU2_SISG2
    //     ALT4 (4) - Select instance: ipu1 signal: IPU1_SISG2
    //     ALT5 (5) - Select instance: gpio5 signal: GPIO5_IO04
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG24
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR24_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR24_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR24_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24(0x020E03E8)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR24_SRE_V(FAST));
}
