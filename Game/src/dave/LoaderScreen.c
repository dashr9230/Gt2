
// File: C:\CodePrj\Gt2\Game\src\dave\LoaderScreen.c

/*
 * ModName: .\Debug\LoaderScreen.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\LoaderScreen.obj
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
 * (0002C4) S_GDATA32: [0003:0006D3A0], Type:             0x1B2C, TS
 * (0002D8) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (0002F4) S_GDATA32: [0003:0006D70C], Type:             0x1B2D, RS_TextureAddress
 * (000314) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (00032C) S_GDATA32: [0003:0097C104], Type:             0x1418, Op
 * (000340) S_GDATA32: [0003:0097C0D8], Type:             0x1418, NextOp
 * (000358) S_GDATA32: [0003:009CF680], Type:       T_INT4(0074), Filez_Decoded
 * (000374) S_GDATA32: [0003:0099D264], Type:      T_ULONG(0022), Chunkz_This
 * (000390) S_GDATA32: [0003:009CF684], Type:       T_INT4(0074), Chunkz_Failed
 * (0003AC) S_LDATA32: [0003:00075024], Type:             0x13EB, LoaderScreen
 * (0003C8) S_LDATA32: [0003:00075004], Type:             0x13A0, loading00
 * (0003E0) S_LDATA32: [0003:0007500C], Type:             0x13A0, loading01
 * (0003F8) S_LDATA32: [0003:00075008], Type:             0x13A0, loading02
 * (000410) S_LDATA32: [0003:00075010], Type:             0x13A0, loading10
 * (000428) S_LDATA32: [0003:00075018], Type:             0x13A0, loading11
 * (000440) S_LDATA32: [0003:00075014], Type:             0x13A0, loading12
 * (000458) S_LDATA32: [0003:0007501C], Type:             0x1413, LoadDraw
 * (000470) S_LDATA32: [0003:00075020], Type:             0x1413, LoadBarBack
 * (00048C) S_LDATA32: [0003:00075000], Type:             0x1413, LoadBarFront
 * (0004A8) S_LDATA32: [0003:00007F8C], Type:      T_ULONG(0022), colorfront
 * (0004C4) S_LDATA32: [0003:00007F90], Type:      T_ULONG(0022), colorback
 */

/*
 * (000090) S_GPROC32: [0001:00015F40], Cb: 000004FB, Type:             0x1001, InitLoaderScreen
 *          Parent: 00000000, End: 000000EC, Next: 000000F0
 *          Debug start: 00000006, Debug end: 000004F7
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [FFFFFFF8], Type:             0x1413, nxt
 * (0000D8)  S_BPREL32: [FFFFFFFC], Type:             0x1413, prev
 * 
 * (0000EC) S_END
 */

/*
 * (0000F0) S_LPROC32: [0001:0001643B], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000174, Next: 00000178
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (000124)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (000134)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (000144)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (000154)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (000164)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000174) S_END
 */

/*
 * (000178) S_GPROC32: [0001:000164B5], Cb: 00000180, Type:             0x1001, OpLoaderScreen
 *          Parent: 00000000, End: 000001D8, Next: 000001DC
 *          Debug start: 00000006, Debug end: 0000017C
 *          Flags: Frame Ptr Present
 * 
 * (0001B0)  S_BPREL32: [FFFFFFF8], Type:             0x1404, Obj
 * (0001C0)  S_BPREL32: [FFFFFFFC], Type:             0x1B32, Director
 * 
 * (0001D8) S_END
 */

/*
 * (0001DC) S_LPROC32: [0001:00016635], Cb: 00000054, Type:             0x1408, LoaderDestructor
 *          Parent: 00000000, End: 00000224, Next: 00000228
 *          Debug start: 00000003, Debug end: 00000052
 *          Flags: Frame Ptr Present
 * 
 * (000214)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000224) S_END
 */

/*
 * (000228) S_LPROC32: [0001:00016689], Cb: 00000088, Type:             0x1408, drawLoaderScreen
 *          Parent: 00000000, End: 00000270, Next: 00000274
 *          Debug start: 00000006, Debug end: 00000084
 *          Flags: Frame Ptr Present
 * 
 * (000260)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (000270) S_END
 */

/*
 * (000274) S_LPROC32: [0001:00016711], Cb: 00000045, Type:             0x1408, handleLoaderScreen
 *          Parent: 00000000, End: 000002C0, Next: 000004DC
 *          Debug start: 00000003, Debug end: 00000043
 *          Flags: Frame Ptr Present
 * 
 * (0002B0)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0002C0) S_END
 */

/*
 * (0004DC) S_GPROC32: [0001:00016760], Cb: 0000007D, Type:             0x1CCB, P2D_SetScaling
 *          Parent: 00000000, End: 0000053C, Next: 00000540
 *          Debug start: 00000006, Debug end: 00000079
 *          Flags: Frame Ptr Present
 * 
 * (000514)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000528)  S_BPREL32: [0000000C], Type:       T_INT4(0074), State
 * 
 * (00053C) S_END
 */

/*
 * (000540) S_GPROC32: [0001:000167E0], Cb: 00000068, Type:             0x1B2F, TSTATES_SetAddressU
 *          Parent: 00000000, End: 000005A4, Next: 000005A8
 *          Debug start: 00000003, Debug end: 00000066
 *          Flags: Frame Ptr Present
 * 
 * (00057C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Stage
 * (000590)  S_BPREL32: [0000000C], Type:       T_INT4(0074), State
 * 
 * (0005A4) S_END
 */

/*
 * (0005A8) S_GPROC32: [0001:00016850], Cb: 00000068, Type:             0x1B2F, TSTATES_SetAddressV
 *          Parent: 00000000, End: 0000060C, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000066
 *          Flags: Frame Ptr Present
 * 
 * (0005E4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Stage
 * (0005F8)  S_BPREL32: [0000000C], Type:       T_INT4(0074), State
 * 
 * (00060C) S_END
 */

