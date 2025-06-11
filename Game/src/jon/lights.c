
// File: C:\CodePrj\Gt2\Game\src\jon\lights.c

/*
 * ModName: .\Debug\lights.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\lights.obj
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
 * (00008C) S_GPROC32: [0001:00031140], Cb: 00000005, Type:             0x1B62, DrawLights
 *          Parent: 00000000, End: 00000160, Next: 00000164
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0000D0)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), col
 * (0000E0)  S_BPREL32: [00000010], Type:     T_REAL32(0040), dx
 * (0000F0)  S_BPREL32: [00000014], Type:     T_REAL32(0040), dy
 * (000100)  S_BPREL32: [00000018], Type:     T_REAL32(0040), dz
 * (000110)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), size1
 * (000124)  S_BPREL32: [00000020], Type:     T_REAL32(0040), size2
 * (000138)  S_BPREL32: [00000024], Type:     T_USHORT(0021), xrot
 * (00014C)  S_BPREL32: [00000028], Type:      T_UCHAR(0020), fade
 * 
 * (000160) S_END
 * 
 * (000164) S_GPROC32: [0001:00031145], Cb: 000002F6, Type:             0x1001, LITE_AllocateAll
 *          Parent: 00000000, End: 00000280, Next: 00000284
 *          Debug start: 00000006, Debug end: 000002F2
 *          Flags: Frame Ptr Present
 * 
 * (00019C)  S_BPREL32: [FFFFFFC0], Type:             0x1404, Car
 * (0001AC)  S_BPREL32: [FFFFFFC4], Type:             0x1769, SidesDetail
 * (0001C4)  S_BPREL32: [FFFFFFD4], Type:     T_USHORT(0021), CurRot
 * (0001D8)  S_BPREL32: [FFFFFFD8], Type:       T_LONG(0012), i
 * (0001E8)  S_BPREL32: [FFFFFFDC], Type:     T_USHORT(0021), RotStep
 * (0001FC)  S_BPREL32: [FFFFFFE0], Type:             0x1AA2, RaceControl
 * (000214)  S_BPREL32: [FFFFFFE4], Type:             0x1B63, scale
 * 
 * (000228)  S_BLOCK32: [0001:000313AA], Cb: 0000007F, (none)
 *           Parent: 00000164, End: 0000027C
 * 
 * (000240)   S_BPREL32: [FFFFFFB4], Type:             0x1B66, curLite
 * (000254)   S_BPREL32: [FFFFFFB8], Type:      T_ULONG(0022), NumLights
 * (00026C)   S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), a
 * 
 * (00027C)  S_END
 * 
 * (000280) S_END
 * 
 * (000284) S_LPROC32: [0001:0003143B], Cb: 00000150, Type:             0x1B68, LITE_Allocate
 *          Parent: 00000000, End: 00000354, Next: 00000358
 *          Debug start: 00000004, Debug end: 0000014C
 *          Flags: Frame Ptr Present
 * 
 * (0002BC)  S_BPREL32: [00000008], Type:             0x1404, Car
 * (0002CC)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Type
 * (0002E0)  S_BPREL32: [00000010], Type:     T_REAL32(0040), XOff
 * (0002F4)  S_BPREL32: [00000014], Type:     T_REAL32(0040), YOff
 * (000308)  S_BPREL32: [00000018], Type:     T_REAL32(0040), ZOff
 * (00031C)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), Scale
 * (000330)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Colour
 * (000344)  S_BPREL32: [FFFFFFFC], Type:             0x1404, Obj
 * 
 * (000354) S_END
 * 
 * (000358) S_LPROC32: [0001:0003158B], Cb: 0000026B, Type:             0x1408, LITE_DrawFloor
 *          Parent: 00000000, End: 000004CC, Next: 000004D0
 *          Debug start: 00000006, Debug end: 00000267
 *          Flags: Frame Ptr Present
 * 
 * (000390)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0003A0)  S_BLOCK32: [0001:0003159E], Cb: 00000254, (none)
 *           Parent: 00000358, End: 000004C8
 * 
 * (0003B8)   S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (0003CC)   S_BLOCK32: [0001:00031622], Cb: 000001D0, (none)
 *            Parent: 000003A0, End: 000004C4
 * 
 * (0003E4)    S_LDATA32: [0003:00075F08], Type:     T_USHORT(0021), Rot
 * (0003F8)    S_BPREL32: [FFFFFFD8], Type:      T_ULONG(0022), InnerColour
 * (000410)    S_BPREL32: [FFFFFFDC], Type:             0x1A35, ori
 * (000420)    S_BPREL32: [FFFFFFE4], Type:       T_LONG(0012), i
 * (000430)    S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), Y
 * (000440)    S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), LScale
 * (000454)    S_BPREL32: [FFFFFFF0], Type:             0x1B69, cam
 * (000464)    S_BPREL32: [FFFFFFF4], Type:   T_32PULONG(0422), czone
 * (000478)    S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), OuterColour
 * 
 * (000490)    S_BLOCK32: [0001:0003171B], Cb: 000000D7, (none)
 *             Parent: 000003CC, End: 000004C0
 * 
 * (0004A8)     S_BPREL32: [FFFFFFD4], Type:             0x13B6, thisFace
 * 
 * (0004C0)    S_END
 * 
 * (0004C4)   S_END
 * 
 * (0004C8)  S_END
 * 
 * (0004CC) S_END
 * 
 * (0004D0) S_LPROC32: [0001:000317F6], Cb: 00000071, Type:             0x1AA5, meshFindCollisionZone
 *          Parent: 00000000, End: 0000058C, Next: 00000590
 *          Debug start: 00000006, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (000510)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000520)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z
 * (000530)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (000540)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), iz
 * (000550)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ix
 * 
 * (000560)  S_BLOCK32: [0001:0003184A], Cb: 00000017, (none)
 *           Parent: 000004D0, End: 00000588
 * 
 * (000578)   S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), z
 * 
 * (000588)  S_END
 * 
 * (00058C) S_END
 * 
 * (000590) S_LPROC32: [0001:00031867], Cb: 000000D5, Type:             0x1B6B, ScaleRGB
 *          Parent: 00000000, End: 0000063C, Next: 00000640
 *          Debug start: 00000007, Debug end: 000000D0
 *          Flags: Frame Ptr Present
 * 
 * (0005C0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Colour
 * (0005D4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), Scale
 * (0005E8)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), Result
 * (0005FC)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), g
 * (00060C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), r
 * (00061C)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), b
 * (00062C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), a
 * 
 * (00063C) S_END
 * 
 * (000640) S_LPROC32: [0001:0003193C], Cb: 000001D9, Type:             0x1408, LITE_Draw
 *          Parent: 00000000, End: 00000758, Next: 0000075C
 *          Debug start: 00000006, Debug end: 000001D5
 *          Flags: Frame Ptr Present
 * 
 * (000674)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (000684)  S_BLOCK32: [0001:0003194F], Cb: 000001C2, (none)
 *           Parent: 00000640, End: 00000754
 * 
 * (00069C)   S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (0006B0)   S_BLOCK32: [0001:000319D3], Cb: 0000013E, (none)
 *            Parent: 00000684, End: 00000750
 * 
 * (0006C8)    S_LDATA32: [0003:00075F0A], Type:     T_USHORT(0021), Rot
 * (0006DC)    S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), InnerColour
 * (0006F4)    S_BPREL32: [FFFFFFE4], Type:             0x1A35, ori
 * (000704)    S_BPREL32: [FFFFFFEC], Type:       T_LONG(0012), i
 * (000714)    S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), LScale
 * (000728)    S_BPREL32: [FFFFFFF4], Type:             0x1B69, cam
 * (000738)    S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), OuterColour
 * 
 * (000750)   S_END
 * 
 * (000754)  S_END
 * 
 * (000758) S_END
 * 
 * (00075C) S_LPROC32: [0001:00031B15], Cb: 00000099, Type:             0x1408, LITE_Handler
 *          Parent: 00000000, End: 000007B0, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000095
 *          Flags: Frame Ptr Present
 * 
 * (000790)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (0007A0)  S_BPREL32: [FFFFFFF4], Type:             0x1A34, Pos
 * 
 * (0007B0) S_END
 * 
 * (0007B4) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (0007D0) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (0007E8) S_GDATA32: [0003:0097BED0], Type:     T_REAL32(0040), meshXZD
 * (000800) S_GDATA32: [0003:0097BED4], Type:     T_REAL32(0040), meshZZD
 * (000818) S_GDATA32: [0003:0097BEC8], Type:     T_REAL32(0040), meshXOff
 * (000830) S_GDATA32: [0003:0097BECC], Type:     T_REAL32(0040), meshZOff
 * (000848) S_GDATA32: [0003:00075164], Type:             0x140A, GlobalCamera
 * (000864) S_LDATA32: [0003:00010AA8], Type:             0x13BB, LiteSize
 * (00087C) S_LDATA32: [0003:00075D08], Type:             0x1B6C, plan
 * (000890) S_LDATA32: [0003:00075E08], Type:             0x1B6C, FloorLight
 * (0008AC) S_LDATA32: [0003:00010AC8], Type:       T_LONG(0012), BrakeLightSides
 * (0008CC) S_GDATA32: [0003:00010ACC], Type:      T_ULONG(0022), BrakeLightDetail
 * (0008EC) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (000908) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (000924) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * (000944) S_GDATA32: [0003:00C9A6E4], Type:             0x13EB, CurScreen
 * 
 */

