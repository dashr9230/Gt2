
// File: C:\CodePrj\Gt2\Engine\src\raster.c

/*
 * ModName: .\Debug\raster.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\raster.obj
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
 * (00008C) S_GPROC32: [0001:0008BB20], Cb: 00000014, Type:             0x17C9, CON_RasterToggle
 *          Parent: 00000000, End: 000000EC, Next: 000000F0
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (0000D8)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (0000EC) S_END
 * 
 * (0000F0) S_GPROC32: [0001:0008BB34], Cb: 000000DF, Type:             0x1001, RAST_Open
 *          Parent: 00000000, End: 00000150, Next: 00000154
 *          Debug start: 00000004, Debug end: 000000DB
 *          Flags: Frame Ptr Present
 * 
 * (000124)  S_BLOCK32: [0001:0008BB45], Cb: 000000BB, (none)
 *           Parent: 000000F0, End: 0000014C
 * 
 * (00013C)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (00014C)  S_END
 * 
 * (000150) S_END
 * 
 * (000154) S_GPROC32: [0001:0008BC13], Cb: 00000025, Type:             0x1001, RAST_Close
 *          Parent: 00000000, End: 00000188, Next: 0000018C
 *          Debug start: 00000003, Debug end: 00000023
 *          Flags: Frame Ptr Present
 * 
 * (000188) S_END
 * 
 * (00018C) S_GPROC32: [0001:0008BC38], Cb: 00000063, Type:             0x1001, RAST_CreateObj
 *          Parent: 00000000, End: 000001C4, Next: 000001C8
 *          Debug start: 00000003, Debug end: 00000061
 *          Flags: Frame Ptr Present
 * 
 * (0001C4) S_END
 * 
 * (0001C8) S_LPROC32: [0001:0008BC9B], Cb: 000005FD, Type:             0x1408, RasterDraw
 *          Parent: 00000000, End: 000002C4, Next: 000002C8
 *          Debug start: 0000000A, Debug end: 000005F8
 *          Flags: Frame Ptr Present
 * 
 * (0001FC)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (00020C)  S_BLOCK32: [0001:0008BCB2], Cb: 000005E1, (none)
 *           Parent: 000001C8, End: 000002C0
 * 
 * (000224)   S_BPREL32: [FFFFFFA4], Type:             0x1ABA, Box
 * (000234)   S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), c
 * (000244)   S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), b
 * (000254)   S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), a
 * (000264)   S_BPREL32: [FFFFFFF0], Type:       T_QUAD(0013), TotTime
 * (000278)   S_BPREL32: [FFFFFFF8], Type:       T_QUAD(0013), STime
 * 
 * (00028C)   S_BLOCK32: [0001:0008BF31], Cb: 00000358, (none)
 *            Parent: 0000020C, End: 000002BC
 * 
 * (0002A4)    S_BPREL32: [FFFFFFA0], Type:             0x1F40, lpTProfile
 * 
 * (0002BC)   S_END
 * 
 * (0002C0)  S_END
 * 
 * (0002C4) S_END
 * 
 * (0002C8) S_GPROC32: [0001:0008C298], Cb: 00000032, Type:             0x1001, RAST_DestroyObj
 *          Parent: 00000000, End: 00000300, Next: 00000304
 *          Debug start: 00000003, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (000300) S_END
 * 
 * (000304) S_GPROC32: [0001:0008C2CA], Cb: 00000057, Type:             0x1001, iRAST_Begin
 *          Parent: 00000000, End: 00000338, Next: 0000033C
 *          Debug start: 00000003, Debug end: 00000055
 *          Flags: Frame Ptr Present
 * 
 * (000338) S_END
 * 
 * (00033C) S_GPROC32: [0001:0008C321], Cb: 0000004D, Type:             0x1001, iRAST_End
 *          Parent: 00000000, End: 00000370, Next: 00000374
 *          Debug start: 00000003, Debug end: 0000004B
 *          Flags: Frame Ptr Present
 * 
 * (000370) S_END
 * 
 * (000374) S_GPROC32: [0001:0008C36E], Cb: 00000056, Type:             0x16A1, iRAST_Mark
 *          Parent: 00000000, End: 000003BC, Next: 000003C0
 *          Debug start: 00000003, Debug end: 00000054
 *          Flags: Frame Ptr Present
 * 
 * (0003A8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Colour
 * 
 * (0003BC) S_END
 * 
 * (0003C0) S_GPROC32: [0001:0008C3C4], Cb: 0000005A, Type:             0x1001, iRAST_BarBegin
 *          Parent: 00000000, End: 000003F8, Next: 000003FC
 *          Debug start: 00000003, Debug end: 00000058
 *          Flags: Frame Ptr Present
 * 
 * (0003F8) S_END
 * 
 * (0003FC) S_GPROC32: [0001:0008C41E], Cb: 000000DD, Type:             0x1001, iRAST_BarEnd
 *          Parent: 00000000, End: 00000460, Next: 00000464
 *          Debug start: 00000004, Debug end: 000000D9
 *          Flags: Frame Ptr Present
 * 
 * (000430)  S_BLOCK32: [0001:0008C43C], Cb: 000000BB, (none)
 *           Parent: 000003FC, End: 0000045C
 * 
 * (000448)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), CurTS
 * 
 * (00045C)  S_END
 * 
 * (000460) S_END
 * 
 * (000464) S_GPROC32: [0001:0008C4FB], Cb: 00000095, Type:             0x16A1, iRAST_Bar
 *          Parent: 00000000, End: 000004DC, Next: 000004E0
 *          Debug start: 00000004, Debug end: 00000091
 *          Flags: Frame Ptr Present
 * 
 * (000498)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Colour
 * 
 * (0004AC)  S_BLOCK32: [0001:0008C515], Cb: 00000077, (none)
 *           Parent: 00000464, End: 000004D8
 * 
 * (0004C4)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), CurTS
 * 
 * (0004D8)  S_END
 * 
 * (0004DC) S_END
 * 
 * (0004E0) S_GPROC32: [0001:0008C590], Cb: 0000005C, Type:             0x1001, iRAST_BarPush
 *          Parent: 00000000, End: 00000518, Next: 0000051C
 *          Debug start: 00000003, Debug end: 0000005A
 *          Flags: Frame Ptr Present
 * 
 * (000518) S_END
 * 
 * (00051C) S_GPROC32: [0001:0008C5EC], Cb: 0000003B, Type:             0x1001, iRAST_BarPop
 *          Parent: 00000000, End: 00000550, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000039
 *          Flags: Frame Ptr Present
 * 
 * (000550) S_END
 * 
 * (000554) S_GDATA32: [0003:0091ED94], Type:      T_UINT4(0075), INT_Handle
 * (000570) S_GDATA32: [0003:0091ED98], Type:      T_ULONG(0022), INT_Fps
 * (000588) S_LDATA32: [0003:0092FE80], Type:      T_ULONG(0022), RAST_Active
 * (0005A4) S_LDATA32: [0003:0091EDF8], Type:             0x1F41, RAST_Bucket
 * (0005C0) S_LDATA32: [0003:0091FDF8], Type:      T_ULONG(0022), CurRasterPos
 * (0005DC) S_LDATA32: [0003:0092FE84], Type:             0x1404, Raster
 * (0005F4) S_GDATA32: [0003:00C964C0], Type:       T_QUAD(0013), PerfAccuracy
 * (000610) S_LDATA32: [0003:0091FE00], Type:             0x1F44, RAST_TSliceBox
 * (000630) S_LDATA32: [0003:0091EDB0], Type:      T_ULONG(0022), CurTSliceUPos
 * (00064C) S_LDATA32: [0003:0091EDB4], Type:      T_ULONG(0022), CurTSliceDPos
 * (000668) S_LDATA32: [0003:0092FE88], Type:       T_INT4(0074), RasterVisible
 * (000684) S_LDATA32: [0003:0091EDB8], Type:             0x17FB, ColStack
 * (00069C) S_LDATA32: [0003:0006E91C], Type:      T_ULONG(0022), StackPos
 * (0006B4) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * 
 */

