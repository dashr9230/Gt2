
// File: C:\CodePrj\Gt2\Game\src\dave\FileGrabber.c

/*
 * ModName: .\Debug\FileGrabber.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\FileGrabber.obj
 * 
 * (000044) S_COMPILE:
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
 * (000370) S_LDATA32: [0003:00074FF0], Type:    T_32PVOID(0403), HiddenHandle
 * (00038C) S_LDATA32: [0003:00074FF8], Type:       T_INT4(0074), readerr
 * (0003A4) S_LDATA32: [0003:00074FF4], Type:      T_ULONG(0022), temp
 */

/*
 * (000090) S_GPROC32: [0001:0000CCE0], Cb: 00000063, Type:             0x1A13, FileGrabOpen
 *          Parent: 00000000, End: 0000010C, Next: 00000110
 *          Debug start: 00000004, Debug end: 0000005F
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Filename
 * 
 * (0000DC)  S_BLOCK32: [0001:0000CD0B], Cb: 0000002F, (none)
 *           Parent: 00000090, End: 00000108
 * 
 * (0000F4)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), error
 * 
 * (000108)  S_END
 * 
 * (00010C) S_END
 */
void FileGrabOpen()
{
	// TODO: FileGrabOpen
}

/*
 * (000110) S_GPROC32: [0001:0000CD43], Cb: 00000013, Type:             0x1C12, FileGrabSize
 *          Parent: 00000000, End: 00000144, Next: 00000148
 *          Debug start: 00000003, Debug end: 00000011
 *          Flags: Frame Ptr Present
 * 
 * (000144) S_END
 */
void FileGrabSize()
{
	// TODO: FileGrabSize
}

/*
 * (000148) S_GPROC32: [0001:0000CD56], Cb: 00000011, Type:             0x1001, FileGrabClose
 *          Parent: 00000000, End: 00000180, Next: 00000184
 *          Debug start: 00000003, Debug end: 0000000F
 *          Flags: Frame Ptr Present
 * 
 * (000180) S_END
 */
void FileGrabClose()
{
	// TODO: FileGrabClose
}

/*
 * (000184) S_GPROC32: [0001:0000CD67], Cb: 00000024, Type:             0x1D1B, FileGrabByte
 *          Parent: 00000000, End: 000001C8, Next: 000001CC
 *          Debug start: 00000003, Debug end: 00000022
 *          Flags: Frame Ptr Present
 * 
 * (0001B8)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), p
 * 
 * (0001C8) S_END
 */
void FileGrabByte()
{
	// TODO: FileGrabByte
}

/*
 * (0001CC) S_GPROC32: [0001:0000CD8B], Cb: 00000024, Type:             0x1D1C, FileGrabShort
 *          Parent: 00000000, End: 00000214, Next: 00000218
 *          Debug start: 00000003, Debug end: 00000022
 *          Flags: Frame Ptr Present
 * 
 * (000204)  S_BPREL32: [00000008], Type:  T_32PUSHORT(0421), p
 * 
 * (000214) S_END
 */
void FileGrabShort()
{
	// TODO: FileGrabShort
}

/*
 * (000218) S_GPROC32: [0001:0000CDAF], Cb: 00000024, Type:             0x1D1E, FileGrabLong
 *          Parent: 00000000, End: 0000025C, Next: 00000260
 *          Debug start: 00000003, Debug end: 00000022
 *          Flags: Frame Ptr Present
 * 
 * (00024C)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), p
 * 
 * (00025C) S_END
 */
void FileGrabLong()
{
	// TODO: FileGrabLong
}

/*
 * (000260) S_GPROC32: [0001:0000CDD3], Cb: 00000024, Type:             0x1D20, FileGrabFloat
 *          Parent: 00000000, End: 000002A8, Next: 000002AC
 *          Debug start: 00000003, Debug end: 00000022
 *          Flags: Frame Ptr Present
 * 
 * (000298)  S_BPREL32: [00000008], Type:  T_32PREAL32(0440), p
 * 
 * (0002A8) S_END
 */
void FileGrabFloat()
{
	// TODO: FileGrabFloat
}

/*
 * (0002AC) S_GPROC32: [0001:0000CDF7], Cb: 00000026, Type:             0x1D21, FileGrabBlock
 *          Parent: 00000000, End: 00000304, Next: 00000308
 *          Debug start: 00000003, Debug end: 00000024
 *          Flags: Frame Ptr Present
 * 
 * (0002E4)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), p
 * (0002F4)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), ct
 * 
 * (000304) S_END
 */
void FileGrabBlock()
{
	// TODO: FileGrabBlock
}

/*
 * (000308) S_GPROC32: [0001:0000CE1D], Cb: 00000048, Type:             0x1B5B, FileGrabStr
 *          Parent: 00000000, End: 0000036C, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000044
 *          Flags: Frame Ptr Present
 * 
 * (00033C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), buf
 * (00034C)  S_BPREL32: [FFFFFFF8], Type:      T_RCHAR(0070), ch
 * (00035C)  S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), p
 * 
 * (00036C) S_END
 */
void FileGrabStr()
{
	// TODO: FileGrabStr
}

