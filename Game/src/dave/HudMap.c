
// File: C:\CodePrj\Gt2\Game\src\dave\HudMap.c

/*
 * ModName: .\Debug\HudMap.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\HudMap.obj
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
 * (00008C) S_GPROC32: [0001:0000EAB0], Cb: 00000038, Type:             0x1001, HUDMAP_Allocate
 *          Parent: 00000000, End: 000000DC, Next: 000000E0
 *          Debug start: 00000004, Debug end: 00000034
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [FFFFFFFC], Type:             0x1C4B, RaceCraft
 * 
 * (0000DC) S_END
 * 
 * (0000E0) S_GPROC32: [0001:0000EAE8], Cb: 00000025, Type:             0x1001, HUDMAP_Release
 *          Parent: 00000000, End: 00000130, Next: 00000134
 *          Debug start: 00000004, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (000118)  S_BPREL32: [FFFFFFFC], Type:             0x1C4B, RaceCraft
 * 
 * (000130) S_END
 * 
 * (000134) S_LPROC32: [0001:0000EB0D], Cb: 00000089, Type:             0x1001, HUDMAP_BuildVerts
 *          Parent: 00000000, End: 000001D4, Next: 000001D8
 *          Debug start: 00000006, Debug end: 00000085
 *          Flags: Frame Ptr Present
 * 
 * (000170)  S_BPREL32: [FFFFFFEC], Type:             0x1C4B, RaceCraft
 * (000188)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (000198)  S_BPREL32: [FFFFFFF4], Type:             0x1CE2, info
 * (0001AC)  S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * (0001C4)  S_BPREL32: [FFFFFFFC], Type:             0x1AE3, rs
 * 
 * (0001D4) S_END
 * 
 * (0001D8) S_LPROC32: [0001:0000EB96], Cb: 00000138, Type:             0x1D01, HUDMAP_BuildVert
 *          Parent: 00000000, End: 00000310, Next: 00000314
 *          Debug start: 00000006, Debug end: 00000134
 *          Flags: Frame Ptr Present
 * 
 * (000210)  S_BPREL32: [00000008], Type:             0x1AE3, rs
 * (000220)  S_BPREL32: [0000000C], Type:             0x1CE2, info
 * (000234)  S_BPREL32: [00000010], Type:             0x1C48, vert
 * (000248)  S_BPREL32: [FFFFFFD4], Type:     T_USHORT(0021), v1ang
 * (00025C)  S_BPREL32: [FFFFFFD8], Type:     T_USHORT(0021), angle12
 * (000270)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), v1oy
 * (000284)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), v2oy
 * (000298)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), v1ox
 * (0002AC)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), v2ox
 * (0002C0)  S_BPREL32: [FFFFFFEC], Type:             0x1C45, origin
 * (0002D4)  S_BPREL32: [FFFFFFF4], Type:     T_USHORT(0021), angle2
 * (0002E8)  S_BPREL32: [FFFFFFF8], Type:     T_USHORT(0021), angle1
 * (0002FC)  S_BPREL32: [FFFFFFFC], Type:     T_USHORT(0021), v2ang
 * 
 * (000310) S_END
 * 
 * (000314) S_GPROC32: [0001:0000ECCE], Cb: 000000BF, Type:             0x13EF, HUDMAP_ViewPortAllocate
 *          Parent: 00000000, End: 00000390, Next: 00000394
 *          Debug start: 00000006, Debug end: 000000BB
 *          Flags: Frame Ptr Present
 * 
 * (000354)  S_BPREL32: [00000008], Type:             0x13EB, screen
 * (000368)  S_BPREL32: [FFFFFFF8], Type:             0x1C4B, RaceCraft
 * (000380)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000390) S_END
 * 
 * (000394) S_LPROC32: [0001:0000ED8D], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000418, Next: 0000041C
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (0003C8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (0003D8)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (0003E8)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (0003F8)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (000408)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000418) S_END
 * 
 * (00041C) S_GPROC32: [0001:0000EE07], Cb: 00000017, Type:             0x13EF, HUDMAP_ViewPortRelease
 *          Parent: 00000000, End: 00000470, Next: 00000474
 *          Debug start: 00000003, Debug end: 00000015
 *          Flags: Frame Ptr Present
 * 
 * (00045C)  S_BPREL32: [00000008], Type:             0x13EB, screen
 * 
 * (000470) S_END
 * 
 * (000474) S_GPROC32: [0001:0000EE1E], Cb: 000001BB, Type:             0x13EF, HUDMAP_MoveMap
 *          Parent: 00000000, End: 0000058C, Next: 00000590
 *          Debug start: 00000006, Debug end: 000001B7
 *          Flags: Frame Ptr Present
 * 
 * (0004AC)  S_BPREL32: [00000008], Type:             0x13EB, screen
 * (0004C0)  S_BPREL32: [FFFFFFB4], Type:     T_REAL32(0040), sfx
 * (0004D0)  S_BPREL32: [FFFFFFB8], Type:             0x1C63, Verts
 * (0004E4)  S_BPREL32: [FFFFFFD8], Type:      T_ULONG(0022), j
 * (0004F4)  S_BPREL32: [FFFFFFDC], Type:             0x1C4B, RaceCraft
 * (00050C)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), i
 * (00051C)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), VPy
 * (00052C)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), VPx
 * (00053C)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), VPh
 * (00054C)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), VPw
 * (00055C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), soy
 * (00056C)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), sox
 * (00057C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), sfy
 * 
 * (00058C) S_END
 * 
 * (000590) S_GPROC32: [0001:0000EFD9], Cb: 00000017, Type:             0x13EF, HUDMAP_Draw
 *          Parent: 00000000, End: 000005D8, Next: 00000698
 *          Debug start: 00000003, Debug end: 00000015
 *          Flags: Frame Ptr Present
 * 
 * (0005C4)  S_BPREL32: [00000008], Type:             0x13EB, screen
 * 
 * (0005D8) S_END
 * 
 * (0005DC) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (0005F4) S_GDATA32: [0003:000078D0], Type:             0x1CF7, TrackMaps
 * (00060C) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (000628) S_GDATA32: [0003:0097F140], Type:             0x1404, RaceCraftObject
 * (000648) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000660) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (00067C) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * 
 * (000698) S_GPROC32: [0001:0000EFF0], Cb: 0000001C, Type:             0x1CCB, P2D_SetGouraudShade
 *          Parent: 00000000, End: 000006FC, Next: 00000700
 *          Debug start: 00000003, Debug end: 0000001A
 *          Flags: Frame Ptr Present
 * 
 * (0006D4)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (0006E8)  S_BPREL32: [0000000C], Type:       T_INT4(0074), State
 * 
 * (0006FC) S_END
 * 
 * (000700) S_GPROC32: [0001:0000F010], Cb: 00000270, Type:             0x1D03, P2D_SetXY4
 *          Parent: 00000000, End: 000007C8, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000026C
 *          Flags: Frame Ptr Present
 * 
 * (000734)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000748)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x0
 * (000758)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y0
 * (000768)  S_BPREL32: [00000014], Type:     T_REAL32(0040), x1
 * (000778)  S_BPREL32: [00000018], Type:     T_REAL32(0040), y1
 * (000788)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), x2
 * (000798)  S_BPREL32: [00000020], Type:     T_REAL32(0040), y2
 * (0007A8)  S_BPREL32: [00000024], Type:     T_REAL32(0040), x3
 * (0007B8)  S_BPREL32: [00000028], Type:     T_REAL32(0040), y3
 * 
 * (0007C8) S_END
 * 
 */

