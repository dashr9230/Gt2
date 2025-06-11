
// File: C:\CodePrj\Gt2\Engine\src\D3dfuncs.c

/*
 * ModName: .\Debug\D3dfuncs.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\D3dfuncs.obj
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
 * (000090) S_GPROC32: [0001:0008B440], Cb: 0000007B, Type:             0x1F47, LockSurface
 *          Parent: 00000000, End: 000000DC, Next: 000000E0
 *          Debug start: 00000003, Debug end: 00000079
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x112D, lpSurface
 * 
 * (0000DC) S_END
 * 
 * (0000E0) S_GPROC32: [0001:0008B4BB], Cb: 000000C3, Type:             0x1F49, VPORT_Setup
 *          Parent: 00000000, End: 000001B0, Next: 000001B4
 *          Debug start: 00000006, Debug end: 000000BF
 *          Flags: Frame Ptr Present
 * 
 * (000114)  S_BPREL32: [00000008], Type:             0x12D3, ViewBuffer2
 * (00012C)  S_BPREL32: [0000000C], Type:             0x11D7, Rect
 * (000140)  S_BPREL32: [00000010], Type:      T_ULONG(0022), VwpTLX
 * (000154)  S_BPREL32: [00000014], Type:      T_ULONG(0022), VwpTLY
 * (000168)  S_BPREL32: [00000018], Type:      T_ULONG(0022), VwpWidth
 * (000180)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), VwpHeight
 * (000198)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), inv_aspect
 * 
 * (0001B0) S_END
 * 
 * (0001B4) S_GPROC32: [0001:0008B57E], Cb: 0000011A, Type:             0x1F4B, VPORT_SetupProjMatrixEx
 *          Parent: 00000000, End: 000002A4, Next: 000002A8
 *          Debug start: 00000006, Debug end: 00000116
 *          Flags: Frame Ptr Present
 * 
 * (0001F4)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (000208)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), near_plane
 * (000220)  S_BPREL32: [00000010], Type:     T_REAL32(0040), far_plane
 * (000238)  S_BPREL32: [00000014], Type:     T_USHORT(0021), fov
 * (000248)  S_BPREL32: [00000018], Type:      T_ULONG(0022), Mirrored
 * (000260)  S_BPREL32: [FFFFFFF0], Type:     T_USHORT(0021), HalfFov
 * (000274)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), c
 * (000284)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), s
 * (000294)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), Q
 * 
 * (0002A4) S_END
 * 
 * (0002A8) S_GPROC32: [0001:0008B698], Cb: 00000020, Type:             0x1F4D, VPORT_SetupProjMatrix
 *          Parent: 00000000, End: 0000033C, Next: 00000340
 *          Debug start: 00000003, Debug end: 0000001E
 *          Flags: Frame Ptr Present
 * 
 * (0002E8)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (0002FC)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), near_plane
 * (000314)  S_BPREL32: [00000010], Type:     T_REAL32(0040), far_plane
 * (00032C)  S_BPREL32: [00000014], Type:     T_USHORT(0021), fov
 * 
 * (00033C) S_END
 * 
 * (000340) S_GPROC32: [0001:0008B6B8], Cb: 000000DE, Type:             0x1F50, CreateViewport
 *          Parent: 00000000, End: 0000043C, Next: 00000440
 *          Debug start: 00000004, Debug end: 000000DA
 *          Flags: Frame Ptr Present
 * 
 * (000378)  S_BPREL32: [00000008], Type:             0x12D3, ViewBuffer2
 * (000390)  S_BPREL32: [0000000C], Type:             0x146B, ViewPtr2
 * (0003A8)  S_BPREL32: [00000010], Type:             0x11D7, Rect
 * (0003BC)  S_BPREL32: [00000014], Type:             0x1F4E, RectPtr
 * (0003D0)  S_BPREL32: [00000018], Type:      T_ULONG(0022), VwpTLX
 * (0003E4)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), VwpTLY
 * (0003F8)  S_BPREL32: [00000020], Type:      T_ULONG(0022), VwpWidth
 * (000410)  S_BPREL32: [00000024], Type:      T_ULONG(0022), VwpHeight
 * (000428)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), ddrval
 * 
 * (00043C) S_END
 * 
 * (000440) S_GPROC32: [0001:0008B796], Cb: 00000077, Type:             0x1F50, ChangeViewport
 *          Parent: 00000000, End: 0000053C, Next: 00000540
 *          Debug start: 00000004, Debug end: 00000073
 *          Flags: Frame Ptr Present
 * 
 * (000478)  S_BPREL32: [00000008], Type:             0x12D3, ViewBuffer2
 * (000490)  S_BPREL32: [0000000C], Type:             0x146B, ViewPtr2
 * (0004A8)  S_BPREL32: [00000010], Type:             0x11D7, Rect
 * (0004BC)  S_BPREL32: [00000014], Type:             0x1F4E, RectPtr
 * (0004D0)  S_BPREL32: [00000018], Type:      T_ULONG(0022), VwpTLX
 * (0004E4)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), VwpTLY
 * (0004F8)  S_BPREL32: [00000020], Type:      T_ULONG(0022), VwpWidth
 * (000510)  S_BPREL32: [00000024], Type:      T_ULONG(0022), VwpHeight
 * (000528)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), ddrval
 * 
 * (00053C) S_END
 * 
 * (000540) S_GPROC32: [0001:0008B80D], Cb: 00000059, Type:             0x1F52, DestroyViewport
 *          Parent: 00000000, End: 000005A8, Next: 000005AC
 *          Debug start: 00000004, Debug end: 00000055
 *          Flags: Frame Ptr Present
 * 
 * (000578)  S_BPREL32: [00000008], Type:             0x146B, ViewPtr2
 * (000590)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), RefCount
 * 
 * (0005A8) S_END
 * 
 * (0005AC) S_GPROC32: [0001:0008B866], Cb: 00000087, Type:             0x1F54, ClearViewport
 *          Parent: 00000000, End: 0000060C, Next: 00000610
 *          Debug start: 00000003, Debug end: 00000085
 *          Flags: Frame Ptr Present
 * 
 * (0005E4)  S_BPREL32: [00000008], Type:             0x11D7, rect
 * (0005F8)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), options
 * 
 * (00060C) S_END
 * 
 * (000610) S_GPROC32: [0001:0008B8ED], Cb: 0000001C, Type:             0x1F55, FUNC_SetUpdateCallBack
 *          Parent: 00000000, End: 00000684, Next: 00000688
 *          Debug start: 00000004, Debug end: 00000018
 *          Flags: Frame Ptr Present
 * 
 * (000650)  S_BPREL32: [00000008], Type:             0x1418, DisplayCallBack
 * (00066C)  S_BPREL32: [FFFFFFFC], Type:             0x1418, OldUpdate
 * 
 * (000684) S_END
 * 
 * (000688) S_GPROC32: [0001:0008B909], Cb: 0000001C, Type:             0x1F55, FUNC_SetGameCallBack
 *          Parent: 00000000, End: 000006F8, Next: 000006FC
 *          Debug start: 00000004, Debug end: 00000018
 *          Flags: Frame Ptr Present
 * 
 * (0006C4)  S_BPREL32: [00000008], Type:             0x1418, GameCallBack
 * (0006E0)  S_BPREL32: [FFFFFFFC], Type:             0x1418, OldUpdate
 * 
 * (0006F8) S_END
 * 
 * (0006FC) S_GPROC32: [0001:0008B925], Cb: 00000083, Type:             0x1F57, INT_Init
 *          Parent: 00000000, End: 00000750, Next: 00000754
 *          Debug start: 00000003, Debug end: 00000081
 *          Flags: Frame Ptr Present
 * 
 * (00072C)  S_BPREL32: [00000008], Type:             0x174D, FuncPtr
 * (000740)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Fps
 * 
 * (000750) S_END
 * 
 * (000754) S_GPROC32: [0001:0008B9A8], Cb: 00000054, Type:             0x1001, INT_Remove
 *          Parent: 00000000, End: 00000788, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000052
 *          Flags: Frame Ptr Present
 * 
 * (000788) S_END
 * 
 * (00078C) S_GDATA32: [0003:0091ED9C], Type:             0x174D, INT_FuncPtr
 * (0007A8) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (0007C4) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (0007E0) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (0007F8) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (000814) S_GDATA32: [0003:00C97100], Type:             0x1AD2, RS_TransformChge
 * (000834) S_GDATA32: [0003:0091ED8C], Type:             0x1418, UpdateDisplayCallBack
 * (000858) S_GDATA32: [0003:0091ED90], Type:             0x1418, GameUpdateCallBack
 * (00087C) S_GDATA32: [0003:0091ED94], Type:      T_UINT4(0075), INT_Handle
 * (000898) S_GDATA32: [0003:0091ED98], Type:      T_ULONG(0022), INT_Fps
 * (0008B0) S_GDATA32: [0003:0006E6A0], Type:      T_ULONG(0022), INT_Rate
 * 
 */

