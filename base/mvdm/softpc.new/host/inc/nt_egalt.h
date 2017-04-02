/*
 * SoftPC Revision 2.0
 *
 * Title		: Win32 EGA look-up tables.
 *
 * Description	: 
 *
 * Author		: Dave Bartlett (based on module by John Shanly)
 *
 * Notes		: This file should only be included by nt_ega.c
 *
 */


/*
 * Lookup table for EGA low resolution graphics
 */

static unsigned short ega_low_conv[] = 
{ 
	0x0000, 0x0300, 0x0c00, 0x0f00, 0x0300, 0x3300, 0x3c00, 0x3f00,
	0xc000, 0xc300, 0xcc00, 0xcf00, 0xf000, 0xf300, 0xfc00, 0xff00,
	0x0030, 0x0303, 0x0c03, 0x0f03, 0x3003, 0x3303, 0x3c03, 0x3f03,
	0xc003, 0xc303, 0xcc03, 0xcf03, 0xf003, 0xf303, 0xfc03, 0xff03,
	0x000c, 0x0c03, 0x0c0c, 0x0f0c, 0x300c, 0x330c, 0x3c0c, 0x3f0c,
	0xc00c, 0xc30c, 0xcc0c, 0xcf0c, 0xf00c, 0xf30c, 0xfc0c, 0xff0c,
	0x000f, 0x030f, 0x0c0f, 0x0f0f, 0x300f, 0x330f, 0x3c0f, 0x3f0f,
	0xc00f, 0xc30f, 0xcc0f, 0xcf0f, 0xf00f, 0xf30f, 0xfc0f, 0xff0f,
	0x0030, 0x0330, 0x0c30, 0x0f30, 0x3030, 0x3330, 0x3c30, 0x3f30,
	0xc030, 0xc330, 0xcc30, 0xcf30, 0xf030, 0xf330, 0xfc30, 0xff30,
	0x0033, 0x0333, 0x0c33, 0x0f33, 0x3033, 0x3333, 0x3c33, 0x3f33,
	0xc033, 0xc333, 0xcc33, 0xcf33, 0xf033, 0xf333, 0xfc33, 0xff33,
	0x003c, 0x033c, 0x0c3c, 0x0f3c, 0x303c, 0x333c, 0x3c3c, 0x3f3c,
	0xc03c, 0xc33c, 0xcc3c, 0xcf3c, 0xf03c, 0xf33c, 0xfc3c, 0xff3c,
	0x003f, 0x033f, 0x0c3f, 0x0f3f, 0x303f, 0x333f, 0x3c3f, 0x3f3f,
	0xc03f, 0xc33f, 0xcc3f, 0xcf3f, 0xf03f, 0xf33f, 0xfc3f, 0xff3f,
	0x00c0, 0x03c0, 0x0cc0, 0x0fc0, 0x30c0, 0x33c0, 0x3cc0, 0x3fc0,
	0xc0c0, 0xc3c0, 0xccc0, 0xcfc0, 0xf0c0, 0xf3c0, 0xfcc0, 0xffc0,
	0x00c3, 0x03c3, 0x0cc3, 0x0fc3, 0x30c3, 0x33c3, 0x3cc3, 0x3fc3,
	0xc0c3, 0xc3c3, 0xccc3, 0xcfc3, 0xf0c3, 0xf3c3, 0xfcc3, 0xffc3,
	0x00cc, 0x03cc, 0x0ccc, 0x0fcc, 0x30cc, 0x33cc, 0x3ccc, 0x3fcc,
	0xc0cc, 0xc3cc, 0xcccc, 0xcfcc, 0xf0cc, 0xf3cc, 0xfccc, 0xffcc,
	0x00cf, 0x03cf, 0x0ccf, 0x0fcf, 0x30cf, 0x33cf, 0x3ccf, 0x3fcf,
	0xc0cf, 0xc3cf, 0xcccf, 0xcfcf, 0xf0cf, 0xf3cf, 0xfccf, 0xffcf,
	0x00f0, 0x03f0, 0x0cf0, 0x0ff0, 0x30f0, 0x33f0, 0x3cf0, 0x3ff0,
	0xc0f0, 0xc3f0, 0xccf0, 0xcff0, 0xf0f0, 0xf3f0, 0xfcf0, 0xfff0,
	0x00f3, 0x03f3, 0x0cf3, 0x0ff3, 0x30f3, 0x33f3, 0x3cf3, 0x3ff3,
	0xc0f3, 0xc3f3, 0xccf3, 0xcff3, 0xf0f3, 0xf3f3, 0xfcf3, 0xfff3,
	0x00fc, 0x03fc, 0x0cfc, 0x0ffc, 0x30fc, 0x33fc, 0x3cfc, 0x3ffc,
	0xc0fc, 0xc3fc, 0xccfc, 0xcffc, 0xf0fc, 0xf3fc, 0xfcfc, 0xfffc,
	0x00ff, 0x03ff, 0x0cff, 0x0fff, 0x30ff, 0x33ff, 0x3cff, 0x3fff,
	0xc0ff, 0xc3ff, 0xccff, 0xcfff, 0xf0ff, 0xf3ff, 0xfcff, 0xffff,
};
