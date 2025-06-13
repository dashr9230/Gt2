
// File: C:\CodePrj\Gt2\Game\src\dave\Encrypt.c

/*
 * ModName: .\Debug\Encrypt.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\Encrypt.obj
 * 
 * (000040) S_COMPILE:
 *          Language: C
 *          Target processor: Pentium
 *          Floating-point precision: 0
 *          Floating-point package: hardware
 *          Ambient data: NEAR
 *          Ambient code: NEAR
 *          PCode present: 0
 *          Compiler Version: Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 12.00.8447.0
 */

/*
 * (00031C) S_GDATA32: [0003:00004124], Type:             0x1004, KeyCodeTextTable
 * (00033C) S_GDATA32: [0003:00074FDC], Type:             0x1D2C, LapCode
 */

/*
 * (00008C) S_GPROC32: [0001:0000CA30], Cb: 00000034, Type:             0x1D23, SetDefaultFastestLap
 *          Parent: 00000000, End: 00000108, Next: 0000010C
 *          Debug start: 00000003, Debug end: 00000032
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:             0x1D24, Record
 * (0000DC)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), FastestLap
 * (0000F4)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), Name
 * 
 * (000108) S_END
 */
void SetDefaultFastestLap()
{
	// TODO: SetDefaultFastestLap
}

/*
 * (00010C) S_GPROC32: [0001:0000CA64], Cb: 000000E2, Type:             0x1D26, SetFastestLap
 *          Parent: 00000000, End: 000001D4, Next: 000001D8
 *          Debug start: 00000006, Debug end: 000000DE
 *          Flags: Frame Ptr Present
 * 
 * (000144)  S_BPREL32: [00000008], Type:             0x1D24, Record
 * (000158)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), FastestLap
 * (000170)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), Name
 * (000184)  S_BPREL32: [00000014], Type:       T_INT4(0074), Human
 * (000198)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), VisualTime
 * (0001B0)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), Code
 * (0001C4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), Key
 * 
 * (0001D4) S_END
 */
void SetFastestLap()
{
	// TODO: SetFastestLap
}

/*
 * (0001D8) S_GPROC32: [0001:0000CB46], Cb: 000000FD, Type:             0x1D28, ENCRYPT_Encode
 *          Parent: 00000000, End: 0000028C, Next: 00000290
 *          Debug start: 00000006, Debug end: 000000F9
 *          Flags: Frame Ptr Present
 * 
 * (000210)  S_BPREL32: [00000008], Type:      T_ULONG(0022), FastestLap
 * (000228)  S_BPREL32: [0000000C], Type:   T_32PULONG(0422), Key
 * (000238)  S_BPREL32: [00000010], Type:   T_32PULONG(0422), Code
 * (00024C)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), iKey
 * (000260)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), iCode
 * (000274)  S_BPREL32: [FFFFFFF0], Type:             0x1D2A, SystemTime
 * 
 * (00028C) S_END
 */
void ENCRYPT_Encode()
{
	// TODO: ENCRYPT_Encode
}

/*
 * (000290) S_GPROC32: [0001:0000CC43], Cb: 0000008E, Type:             0x1D2B, ENCRYPT_GetKeyCodeStr
 *          Parent: 00000000, End: 00000318, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000008A
 *          Flags: Frame Ptr Present
 * 
 * (0002D0)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), KeyCode
 * (0002E4)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (0002F4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), Code
 * (000308)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), Key
 * 
 * (000318) S_END
 */
void ENCRYPT_GetKeyCodeStr()
{
	// TODO: ENCRYPT_GetKeyCodeStr
}

