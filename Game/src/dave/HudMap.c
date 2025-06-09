
// Original file: C:\CodePrj\Gt2\Game\src\dave\HudMap.c

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
 * ModName: .\Debug\HudFont.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\HudFont.obj
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
 * (00008C) S_GPROC32: [0001:0000E050], Cb: 00000091, Type:             0x1D04, HUDFONT_Allocate
 *          Parent: 00000000, End: 000000E8, Next: 000000EC
 *          Debug start: 00000006, Debug end: 0000008D
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [FFFFFFF8], Type:             0x1C9F, HudFont
 * (0000D8)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), fi
 * 
 * (0000E8) S_END
 * 
 * (0000EC) S_GPROC32: [0001:0000E0E1], Cb: 0000001F, Type:             0x1D06, HUDFONT_Release
 *          Parent: 00000000, End: 00000138, Next: 0000013C
 *          Debug start: 00000003, Debug end: 0000001D
 *          Flags: Frame Ptr Present
 * 
 * (000124)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * 
 * (000138) S_END
 * 
 * (00013C) S_GPROC32: [0001:0000E100], Cb: 00000042, Type:             0x1D08, HUDFONT_Reset
 *          Parent: 00000000, End: 000001C8, Next: 000001CC
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000174)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * (000188)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), sox
 * (000198)  S_BPREL32: [00000010], Type:     T_REAL32(0040), soy
 * (0001A8)  S_BPREL32: [00000014], Type:     T_REAL32(0040), sfx
 * (0001B8)  S_BPREL32: [00000018], Type:     T_REAL32(0040), sfy
 * 
 * (0001C8) S_END
 * 
 * (0001CC) S_GPROC32: [0001:0000E142], Cb: 0000002B, Type:             0x1D06, HUDFONT_Draw
 *          Parent: 00000000, End: 00000214, Next: 00000218
 *          Debug start: 00000003, Debug end: 00000029
 *          Flags: Frame Ptr Present
 * 
 * (000200)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * 
 * (000214) S_END
 * 
 * (000218) S_GPROC32: [0001:0000E16D], Cb: 00000174, Type:             0x1D0A, HUDFONT_AddString
 *          Parent: 00000000, End: 000003A0, Next: 000003A4
 *          Debug start: 00000009, Debug end: 00000170
 *          Flags: Frame Ptr Present
 * 
 * (000254)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * (000268)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000278)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000288)  S_BPREL32: [00000014], Type:     T_REAL32(0040), sx
 * (000298)  S_BPREL32: [00000018], Type:     T_REAL32(0040), sy
 * (0002A8)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), Justify
 * (0002BC)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Color
 * (0002D0)  S_BPREL32: [00000024], Type:             0x16EA, FormatString
 * (0002EC)  S_BPREL32: [FFFFFEE8], Type:   T_32PRCHAR(0470), arglist
 * (000300)  S_BPREL32: [FFFFFEEC], Type:             0x1A12, buffer
 * (000314)  S_BPREL32: [FFFFFFEC], Type:      T_UCHAR(0020), ch
 * (000324)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), texlen
 * (000338)  S_BPREL32: [FFFFFFF4], Type:   T_32PRCHAR(0470), c
 * (000348)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), ycur
 * (00035C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), xcur
 * 
 * (000370)  S_BLOCK32: [0001:0000E256], Cb: 00000082, (none)
 *           Parent: 00000218, End: 0000039C
 * 
 * (000388)   S_BPREL32: [FFFFFEE4], Type:             0x1766, tdtf
 * 
 * (00039C)  S_END
 * 
 * (0003A0) S_END
 * 
 * (0003A4) S_LPROC32: [0001:0000E2E1], Cb: 0000011C, Type:             0x1D0C, HUDFONT_AddChar
 *          Parent: 00000000, End: 0000047C, Next: 00000480
 *          Debug start: 00000006, Debug end: 00000118
 *          Flags: Frame Ptr Present
 * 
 * (0003DC)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * (0003F0)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000400)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000410)  S_BPREL32: [00000014], Type:      T_ULONG(0022), Color
 * (000424)  S_BPREL32: [00000018], Type:             0x1766, tdtf
 * (000438)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), sx
 * (000448)  S_BPREL32: [00000020], Type:     T_REAL32(0040), sy
 * (000458)  S_BPREL32: [FFFFFFF8], Type:             0x13A0, tex
 * (000468)  S_BPREL32: [FFFFFFFC], Type:             0x1413, prim
 * 
 * (00047C) S_END
 * 
 * (000480) S_LPROC32: [0001:0000E3FD], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000504, Next: 00000508
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (0004B4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (0004C4)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (0004D4)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (0004E4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (0004F4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000504) S_END
 * 
 * (000508) S_LPROC32: [0001:0000E477], Cb: 00000085, Type:             0x1D0E, HUDFONT_GetTextExtents
 *          Parent: 00000000, End: 000005E0, Next: 000005E4
 *          Debug start: 00000006, Debug end: 00000081
 *          Flags: Frame Ptr Present
 * 
 * (000548)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * (00055C)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), str
 * (00056C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), sx
 * (00057C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), sy
 * (00058C)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), length
 * (0005A0)  S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), c
 * 
 * (0005B0)  S_BLOCK32: [0001:0000E4C8], Cb: 0000002B, (none)
 *           Parent: 00000508, End: 000005DC
 * 
 * (0005C8)   S_BPREL32: [FFFFFFF4], Type:             0x1766, tdtf
 * 
 * (0005DC)  S_END
 * 
 * (0005E0) S_END
 * 
 * (0005E4) S_GPROC32: [0001:0000E4FC], Cb: 000000A2, Type:             0x1D10, HUDFONT_AddTime
 *          Parent: 00000000, End: 00000708, Next: 0000070C
 *          Debug start: 00000009, Debug end: 0000009E
 *          Flags: Frame Ptr Present
 * 
 * (00061C)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * (000630)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000640)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000650)  S_BPREL32: [00000014], Type:     T_REAL32(0040), sx
 * (000660)  S_BPREL32: [00000018], Type:     T_REAL32(0040), sy
 * (000670)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), Justify
 * (000684)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Color
 * (000698)  S_BPREL32: [00000024], Type:      T_ULONG(0022), Time
 * (0006AC)  S_BPREL32: [FFFFFEF0], Type:      T_ULONG(0022), VisualTime
 * (0006C4)  S_BPREL32: [FFFFFEF4], Type:      T_ULONG(0022), m
 * (0006D4)  S_BPREL32: [FFFFFEF8], Type:             0x1A12, buffer
 * (0006E8)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), h
 * (0006F8)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), s
 * 
 * (000708) S_END
 * 
 * (00070C) S_GPROC32: [0001:0000E59E], Cb: 000000C9, Type:             0x1D10, HUDFONT_AddSplit
 *          Parent: 00000000, End: 00000830, Next: 00000874
 *          Debug start: 00000009, Debug end: 000000C5
 *          Flags: Frame Ptr Present
 * 
 * (000744)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * (000758)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000768)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000778)  S_BPREL32: [00000014], Type:     T_REAL32(0040), sx
 * (000788)  S_BPREL32: [00000018], Type:     T_REAL32(0040), sy
 * (000798)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), Justify
 * (0007AC)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Color
 * (0007C0)  S_BPREL32: [00000024], Type:      T_ULONG(0022), Time
 * (0007D4)  S_BPREL32: [FFFFFEF0], Type:      T_ULONG(0022), VisualTime
 * (0007EC)  S_BPREL32: [FFFFFEF4], Type:      T_ULONG(0022), m
 * (0007FC)  S_BPREL32: [FFFFFEF8], Type:             0x1A12, buffer
 * (000810)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), h
 * (000820)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), s
 * 
 * (000830) S_END
 * 
 * (000834) S_GDATA32: [0003:0099D280], Type:             0x1A44, Filez
 * (000848) S_GDATA32: [0003:0097C104], Type:             0x1418, Op
 * (00085C) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * 
 * (000874) S_GPROC32: [0001:0000E670], Cb: 0000000E, Type:             0x1D12, P2D_SetPrimsToDraw
 *          Parent: 00000000, End: 000008DC, Next: 000008E0
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (0008B0)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (0008C4)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), NumPrims
 * 
 * (0008DC) S_END
 * 
 * (0008E0) S_GPROC32: [0001:0000E680], Cb: 00000015, Type:             0x1D12, P2D_SetCurPrim
 *          Parent: 00000000, End: 00000940, Next: 00000944
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (000918)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (00092C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Prim
 * 
 * (000940) S_END
 * 
 * (000944) S_GPROC32: [0001:0000E6A0], Cb: 0000001F, Type:             0x1CCB, P2D_SetBlendMode
 *          Parent: 00000000, End: 000009A4, Next: 000009A8
 *          Debug start: 00000003, Debug end: 0000001D
 *          Flags: Frame Ptr Present
 * 
 * (00097C)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000990)  S_BPREL32: [0000000C], Type:       T_INT4(0074), Blend
 * 
 * (0009A4) S_END
 * 
 * (0009A8) S_GPROC32: [0001:0000E6C0], Cb: 0000000E, Type:             0x1D14, P2D_SetTPage
 *          Parent: 00000000, End: 00000A04, Next: 00000A08
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (0009DC)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (0009F0)  S_BPREL32: [0000000C], Type:             0x1308, lpTPage
 * 
 * (000A04) S_END
 * 
 * (000A08) S_GPROC32: [0001:0000E6D0], Cb: 0000006D, Type:             0x1D12, P2D_SetAllColour
 *          Parent: 00000000, End: 00000A74, Next: 00000A78
 *          Debug start: 00000004, Debug end: 00000069
 *          Flags: Frame Ptr Present
 * 
 * (000A40)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000A54)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), c
 * (000A64)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), i
 * 
 * (000A74) S_END
 * 
 * (000A78) S_GPROC32: [0001:0000E740], Cb: 00000288, Type:             0x1A77, P2D_SetXYWH
 *          Parent: 00000000, End: 00000B00, Next: 00000B04
 *          Debug start: 00000006, Debug end: 00000284
 *          Flags: Frame Ptr Present
 * 
 * (000AAC)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000AC0)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000AD0)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000AE0)  S_BPREL32: [00000014], Type:     T_REAL32(0040), w
 * (000AF0)  S_BPREL32: [00000018], Type:     T_REAL32(0040), h
 * 
 * (000B00) S_END
 * 
 * (000B04) S_GPROC32: [0001:0000E9D0], Cb: 000000D3, Type:             0x1A77, P2D_SetUVWH
 *          Parent: 00000000, End: 00000B8C, Next: 00000000
 *          Debug start: 00000003, Debug end: 000000D1
 *          Flags: Frame Ptr Present
 * 
 * (000B38)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000B4C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), u
 * (000B5C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), v
 * (000B6C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), w
 * (000B7C)  S_BPREL32: [00000018], Type:     T_REAL32(0040), h
 * 
 * (000B8C) S_END
 * 
 */

