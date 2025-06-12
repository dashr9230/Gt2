
// File: C:\CodePrj\Gt2\Game\src\dave\Monitor.c

/*
 * ModName: .\Debug\Monitor.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\Monitor.obj
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
 * (000CDC) S_GDATA32: [0003:0097F270], Type:             0x1CB9, ShowMonitor
 * (000CF8) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000D10) S_LDATA32: [0003:000081D0], Type:             0x1AB9, txFlare
 * (000D28) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (000D44) S_LDATA32: [0003:00008210], Type:             0x1ABA, greyBox
 * (000D5C) S_LDATA32: [0003:00075030], Type:             0x1ABA, vrtClm
 * (000D74) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * (000D90) S_GDATA32: [0003:0097F1C0], Type:             0x1CC9, ColMeshColor
 * (000DAC) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 */

/*
 * (00008C) S_GPROC32: [0001:00016C00], Cb: 0000053E, Type:             0x1408, Monitor_Allocate
 *          Parent: 00000000, End: 0000017C, Next: 00000180
 *          Debug start: 00000006, Debug end: 0000053A
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0000D4)  S_BPREL32: [FFFFFFD0], Type:             0x1004, memident
 * (0000EC)  S_BPREL32: [FFFFFFE0], Type:             0x1404, ThisObj
 * (000100)  S_BPREL32: [FFFFFFE4], Type:             0x1A9D, ThisCar
 * (000114)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), k
 * (000124)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), j
 * (000134)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (000144)  S_BPREL32: [FFFFFFF4], Type:             0x1CB9, Mon
 * (000154)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), ypos
 * (000168)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), xpos
 * 
 * (00017C) S_END
 */

/*
 * (000180) S_LPROC32: [0001:0001713E], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000204, Next: 00000208
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (0001B4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (0001C4)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (0001D4)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (0001E4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (0001F4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000204) S_END
 */

/*
 * (000208) S_GPROC32: [0001:000171B8], Cb: 00000189, Type:             0x1408, Monitor_Handler
 *          Parent: 00000000, End: 00000260, Next: 00000264
 *          Debug start: 00000004, Debug end: 00000185
 *          Flags: Frame Ptr Present
 * 
 * (000240)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000250)  S_BPREL32: [FFFFFFFC], Type:             0x1CB9, Mon
 * 
 * (000260) S_END
 */

/*
 * (000264) S_GPROC32: [0001:00017341], Cb: 0000060A, Type:             0x1408, Monitor_Draw
 *          Parent: 00000000, End: 00000390, Next: 00000394
 *          Debug start: 00000006, Debug end: 00000606
 *          Flags: Frame Ptr Present
 * 
 * (000298)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0002A8)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), bottom
 * (0002BC)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), top
 * (0002CC)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), j
 * (0002DC)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), i
 * (0002EC)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), range
 * (000300)  S_BPREL32: [FFFFFFEC], Type:             0x1CB9, Mon
 * (000310)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), ypos
 * (000324)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), xpos
 * (000338)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), scale
 * (00034C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), reading
 * 
 * (000360)  S_BLOCK32: [0001:0001791B], Cb: 0000002C, (none)
 *           Parent: 00000264, End: 0000038C
 * 
 * (000378)   S_BPREL32: [FFFFFFD4], Type:             0x1404, ThisObj
 * 
 * (00038C)  S_END
 * 
 * (000390) S_END
 */

/*
 * (000394) S_GPROC32: [0001:0001794B], Cb: 00000046, Type:             0x1CBB, Monitor_DrawSmartie
 *          Parent: 00000000, End: 00000420, Next: 00000424
 *          Debug start: 00000006, Debug end: 00000042
 *          Flags: Frame Ptr Present
 * 
 * (0003D0)  S_BPREL32: [00000008], Type:             0x13A1, Where
 * (0003E4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), Size
 * (0003F8)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Color
 * (00040C)  S_BPREL32: [FFFFFFF0], Type:             0x1769, Cols
 * 
 * (000420) S_END
 */

/*
 * (000424) S_GPROC32: [0001:00017991], Cb: 00000076, Type:             0x1408, Monitor_Release
 *          Parent: 00000000, End: 0000048C, Next: 00000490
 *          Debug start: 00000006, Debug end: 00000072
 *          Flags: Frame Ptr Present
 * 
 * (00045C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00046C)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (00047C)  S_BPREL32: [FFFFFFFC], Type:             0x1CB9, Mon
 * 
 * (00048C) S_END
 */

/*
 * (000490) S_GPROC32: [0001:00017A07], Cb: 0000002C, Type:             0x1CBD, Monitor_SetColor
 *          Parent: 00000000, End: 0000050C, Next: 00000510
 *          Debug start: 00000004, Debug end: 00000028
 *          Flags: Frame Ptr Present
 * 
 * (0004C8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0004D8)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Channel
 * (0004EC)  S_BPREL32: [00000010], Type:      T_ULONG(0022), col
 * (0004FC)  S_BPREL32: [FFFFFFFC], Type:             0x1CB9, Mon
 * 
 * (00050C) S_END
 */

