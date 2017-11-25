/*
 * Copyright (C) Seco s.r.l.
 *
 * Author: Giuseppe Pagano <giuseppe.pagano@seco.it>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <asm/arch/mx6-ddr.h>

const struct mx6_mmdc_calibration mx6_a75dl_mmcd_1G_2x512_calib = {
	.p0_mpwldectrl0  = 0x001F001F,
	.p0_mpwldectrl1  = 0x001F001F,
	.p0_mpdgctrl0 	 = 0x42180217,
	.p0_mpdgctrl1 	 = 0x02050209,
	.p0_mprddlctl 	 = 0x494B4C4D,
	.p0_mpwrdlctl 	 = 0x40413133,
};
