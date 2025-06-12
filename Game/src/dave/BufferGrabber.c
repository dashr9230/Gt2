
// File: C:\CodePrj\Gt2\Game\src\dave\BufferGrabber.c

/*
 * ModName: .\Debug\BufferGrabber.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\BufferGrabber.obj
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
 * 
 * 
 */

/*
 * (000354) S_LDATA32: [0003:00074FB0], Type:    T_32PVOID(0403), HiddenPtr
 */

/*
 * (000090) S_GPROC32: [0001:00001C40], Cb: 0000000D, Type:             0x1D1B, GrabSetup
 *          Parent: 00000000, End: 000000D4, Next: 000000D8
 *          Debug start: 00000003, Debug end: 0000000B
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), buf
 * 
 * (0000D4) S_END
 */

/*
 * (0000D8) S_GPROC32: [0001:00001C4D], Cb: 00000032, Type:             0x1D1B, GrabByte
 *          Parent: 00000000, End: 00000128, Next: 0000012C
 *          Debug start: 00000004, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (000108)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), p
 * (000118)  S_BPREL32: [FFFFFFFC], Type:   T_32PUCHAR(0420), buf
 * 
 * (000128) S_END
 */

/*
 * (00012C) S_GPROC32: [0001:00001C7F], Cb: 00000034, Type:             0x1D1C, GrabShort
 *          Parent: 00000000, End: 00000184, Next: 00000188
 *          Debug start: 00000004, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (000160)  S_BPREL32: [00000008], Type:  T_32PUSHORT(0421), p
 * (000170)  S_BPREL32: [FFFFFFFC], Type:  T_32PUSHORT(0421), sbuf
 * 
 * (000184) S_END
 */

/*
 * (000188) S_GPROC32: [0001:00001CB3], Cb: 00000032, Type:             0x1D1E, GrabLong
 *          Parent: 00000000, End: 000001DC, Next: 000001E0
 *          Debug start: 00000004, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (0001B8)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), p
 * (0001C8)  S_BPREL32: [FFFFFFFC], Type:   T_32PULONG(0422), lbuf
 * 
 * (0001DC) S_END
 */

/*
 * (0001E0) S_GPROC32: [0001:00001CE5], Cb: 00000032, Type:             0x1D20, GrabFloat
 *          Parent: 00000000, End: 00000238, Next: 0000023C
 *          Debug start: 00000004, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (000214)  S_BPREL32: [00000008], Type:  T_32PREAL32(0440), p
 * (000224)  S_BPREL32: [FFFFFFFC], Type:  T_32PREAL32(0440), fbuf
 * 
 * (000238) S_END
 */

/*
 * (00023C) S_GPROC32: [0001:00001D17], Cb: 00000022, Type:             0x1D65, GrabPtr2Block
 *          Parent: 00000000, End: 00000294, Next: 00000298
 *          Debug start: 00000004, Debug end: 0000001E
 *          Flags: Frame Ptr Present
 * 
 * (000274)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ct
 * (000284)  S_BPREL32: [FFFFFFFC], Type:    T_32PVOID(0403), Ptr
 * 
 * (000294) S_END
 */

/*
 * (000298) S_GPROC32: [0001:00001D39], Cb: 00000029, Type:             0x1D21, GrabBlock
 *          Parent: 00000000, End: 000002EC, Next: 000002F0
 *          Debug start: 00000003, Debug end: 00000027
 *          Flags: Frame Ptr Present
 * 
 * (0002CC)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), p
 * (0002DC)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), ct
 * 
 * (0002EC) S_END
 */

/*
 * (0002F0) S_GPROC32: [0001:00001D62], Cb: 00000035, Type:             0x1B5B, GrabStr
 *          Parent: 00000000, End: 00000350, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000031
 *          Flags: Frame Ptr Present
 * 
 * (000320)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), buf
 * (000330)  S_BPREL32: [FFFFFFF8], Type:      T_RCHAR(0070), ch
 * (000340)  S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), p
 * 
 * (000350) S_END
 */