/*
 * (000510) S_GPROC32: [0001:00017A33], Cb: 00000073, Type:             0x1CBF, Monitor_WatchFloat
 *          Parent: 00000000, End: 000005A8, Next: 000005AC
 *          Debug start: 00000004, Debug end: 0000006F
 *          Flags: Frame Ptr Present
 * 
 * (00054C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00055C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Channel
 * (000570)  S_BPREL32: [00000010], Type:     T_REAL32(0040), source
 * (000584)  S_BPREL32: [00000014], Type:   T_32PRCHAR(0470), Label
 * (000598)  S_BPREL32: [FFFFFFFC], Type:             0x1CB9, Mon
 * 
 * (0005A8) S_END
 */

/*
 * (0005AC) S_GPROC32: [0001:00017AA6], Cb: 00000073, Type:             0x1CC1, Monitor_WatchLong
 *          Parent: 00000000, End: 00000644, Next: 00000648
 *          Debug start: 00000004, Debug end: 0000006F
 *          Flags: Frame Ptr Present
 * 
 * (0005E8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0005F8)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Channel
 * (00060C)  S_BPREL32: [00000010], Type:      T_ULONG(0022), source
 * (000620)  S_BPREL32: [00000014], Type:   T_32PRCHAR(0470), Label
 * (000634)  S_BPREL32: [FFFFFFFC], Type:             0x1CB9, Mon
 * 
 * (000644) S_END
 */

/*
 * (000648) S_GPROC32: [0001:00017B19], Cb: 00000167, Type:             0x1CC3, Monitor_WatchPos
 *          Parent: 00000000, End: 000006E8, Next: 000006EC
 *          Debug start: 00000004, Debug end: 00000163
 *          Flags: Frame Ptr Present
 * 
 * (000680)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000690)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), Part
 * (0006A4)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Var
 * (0006B4)  S_BPREL32: [00000014], Type:             0x13A1, Pos
 * (0006C4)  S_BPREL32: [00000018], Type:      T_ULONG(0022), Color
 * (0006D8)  S_BPREL32: [FFFFFFFC], Type:             0x1CB9, Mon
 * 
 * (0006E8) S_END
 */

/*
 * (0006EC) S_GPROC32: [0001:00017C80], Cb: 00000182, Type:             0x1CC3, Monitor_WatchVec
 *          Parent: 00000000, End: 0000078C, Next: 00000790
 *          Debug start: 00000004, Debug end: 0000017E
 *          Flags: Frame Ptr Present
 * 
 * (000724)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000734)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), Part
 * (000748)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Var
 * (000758)  S_BPREL32: [00000014], Type:             0x13A1, Pos
 * (000768)  S_BPREL32: [00000018], Type:      T_ULONG(0022), Color
 * (00077C)  S_BPREL32: [FFFFFFFC], Type:             0x1CB9, Mon
 * 
 * (00078C) S_END
 */

/*
 * (000790) S_GPROC32: [0001:00017E02], Cb: 0000033D, Type:             0x1408, Monitor_WheelGrip
 *          Parent: 00000000, End: 00000854, Next: 00000858
 *          Debug start: 00000006, Debug end: 00000339
 *          Flags: Frame Ptr Present
 * 
 * (0007CC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0007DC)  S_BPREL32: [FFFFFFF0], Type:             0x1A9D, ThisCar
 * (0007F0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (000800)  S_BPREL32: [FFFFFFF8], Type:             0x1404, CarObj
 * (000814)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (000828)  S_BLOCK32: [0001:00017E5D], Cb: 000002CA, (none)
 *           Parent: 00000790, End: 00000850
 * 
 * (000840)   S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), l
 * 
 * (000850)  S_END
 * 
 * (000854) S_END
 */

/*
 * (000858) S_LPROC32: [0001:0001813F], Cb: 00000072, Type:             0x1CA6, primGreyBox
 *          Parent: 00000000, End: 000008CC, Next: 000008D0
 *          Debug start: 00000003, Debug end: 00000070
 *          Flags: Frame Ptr Present
 * 
 * (00088C)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (00089C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (0008AC)  S_BPREL32: [00000010], Type:     T_REAL32(0040), w
 * (0008BC)  S_BPREL32: [00000014], Type:     T_REAL32(0040), h
 * 
 * (0008CC) S_END
 */

/*
 * (0008D0) S_LPROC32: [0001:000181B1], Cb: 000000D4, Type:             0x1CC5, primColumn
 *          Parent: 00000000, End: 00000978, Next: 0000097C
 *          Debug start: 00000003, Debug end: 000000D2
 *          Flags: Frame Ptr Present
 * 
 * (000904)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000914)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000924)  S_BPREL32: [00000010], Type:     T_REAL32(0040), w
 * (000934)  S_BPREL32: [00000014], Type:     T_REAL32(0040), h
 * (000944)  S_BPREL32: [00000018], Type:      T_ULONG(0022), c1
 * (000954)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), c2
 * (000964)  S_LDATA32: [0003:00075028], Type:      T_ULONG(0022), clr
 * 
 * (000978) S_END
 */

