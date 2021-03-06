/*++

Copyright (c) 1991  Microsoft Corporation

Module Name:

    Data.c

Abstract:

    This module contains definitions for global data for the IEU and
    VDD debugging extensions

Author:

    Dave Hastings (daveh) 2-Apr-1992

Revision History:

--*/

#include <precomp.h>
#pragma hdrstop
//
// Pointers to NTSD api
//

PNTSD_OUTPUT_ROUTINE Print;
PNTSD_GET_EXPRESSION GetExpression;
PNTSD_GET_SYMBOL GetSymbol;
//PNTSD_DISASM Disassemble;
PNTSD_CHECK_CONTROL_C CheckCtrlC;

PWINDBG_READ_PROCESS_MEMORY_ROUTINE  ReadProcessMemWinDbg;
PWINDBG_WRITE_PROCESS_MEMORY_ROUTINE WriteProcessMemWinDbg;
PWINDBG_GET_THREAD_CONTEXT_ROUTINE   GetThreadContextWinDbg;
PWINDBG_SET_THREAD_CONTEXT_ROUTINE   SetThreadContextWinDbg;

BOOL    fWinDbg;

HANDLE hCurrentProcess;
HANDLE hCurrentThread;
LPSTR lpArgumentString;
