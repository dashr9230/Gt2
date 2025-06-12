
// File: C:\CodePrj\Gt2\Game\src\Scavenger\menucar.c

/*
 * ModName: .\Debug\menucar.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\menucar.obj
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
 * 
 * 
 */

/*
 * (000394) S_GDATA32: [0003:0007A0AC], Type:             0x1404, GameWorldObject
 * (0003B4) S_GDATA32: [0003:0097B480], Type:      T_ULONG(0022), objflags
 * (0003CC) S_GDATA32: [0003:012555A8], Type:      T_UCHAR(0020), rendDisable
 * (0003E8) S_GDATA32: [0003:012555A4], Type:      T_ULONG(0022), rendDetach
 * (000404) S_GDATA32: [0003:012555A0], Type:      T_UCHAR(0020), specEnable
 * (000420) S_GDATA32: [0003:00067084], Type:             0x13BB, carshadowtex
 * (00043C) S_GDATA32: [0003:000670A4], Type:             0x184B, mapx
 * (000450) S_GDATA32: [0003:000670A8], Type:             0x184B, mapz
 * (000464) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (00047C) S_GDATA32: [0003:0007A0B8], Type:             0x1404, MenuObject
 * (000498) S_GDATA32: [0003:0006D318], Type:             0x1664, RS
 * (0004AC) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (0004C8) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (0004E4) S_GDATA32: [0003:00C97120], Type:             0x169F, RC
 * (0004F8) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 */

/*
 * (00008C) S_GPROC32: [0001:00052ED0], Cb: 00000032, Type:             0x1A2D, ClearCallback
 *          Parent: 00000000, End: 000000D4, Next: 000000D8
 *          Debug start: 00000003, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x13A8, mdl
 * 
 * (0000D4) S_END
 */

/*
 * (0000D8) S_LPROC32: [0001:00052F02], Cb: 0000000E, Type:             0x1A2F, REND_SetCallback
 *          Parent: 00000000, End: 00000130, Next: 00000134
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (000110)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (000120)  S_BPREL32: [0000000C], Type:             0x13A7, F
 * 
 * (000130) S_END
 */

/*
 * (000134) S_LPROC32: [0001:00052F10], Cb: 0000000E, Type:             0x1A31, REND_SetCallData
 *          Parent: 00000000, End: 0000018C, Next: 00000190
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (00016C)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (00017C)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), D
 * 
 * (00018C) S_END
 */

/*
 * (000190) S_GPROC32: [0001:00052F1E], Cb: 00000389, Type:             0x1A33, MenuDrawCar
 *          Parent: 00000000, End: 00000268, Next: 0000026C
 *          Debug start: 00000009, Debug end: 00000385
 *          Flags: Frame Ptr Present
 * 
 * (0001C4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0001D4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), width
 * (0001E8)  S_BPREL32: [00000010], Type:     T_REAL32(0040), length
 * (0001FC)  S_BPREL32: [FFFFFDC0], Type:             0x1A34, pos
 * (00020C)  S_BPREL32: [FFFFFDCC], Type:             0x1A35, ori
 * (00021C)  S_BPREL32: [FFFFFDD4], Type:      T_ULONG(0022), i
 * (00022C)  S_BPREL32: [FFFFFDD8], Type:             0x180B, GwD
 * (00023C)  S_BPREL32: [FFFFFDDC], Type:             0x1A38, plan
 * (000250)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000268) S_END
 */

/*
 * (00026C) S_GPROC32: [0001:000532A7], Cb: 00000018, Type:             0x1408, MenuCarHandler
 *          Parent: 00000000, End: 000002B4, Next: 000002B8
 *          Debug start: 00000003, Debug end: 00000016
 *          Flags: Frame Ptr Present
 * 
 * (0002A4)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0002B4) S_END
 */

/*
 * (0002B8) S_GPROC32: [0001:000532BF], Cb: 00000234, Type:             0x1408, MenuDrawTrack
 *          Parent: 00000000, End: 00000344, Next: 00000348
 *          Debug start: 00000009, Debug end: 00000230
 *          Flags: Frame Ptr Present
 * 
 * (0002F0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000300)  S_BPREL32: [FFFFFDC8], Type:             0x1A34, pos
 * (000310)  S_BPREL32: [FFFFFDD4], Type:             0x1A35, ori
 * (000320)  S_BPREL32: [FFFFFDDC], Type:      T_ULONG(0022), i
 * (000330)  S_BPREL32: [FFFFFDE0], Type:             0x1A38, plan
 * 
 * (000344) S_END
 */

/*
 * (000348) S_GPROC32: [0001:000534F3], Cb: 0000005D, Type:             0x1408, MenuDrawTrophy
 *          Parent: 00000000, End: 00000390, Next: 00000514
 *          Debug start: 00000003, Debug end: 0000005B
 *          Flags: Frame Ptr Present
 * 
 * (000380)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000390) S_END
 */

/*
 * (000514) S_GPROC32: [0001:00053550], Cb: 00000056, Type:             0x1A19, RSTATES_SetCullMode
 *          Parent: 00000000, End: 00000564, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000054
 *          Flags: Frame Ptr Present
 * 
 * (000550)  S_BPREL32: [00000008], Type:       T_INT4(0074), State
 * 
 * (000564) S_END
 */

