
// Original file: C:\CodePrj\Gt2\Game\src\jon\collision.c

/*
 * ModName: .\Debug\collision.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\collision.obj
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
 * (00008C) S_GPROC32: [0001:0002A4F0], Cb: 000003A3, Type:             0x1BCC, collTestVector
 *          Parent: 00000000, End: 00000268, Next: 0000026C
 *          Debug start: 00000006, Debug end: 0000039F
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0000D4)  S_BPREL32: [0000000C], Type:             0x13A1, opos
 * (0000E8)  S_BPREL32: [00000010], Type:             0x13A1, npos
 * (0000FC)  S_BPREL32: [00000014], Type:     T_REAL32(0040), mass
 * (000110)  S_BPREL32: [FFFFFFE0], Type:             0x1AD7, nod
 * (000120)  S_BPREL32: [FFFFFFE4], Type:       T_LONG(0012), Z
 * (000130)  S_BPREL32: [FFFFFFE8], Type:             0x1ADB, rsl
 * (000140)  S_LDATA32: [0003:00075260], Type:             0x1008, V
 * (000150)  S_BPREL32: [FFFFFFEC], Type:             0x1ADB, tmp
 * (000160)  S_BPREL32: [FFFFFFF0], Type:       T_LONG(0012), zt
 * (000170)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), c
 * (000180)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), noCars
 * (000194)  S_BPREL32: [FFFFFFFC], Type:   T_32PULONG(0422), zr
 * (0001A4)  S_LDATA32: [0003:000751EC], Type:             0x1B83, ZC
 * 
 * (0001B8)  S_BLOCK32: [0001:0002A65E], Cb: 000000F2, (none)
 *           Parent: 0000008C, End: 0000020C
 * 
 * (0001D0)   S_BPREL32: [FFFFFFDC], Type:      T_UCHAR(0020), zct
 * 
 * (0001E0)   S_BLOCK32: [0001:0002A735], Cb: 00000012, (none)
 *            Parent: 000001B8, End: 00000208
 * 
 * (0001F8)    S_BPREL32: [FFFFFFD8], Type:             0x1ADB, a
 * 
 * (000208)   S_END
 * 
 * (00020C)  S_END
 * 
 * (000210)  S_BLOCK32: [0001:0002A777], Cb: 000000F0, (none)
 *           Parent: 0000008C, End: 00000264
 * 
 * (000228)   S_BPREL32: [FFFFFFD4], Type:      T_UCHAR(0020), zct
 * 
 * (000238)   S_BLOCK32: [0001:0002A84D], Cb: 00000012, (none)
 *            Parent: 00000210, End: 00000260
 * 
 * (000250)    S_BPREL32: [FFFFFFD0], Type:             0x1ADB, a
 * 
 * (000260)   S_END
 * 
 * (000264)  S_END
 * 
 * (000268) S_END
 * 
 * (00026C) S_LPROC32: [0001:0002A893], Cb: 00000071, Type:             0x1AA5, meshFindCollisionZone
 *          Parent: 00000000, End: 00000328, Next: 0000032C
 *          Debug start: 00000006, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (0002AC)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (0002BC)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z
 * (0002CC)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (0002DC)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), iz
 * (0002EC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ix
 * 
 * (0002FC)  S_BLOCK32: [0001:0002A8E7], Cb: 00000017, (none)
 *           Parent: 0000026C, End: 00000324
 * 
 * (000314)   S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), z
 * 
 * (000324)  S_END
 * 
 * (000328) S_END
 * 
 * (00032C) S_GPROC32: [0001:0002A904], Cb: 000001FD, Type:             0x16A1, collInitialize
 *          Parent: 00000000, End: 000003B8, Next: 000003BC
 *          Debug start: 00000006, Debug end: 000001F9
 *          Flags: Frame Ptr Present
 * 
 * (000364)  S_BPREL32: [00000008], Type:      T_ULONG(0022), colCount
 * 
 * (00037C)  S_BLOCK32: [0001:0002A9B5], Cb: 00000129, (none)
 *           Parent: 0000032C, End: 000003B4
 * 
 * (000394)   S_BPREL32: [FFFFFFF8], Type:             0x1AD7, N
 * (0003A4)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ct
 * 
 * (0003B4)  S_END
 * 
 * (0003B8) S_END
 * 
 * (0003BC) S_LPROC32: [0001:0002AB01], Cb: 0000002B, Type:             0x1BCE, collLink
 *          Parent: 00000000, End: 0000040C, Next: 00000410
 *          Debug start: 00000003, Debug end: 00000029
 *          Flags: Frame Ptr Present
 * 
 * (0003EC)  S_BPREL32: [00000008], Type:             0x1AD7, Nod
 * (0003FC)  S_BPREL32: [0000000C], Type:             0x1AD7, Bef
 * 
 * (00040C) S_END
 * 
 * (000410) S_LPROC32: [0001:0002AB2C], Cb: 000000C4, Type:             0x1408, collShuffleList
 *          Parent: 00000000, End: 000004B4, Next: 000004B8
 *          Debug start: 00000006, Debug end: 000000C0
 *          Flags: Frame Ptr Present
 * 
 * (000448)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000458)  S_BPREL32: [FFFFFFFC], Type:             0x1AD7, nod
 * 
 * (000468)  S_BLOCK32: [0001:0002AB46], Cb: 000000A1, (none)
 *           Parent: 00000410, End: 000004B0
 * 
 * (000480)   S_BPREL32: [FFFFFFF0], Type:       T_LONG(0012), Z
 * (000490)   S_BPREL32: [FFFFFFF4], Type:             0x1404, co
 * (0004A0)   S_BPREL32: [FFFFFFF8], Type:             0x1AD7, p
 * 
 * (0004B0)  S_END
 * 
 * (0004B4) S_END
 * 
 * (0004B8) S_LPROC32: [0001:0002ABF0], Cb: 00000020, Type:             0x1BD0, collDrop
 *          Parent: 00000000, End: 000004F8, Next: 000004FC
 *          Debug start: 00000003, Debug end: 0000001E
 *          Flags: Frame Ptr Present
 * 
 * (0004E8)  S_BPREL32: [00000008], Type:             0x1AD7, Nod
 * 
 * (0004F8) S_END
 * 
 * (0004FC) S_GPROC32: [0001:0002AC10], Cb: 000001C4, Type:             0x1BD2, collAddCandidate
 *          Parent: 00000000, End: 000005E4, Next: 000005E8
 *          Debug start: 00000006, Debug end: 000001C0
 *          Flags: Frame Ptr Present
 * 
 * (000534)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000544)  S_BPREL32: [0000000C], Type:             0x1AD8, fnc
 * (000554)  S_BPREL32: [00000010], Type:             0x1407, prc
 * (000564)  S_BPREL32: [FFFFFFF4], Type:             0x1AD7, nNod
 * (000578)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), d
 * (000588)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), c
 * 
 * (000598)  S_BLOCK32: [0001:0002AC89], Cb: 000000AF, (none)
 *           Parent: 000004FC, End: 000005E0
 * 
 * (0005B0)   S_BPREL32: [FFFFFFE8], Type:             0x1AD7, n
 * (0005C0)   S_BPREL32: [FFFFFFEC], Type:       T_LONG(0012), Z
 * (0005D0)   S_BPREL32: [FFFFFFF0], Type:             0x1AD7, p
 * 
 * (0005E0)  S_END
 * 
 * (0005E4) S_END
 * 
 * (0005E8) S_GPROC32: [0001:0002ADD4], Cb: 00000077, Type:             0x1408, collSubCandidate
 *          Parent: 00000000, End: 00000640, Next: 00000644
 *          Debug start: 00000004, Debug end: 00000073
 *          Flags: Frame Ptr Present
 * 
 * (000620)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000630)  S_BPREL32: [FFFFFFFC], Type:             0x1AD7, nod
 * 
 * (000640) S_END
 * 
 * (000644) S_GPROC32: [0001:0002AE4B], Cb: 00000079, Type:             0x1001, collRelease
 *          Parent: 00000000, End: 00000678, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000077
 *          Flags: Frame Ptr Present
 * 
 * (000678) S_END
 * 
 * (00067C) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (000698) S_GDATA32: [0003:0097BED0], Type:     T_REAL32(0040), meshXZD
 * (0006B0) S_GDATA32: [0003:0097BED4], Type:     T_REAL32(0040), meshZZD
 * (0006C8) S_GDATA32: [0003:0097BEC8], Type:     T_REAL32(0040), meshXOff
 * (0006E0) S_GDATA32: [0003:0097BECC], Type:     T_REAL32(0040), meshZOff
 * (0006F8) S_LDATA32: [0003:000751E0], Type:             0x1BD4, collObjs
 * (000710) S_LDATA32: [0003:000751C8], Type:             0x1BD4, collFree
 * (000728) S_LDATA32: [0003:00075238], Type:             0x1ADC, collRes1
 * (000740) S_LDATA32: [0003:00075210], Type:             0x1ADC, collRes2
 * (000758) S_LDATA32: [0003:0007526C], Type:             0x1AD7, collAllObjs
 * (000774) S_LDATA32: [0003:00075270], Type:             0x1404, collObject
 * (000790) S_LDATA32: [0003:00075274], Type:      T_ULONG(0022), collCount
 * (0007A8) S_LDATA32: [0003:000751D4], Type:       T_LONG(0012), tx
 * (0007BC) S_LDATA32: [0003:000751D8], Type:       T_LONG(0012), ty
 * (0007D0) S_LDATA32: [0003:000751DC], Type:       T_LONG(0012), tz
 * 
 * ModName: .\Debug\carmesh.obj
 * (000004) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\carmesh.obj
 * 
 * (000034) S_COMPILE:
 *          Language: C
 *          Target processor: Pentium
 *          Floating-point precision: 0
 *          Floating-point package: hardware
 *          Ambient data: NEAR
 *          Ambient code: NEAR
 *          PCode present: 0
 *          Compiler Version: Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 12.00.8447.0
 * 
 * (000080) S_GDATA32: [0003:0000D098], Type:             0x1ACF, cMeshVrt
 * (000098) S_GDATA32: [0003:0000DEA8], Type:             0x1BD5, cMeshTri
 * 
 */

