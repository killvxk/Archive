#ifndef _Frag_c_h
#define _Frag_c_h
#define CR0_VALID_BITS (-536543169)
#define EFLAGS_AC (18)
#define EFLAGS_VM (17)
#define EFLAGS_RF (16)
#define EFLAGS_NT (14)
#define EFLAGS_OF (11)
#define EFLAGS_DF (10)
#define EFLAGS_IEF (9)
#define EFLAGS_TF (8)
#define EFLAGS_SF (7)
#define EFLAGS_ZF (6)
#define EFLAGS_AF (4)
#define EFLAGS_PF (2)
#define EFLAGS_CF (0)
#define ARITH_FLAGS_MASK (2261)
#define BaseEFLAGS (2)
#define PermanentEFLAGSbits (-491478)
#define MAIN_CPU (0)
#define NANO_CPU (1)
#define AtNextInstruction (1)
#define AtThisInstruction (0)
#define PAGE_SHIFT (12)
#define PAGE_SIZE (4096)
#define PAGE_MASK (4095)
#define FtLog (1)
#define FtAdd (4)
#define FtSub (7)
#define FtInc (10)
#define FtDec (13)
#define FtAdc (16)
#define FtSbb (19)
#define FtSar (22)
#define FtShr (25)
#define FtShl (28)
#define FtShd (31)
enum SegmentRegister
{
	SEG_ES = 0,
	SEG_CS = 1,
	SEG_SS = 2,
	SEG_DS = 3,
	SEG_FS = 4,
	SEG_GS = 5,
	SEG_LINEAR = 6
};
enum SpecialRegister
{
	CREG_0 = 0,
	CREG_1 = 1,
	CREG_2 = 2,
	CREG_3 = 3,
	CREG_4 = 4,
	CREG_5 = 5,
	CREG_6 = 6,
	CREG_7 = 7,
	DREG_0 = 8,
	DREG_1 = 9,
	DREG_2 = 10,
	DREG_3 = 11,
	DREG_4 = 12,
	DREG_5 = 13,
	DREG_6 = 14,
	DREG_7 = 15,
	TREG_0 = 16,
	TREG_1 = 17,
	TREG_2 = 18,
	TREG_3 = 19,
	TREG_4 = 20,
	TREG_5 = 21,
	TREG_6 = 22,
	TREG_7 = 23
};
enum NpxOpnds
{
	M16I = 0,
	M32I = 1,
	M64I = 2,
	M32R = 3,
	M64R = 4,
	M80R = 5,
	FPSTACK = 6,
	STACKTOP = 7
};
enum FtType
{
	FtZero = 0,
	FtLogB = 1,
	FtLogW = 2,
	FtLogD = 3,
	FtAddB = 4,
	FtAddW = 5,
	FtAddD = 6,
	FtSubB = 7,
	FtSubW = 8,
	FtSubD = 9,
	FtIncB = 10,
	FtIncW = 11,
	FtIncD = 12,
	FtDecB = 13,
	FtDecW = 14,
	FtDecD = 15,
	FtAdcB = 16,
	FtAdcW = 17,
	FtAdcD = 18,
	FtSbbB = 19,
	FtSbbW = 20,
	FtSbbD = 21,
	FtSarB = 22,
	FtSarW = 23,
	FtSarD = 24,
	FtShrB = 25,
	FtShrW = 26,
	FtShrD = 27,
	FtShlB = 28,
	FtShlW = 29,
	FtShlD = 30,
	FtPopf = 31,
	FtShdW = 32,
	FtShdD = 33,
	FtZf = 34,
	FtCf = 35,
	FtCfOf = 36,
	FtCfZf = 37,
	FtCfOfZf = 38,
	FtUnknown = 39
};
enum FtSize
{
	FtB = 0,
	FtW = 1,
	FtD = 2
};
enum CondType
{
	COND_O = 0,
	COND_NO = 1,
	COND_B = 2,
	COND_NB = 3,
	COND_Z = 4,
	COND_NZ = 5,
	COND_BE = 6,
	COND_NBE = 7,
	COND_S = 8,
	COND_NS = 9,
	COND_P = 10,
	COND_NP = 11,
	COND_L = 12,
	COND_NL = 13,
	COND_LE = 14,
	COND_NLE = 15
};
enum EaShapes
{
	EA_DUMMY_ZERO = 0,
	EBX_AL = 1,
	DISP = 2,
	REG = 3,
	REG_DISP = 4,
	REG_REG = 5,
	REG_REG_DISP = 6,
	BASE_SI = 7,
	BASE_SI_DISP = 8,
	OFFS_REG = 9,
	NPX_OFFS = 10
};
enum CodeShapes
{
	CODE_DUMMY_ZERO = 0,
	AAA = 1,
	AAD = 2,
	AAM = 3,
	AAS = 4,
	ADC = 5,
	ADD = 6,
	AND = 7,
	ARPL = 8,
	BOUND = 9,
	BSF = 10,
	BSR = 11,
	BSWAP = 12,
	BT = 13,
	BTC = 14,
	BTR = 15,
	BTS = 16,
	CALLN_IMM = 17,
	CALLN_VIA = 18,
	CALLF_IMM = 19,
	CALLF_VIA = 20,
	CBW = 21,
	CDQ = 22,
	CLC = 23,
	CLD = 24,
	CLI = 25,
	CLTS = 26,
	CMC = 27,
	CMP = 28,
	CMPXCHG = 29,
	CWD = 30,
	CWDE = 31,
	DAA = 32,
	DAS = 33,
	DEC = 34,
	DIV = 35,
	ENTER = 36,
	ENTER0 = 37,
	ENTER1 = 38,
	F2XM1 = 39,
	FABS = 40,
	FADD = 41,
	FADDP = 42,
	FBLD = 43,
	FBSTP = 44,
	FCHS = 45,
	FCOM = 46,
	FCOMP = 47,
	FCOMPP = 48,
	FCOS = 49,
	FDECSTP = 50,
	FDIV = 51,
	FDIVP = 52,
	FDIVRP = 53,
	FDIVR = 54,
	FFREE = 55,
	FFREEP = 56,
	FINCSTP = 57,
	FLD = 58,
	FLD1 = 59,
	FLDCW = 60,
	FLDENV = 61,
	FLDL2E = 62,
	FLDL2T = 63,
	FLDLG2 = 64,
	FLDLN2 = 65,
	FLDPI = 66,
	FLDZ = 67,
	FMUL = 68,
	FMULP = 69,
	FNCLEX = 70,
	FNINIT = 71,
	FNOP = 72,
	FNSAVE = 73,
	FNSTCW = 74,
	FNSTENV = 75,
	FNSTSW = 76,
	FPATAN = 77,
	FPREM = 78,
	FPREM1 = 79,
	FPTAN = 80,
	FRNDINT = 81,
	FRSTOR = 82,
	FSCALE = 83,
	FSIN = 84,
	FSINCOS = 85,
	FSQRT = 86,
	FST = 87,
	FSTP = 88,
	FSUB = 89,
	FSUBP = 90,
	FSUBRP = 91,
	FSUBR = 92,
	FTST = 93,
	FUCOM = 94,
	FUCOMP = 95,
	FUCOMPP = 96,
	FXAM = 97,
	FXCH = 98,
	FXTRACT = 99,
	FYL2X = 100,
	FYL2XP1 = 101,
	HLT = 102,
	IDIV = 103,
	IMULA = 104,
	IMULI = 105,
	IMUL2 = 106,
	INP = 107,
	INC = 108,
	INT1 = 109,
	INT3 = 110,
	INT7 = 111,
	INTO = 112,
	INTR = 113,
	INVD = 114,
	INVLPG = 115,
	IRET = 116,
	JO = 117,
	JNO = 118,
	JB = 119,
	JNB = 120,
	JZ = 121,
	JNZ = 122,
	JBE = 123,
	JNBE = 124,
	JS = 125,
	JNS = 126,
	JP = 127,
	JNP = 128,
	JL = 129,
	JNL = 130,
	JLE = 131,
	JNLE = 132,
	JCXZ = 133,
	JMPN_IMM = 134,
	JMPN_VIA = 135,
	JMPF_IMM = 136,
	JMPF_VIA = 137,
	LAHF = 138,
	LAR = 139,
	LDS = 140,
	LEA = 141,
	LEAVE = 142,
	LES = 143,
	LFS = 144,
	LGDT = 145,
	LGS = 146,
	LIDT = 147,
	LLDT = 148,
	LMSW = 149,
	LOOP = 150,
	LOOPE = 151,
	LOOPNE = 152,
	LSL = 153,
	LSS = 154,
	LTR = 155,
	MOV = 156,
	MOVSX = 157,
	MOVZX = 158,
	MUL = 159,
	NEG = 160,
	NOT = 161,
	NOP = 162,
	OR = 163,
	OUTP = 164,
	POP = 165,
	POP_MEM = 166,
	POP_SR = 167,
	POPA = 168,
	POPF = 169,
	PUSH = 170,
	PUSH_SR = 171,
	PUSHA = 172,
	PUSHF = 173,
	RCL_CL = 174,
	RCL = 175,
	RCL_IMM = 176,
	RCR_CL = 177,
	RCR = 178,
	RCR_IMM = 179,
	RETF = 180,
	RETF_IMM = 181,
	RETN = 182,
	RETN_IMM = 183,
	ROL_CL = 184,
	ROL = 185,
	ROL_IMM = 186,
	ROR_CL = 187,
	ROR = 188,
	ROR_IMM = 189,
	SAHF = 190,
	SAR_CL = 191,
	SAR = 192,
	SAR_IMM = 193,
	SBB = 194,
	SETALCY = 195,
	SETO = 196,
	SETNO = 197,
	SETB = 198,
	SETNB = 199,
	SETZ = 200,
	SETNZ = 201,
	SETBE = 202,
	SETNBE = 203,
	SETS = 204,
	SETNS = 205,
	SETP = 206,
	SETNP = 207,
	SETL = 208,
	SETNL = 209,
	SETLE = 210,
	SETNLE = 211,
	SGDT = 212,
	SHL_CL = 213,
	SHL = 214,
	SHL_IMM = 215,
	SHLD_CL = 216,
	SHLD_IMM = 217,
	SHR_CL = 218,
	SHR = 219,
	SHR_IMM = 220,
	SHRD_CL = 221,
	SHRD_IMM = 222,
	SIDT = 223,
	SLDT = 224,
	SMSW = 225,
	STC = 226,
	STD = 227,
	STI = 228,
	STR = 229,
	SUB = 230,
	TEST = 231,
	VERR = 232,
	VERW = 233,
	WAIT = 234,
	WBINVD = 235,
	XADD = 236,
	XCHG = 237,
	XLAT = 238,
	XOR = 239,
	BOP = 240,
	ZBADOP = 241,
	STOS = 242,
	INS = 243,
	LODS = 244,
	MOVS = 245,
	CMPS = 246,
	SCAS = 247,
	OUTS = 248,
	R_STOS = 249,
	R_INS = 250,
	R_LODS = 251,
	R_MOVS = 252,
	RE_CMPS = 253,
	RNE_CMPS = 254,
	RE_SCAS = 255,
	RNE_SCAS = 256,
	R_OUTS = 257,
	RSRVD = 258,
	FRSRVD = 259,
	RD_SEGR = 260,
	WT_SEGR = 261,
	RD_CDT = 262,
	WT_CDT = 263,
	ZADJUST_HSP = 264,
	ZBPI = 265,
	ZCALLN_IMM = 266,
	ZCOND_RETN = 267,
	ZDISPATCH_EIP = 268,
	ZEDL_BOP03 = 269,
	ZEDL_BOP05 = 270,
	ZEDL_BOP06 = 271,
	ZJC_PROC_PU0PO0 = 272,
	ZJC_PROC_PU0PO2 = 273,
	ZJC_PROC_PU0PO4 = 274,
	ZJC_PROC_PU0POX = 275,
	ZJC_PROC_PU2PO0 = 276,
	ZJC_PROC_PU4PO0 = 277,
	ZJC_PROC_PUXPO0 = 278,
	ZJC_PROC_PUXPOX = 279,
	ZJC_PROC_PUYPOY = 280,
	ZJMPN_IMM = 281,
	ZPAGE_BOUNDARY = 282,
	ZPATCH_ME = 283,
	ZPOST_POP = 284,
	ZRET_TO_COROUTINE = 285,
	ZRESULT_ZERO = 286,
	ZINCREMENT = 287,
	ZSAFETY_CHECK = 288,
	ZFRAG_PROF = 289,
	ZUNSIM = 290
};
#endif /* ! _Frag_c_h */
