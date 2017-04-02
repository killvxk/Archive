extern CONTEXT IntelRegisters;
extern ULONG IntelMSW;
// Flag Register constants

#define FLG_CARRY           0x00000001
#define FLG_CARRY_BIT       0x00000000
#define FLG_PARITY          0x00000004
#define FLG_PARITY_BIT      0x00000003
#define FLG_AUXILIARY       0x00000010
#define FLG_AUXILIARY_BIT   0x00000005
#define FLG_ZERO            0x00000040
#define FLG_ZERO_BIT        0x00000006
#define FLG_SIGN            0x00000080
#define FLG_SIGN_BIT        0x00000007
#define FLG_TRAP            0x00000100
#define FLG_INTERRUPT       0x00000200
#define FLG_INTERRUPT_BIT   0x00000009
#define FLG_DIRECTION       0x00000400
#define FLG_DIRECTION_BIT   0x0000000A
#define FLG_OVERFLOW        0x00000800
#define FLG_OVERFLOW_BIT    0x0000000B
extern ULONG  getEAX(VOID);
extern USHORT getAX(VOID);
extern UCHAR  getAL(VOID);
extern UCHAR  getAH(VOID);
extern ULONG  getEBX(VOID);
extern USHORT getBX(VOID);
extern UCHAR  getBL(VOID);
extern UCHAR  getBH(VOID);
extern ULONG  getECX(VOID);
extern USHORT getCX(VOID);
extern UCHAR  getCL(VOID);
extern UCHAR  getCH(VOID);
extern ULONG  getEDX(VOID);
extern USHORT getDX(VOID);
extern UCHAR  getDL(VOID);
extern UCHAR  getDH(VOID);
extern ULONG  getESP(VOID);
extern USHORT getSP(VOID);
extern ULONG  getEBP(VOID);
extern USHORT getBP(VOID);
extern ULONG  getESI(VOID);
extern USHORT getSI(VOID);
extern ULONG  getEDI(VOID);
extern USHORT getDI(VOID);
extern ULONG  getEIP(VOID);
extern USHORT getIP(VOID);
extern USHORT getCS(VOID);
extern USHORT getSS(VOID);
extern USHORT getDS(VOID);
extern USHORT getES(VOID);
extern USHORT getFS(VOID);
extern USHORT getGS(VOID);
extern ULONG  getCF(VOID);
extern ULONG  getPF(VOID);
extern ULONG  getAF(VOID);
extern ULONG  getZF(VOID);
extern ULONG  getSF(VOID);
extern ULONG  getTF(VOID);
extern ULONG  getIF(VOID);
extern ULONG  getDF(VOID);
extern ULONG  getOF(VOID);
extern USHORT getMSW(VOID);

extern VOID setEAX(ULONG);
extern VOID setAX(USHORT);
extern VOID setAH(UCHAR);
extern VOID setAL(UCHAR);
extern VOID setEBX(ULONG);
extern VOID setBX(USHORT);
extern VOID setBH(UCHAR);
extern VOID setBL(UCHAR);
extern VOID setECX(ULONG);
extern VOID setCX(USHORT);
extern VOID setCH(UCHAR);
extern VOID setCL(UCHAR);
extern VOID setEDX(ULONG);
extern VOID setDX(USHORT);
extern VOID setDH(UCHAR);
extern VOID setDL(UCHAR);
extern VOID setESP(ULONG);
extern VOID setSP(USHORT);
extern VOID setEBP(ULONG);
extern VOID setBP(USHORT);
extern VOID setESI(ULONG);
extern VOID setSI(USHORT);
extern VOID setEDI(ULONG);
extern VOID setDI(USHORT);
extern VOID setEIP(ULONG);
extern VOID setIP(USHORT);
extern VOID setCS(USHORT);
extern VOID setSS(USHORT);
extern VOID setDS(USHORT);
extern VOID setES(USHORT);
extern VOID setFS(USHORT);
extern VOID setGS(USHORT);
extern VOID setCF(ULONG);
extern VOID setPF(ULONG);
extern VOID setAF(ULONG);
extern VOID setZF(ULONG);
extern VOID setSF(ULONG);
extern VOID setIF(ULONG);
extern VOID setDF(ULONG);
extern VOID setOF(ULONG);
extern VOID setMSW(USHORT);

extern ULONG getPE(VOID);

// from v86\monitor\i386
VOID cpu_simulate(VOID);
VOID cpu_interrupt(int Type, int Number);
VOID cpu_init(VOID);
VOID cpu_terminate(VOID);
VOID host_unsimulate(VOID);
VOID host_simulate(VOID);
VOID cpu_createthread(HANDLE Thread);
VOID cpu_exitthread(VOID);
