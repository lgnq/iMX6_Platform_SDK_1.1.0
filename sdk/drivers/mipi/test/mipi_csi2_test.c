/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
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

/*!
 * @file  mipi_csi2_test.c
 * @brief common functions for mipi csi.
 *
 * @ingroup diag_mipi
 */

#include <stdio.h>

#include "sdk.h"
#include "mipi/mipi_common.h"
#include "ipu/ipu_common.h"
#include "iomux_config.h"
#include "registers/regsipu.h"

extern void mipi_csi2_config(void);

int32_t mipi_csi2_test(void)
{
    int32_t ipu_index = 1;
    ips_dev_panel_t *panel;

    printf("Runing mipi csi-2 test.\n");
    ipu1_iomux_config();
    ipu_sw_reset(ipu_index, 1000);

    panel = search_panel("HannStar XGA LVDS");
    panel->panel_init(&ipu_index);

    mipi_csi2_config();

    ipu_mipi_csi2_setup(1, 640, 480, panel);
    ipu_enable_display(ipu_index);

    ipu_channel_buf_ready(ipu_index, 0, 0);
    ipu_channel_buf_ready(ipu_index, 0, 1);
    ipu_channel_buf_ready(ipu_index, 23, 0);
    ipu_channel_buf_ready(ipu_index, 23, 1);

    while (1) {
        printf("Stop MIPI CSI? [y/n]\n");
        if (is_input_char('y', NULL))
            break;
    }

    return TEST_PASSED;
}