/*
 * (00097C) S_GPROC32: [0001:00018285], Cb: 0000007D, Type:             0x1408, Monitor_CollisionMesh
 *          Parent: 00000000, End: 00000A18, Next: 00000A1C
 *          Debug start: 00000006, Debug end: 00000079
 *          Flags: Frame Ptr Present
 * 
 * (0009BC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0009CC)  S_BPREL32: [FFFFFFF0], Type:             0x1A9D, ThisCar
 * (0009E0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (0009F0)  S_BPREL32: [FFFFFFF8], Type:             0x1404, CarObj
 * (000A04)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (000A18) S_END
 */

/*
 * (000A1C) S_GPROC32: [0001:00018302], Cb: 00000041, Type:             0x1BFD, SetColMeshColor
 *          Parent: 00000000, End: 00000A7C, Next: 00000A80
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000A54)  S_BPREL32: [00000008], Type:      T_ULONG(0022), vert
 * (000A68)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Color
 * 
 * (000A7C) S_END
 */

/*
 * (000A80) S_GPROC32: [0001:00018343], Cb: 00000502, Type:             0x1408, Monitor_MotionTracker
 *          Parent: 00000000, End: 00000B58, Next: 00000B5C
 *          Debug start: 00000006, Debug end: 000004FE
 *          Flags: Frame Ptr Present
 * 
 * (000AC0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000AD0)  S_BPREL32: [FFFFFF9C], Type:             0x1A34, PosOff
 * (000AE4)  S_BPREL32: [FFFFFFA8], Type:             0x1A9D, ThisCar
 * (000AF8)  S_BPREL32: [FFFFFFAC], Type:             0x1A35, OriOff
 * (000B0C)  S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), i
 * (000B1C)  S_BPREL32: [FFFFFFB8], Type:             0x1AF2, DataSet
 * (000B30)  S_BPREL32: [FFFFFFBC], Type:             0x1404, CarObj
 * (000B44)  S_BPREL32: [FFFFFFC0], Type:             0x1ABA, Line
 * 
 * (000B58) S_END
 */

/*
 * (000B5C) S_GPROC32: [0001:00018845], Cb: 00000066, Type:             0x1CC8, Monitor_Watch2DVec
 *          Parent: 00000000, End: 00000C18, Next: 00000C1C
 *          Debug start: 00000006, Debug end: 00000062
 *          Flags: Frame Ptr Present
 * 
 * (000B98)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000BA8)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), i
 * (000BB8)  S_BPREL32: [00000010], Type:             0x1404, car
 * (000BC8)  S_BPREL32: [00000014], Type:             0x1CC6, vec
 * (000BD8)  S_BPREL32: [00000018], Type:     T_REAL32(0040), mag
 * (000BE8)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), color
 * (000BFC)  S_BPREL32: [FFFFFFF4], Type:             0x1008, DebugTestPos
 * 
 * (000C18) S_END
 */

/*
 * (000C1C) S_GPROC32: [0001:000188AB], Cb: 00000054, Type:             0x1CC8, Monitor_Watch2DPos
 *          Parent: 00000000, End: 00000CD8, Next: 00000DC8
 *          Debug start: 00000006, Debug end: 00000050
 *          Flags: Frame Ptr Present
 * 
 * (000C58)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000C68)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), i
 * (000C78)  S_BPREL32: [00000010], Type:             0x1404, car
 * (000C88)  S_BPREL32: [00000014], Type:             0x1CC6, vec
 * (000C98)  S_BPREL32: [00000018], Type:     T_REAL32(0040), mag
 * (000CA8)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), color
 * (000CBC)  S_BPREL32: [FFFFFFF4], Type:             0x1008, DebugTestPos
 * 
 * (000CD8) S_END
 */

/*
 * (000DC8) S_GPROC32: [0001:00018900], Cb: 0000001F, Type:             0x1CCB, P2D_SetPointJoin
 *          Parent: 00000000, End: 00000E28, Next: 00000E2C
 *          Debug start: 00000003, Debug end: 0000001D
 *          Flags: Frame Ptr Present
 * 
 * (000E00)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000E14)  S_BPREL32: [0000000C], Type:       T_INT4(0074), State
 * 
 * (000E28) S_END
 */

/*
 * (000E2C) S_GPROC32: [0001:00018920], Cb: 0000009F, Type:             0x1CCD, P2D_SetXY1
 *          Parent: 00000000, End: 00000E94, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000009B
 *          Flags: Frame Ptr Present
 * 
 * (000E60)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000E74)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x0
 * (000E84)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y0
 * 
 * (000E94) S_END
 */

