
// File: C:\CodePrj\Gt2\Engine\src\mox\io.c

/*
 * ModName: .\Debug\io.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\io.obj
 * 
 * (00003C) S_COMPILE:
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
 * (0002DC) S_LDATA32: [0003:009317B8], Type:      T_ULONG(0022), nBytes
 * (0002F4) S_LDATA32: [0003:009317BC], Type:             0x1550, fn
 */

/*
 * (000088) S_GPROC32: [0001:00097C60], Cb: 00000104, Type:             0x1E82, IO_Acquire
 *          Parent: 00000000, End: 00000120, Next: 00000124
 *          Debug start: 00000006, Debug end: 00000100
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), p
 * (0000CC)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), n
 * (0000DC)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), x
 * (0000EC)  S_BPREL32: [FFFFFFF4], Type:    T_32PVOID(0403), hF
 * (0000FC)  S_BPREL32: [FFFFFFF8], Type:   T_32PRCHAR(0470), Drive
 * (000110)  S_BPREL32: [FFFFFFFC], Type:   T_32PUCHAR(0420), wp
 * 
 * (000120) S_END
 */
void IO_Acquire()
{
	// TODO: IO_Acquire
}

/*
 * (000124) S_GPROC32: [0001:00097D64], Cb: 00000028, Type:             0x1E83, IO_ReadB
 *          Parent: 00000000, End: 00000174, Next: 00000178
 *          Debug start: 00000003, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (000154)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), F
 * (000164)  S_BPREL32: [0000000C], Type:   T_32PUCHAR(0420), p
 * 
 * (000174) S_END
 */
void IO_ReadB()
{
	// TODO: IO_ReadB
}

/*
 * (000178) S_GPROC32: [0001:00097D8C], Cb: 00000028, Type:             0x1E85, IO_ReadW
 *          Parent: 00000000, End: 000001C8, Next: 000001CC
 *          Debug start: 00000003, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (0001A8)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), F
 * (0001B8)  S_BPREL32: [0000000C], Type:  T_32PUSHORT(0421), p
 * 
 * (0001C8) S_END
 */
void IO_ReadW()
{
	// TODO: IO_ReadW
}

/*
 * (0001CC) S_GPROC32: [0001:00097DB4], Cb: 00000028, Type:             0x1E87, IO_ReadL
 *          Parent: 00000000, End: 0000021C, Next: 00000220
 *          Debug start: 00000003, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (0001FC)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), F
 * (00020C)  S_BPREL32: [0000000C], Type:   T_32PULONG(0422), p
 * 
 * (00021C) S_END
 */
void IO_ReadL()
{
	// TODO: IO_ReadL
}

/*
 * (000220) S_GPROC32: [0001:00097DDC], Cb: 00000028, Type:             0x1E89, IO_ReadF
 *          Parent: 00000000, End: 00000270, Next: 00000274
 *          Debug start: 00000003, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (000250)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), F
 * (000260)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), p
 * 
 * (000270) S_END
 */
void IO_ReadF()
{
	// TODO: IO_ReadF
}

/*
 * (000274) S_GPROC32: [0001:00097E04], Cb: 0000002D, Type:             0x1E8B, IO_ReadBlock
 *          Parent: 00000000, End: 000002D8, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (0002A8)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), F
 * (0002B8)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), p
 * (0002C8)  S_BPREL32: [00000010], Type:      T_ULONG(0022), ct
 * 
 * (0002D8) S_END
 */
void IO_ReadBlock()
{
	// TODO: IO_ReadBlock
}

