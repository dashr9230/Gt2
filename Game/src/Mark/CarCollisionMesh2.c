
// File: C:\CodePrj\Gt2\Game\src\Mark\CarCollisionMesh2.c

/*
 * ModName: .\Debug\CarCollisionMesh2.obj
 * (000004) Start search for segment 0x1 at symbol 0x94(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\CarCollisionMesh2.obj
 * 
 * (000048) S_COMPILE:
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
 * (001CE0) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (001CFC) S_GDATA32: [0003:0097BED0], Type:     T_REAL32(0040), meshXZD
 * (001D14) S_GDATA32: [0003:0097BED4], Type:     T_REAL32(0040), meshZZD
 * (001D2C) S_GDATA32: [0003:0097BEC8], Type:     T_REAL32(0040), meshXOff
 * (001D44) S_GDATA32: [0003:0097BECC], Type:     T_REAL32(0040), meshZOff
 * (001D5C) S_GDATA32: [0003:000114AC], Type:     T_REAL32(0040), GRAVITY
 * (001D74) S_GDATA32: [0003:0097B4A8], Type:      T_ULONG(0022), numSqrts
 * (001D8C) S_GDATA32: [0003:000777BC], Type:      T_ULONG(0022), maxSqrts
 * (001DA4) S_GDATA32: [0003:0097B4A4], Type:      T_ULONG(0022), numChkPols
 * (001DC0) S_GDATA32: [0003:0097B4A0], Type:      T_ULONG(0022), numRejPols
 * (001DDC) S_GDATA32: [0003:000777C0], Type:     T_USHORT(0021), CorrectAxis
 * (001DF8) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (001E14) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (001E30) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * (001E50) S_GDATA32: [0003:00074FFC], Type:             0x1404, GRIPED
 * (001E68) S_GDATA32: [0003:0097BCC0], Type:             0x1AD1, rndArray
 * (001E80) S_GDATA32: [0003:0097BCB8], Type:      T_UCHAR(0020), rndIndex
 */

/*
 * (000094) S_GPROC32: [0001:000370F0], Cb: 00000081, Type:             0x1AEA, NormaliseVec
 *          Parent: 00000000, End: 000000E8, Next: 000000EC
 *          Debug start: 00000004, Debug end: 0000007D
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:             0x13A1, V
 * (0000D8)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), mag
 * 
 * (0000E8) S_END
 */

/*
 * (0000EC) S_GPROC32: [0001:00037171], Cb: 00000037, Type:             0x1AEB, MagVec
 *          Parent: 00000000, End: 0000012C, Next: 00000130
 *          Debug start: 00000003, Debug end: 00000035
 *          Flags: Frame Ptr Present
 * 
 * (00011C)  S_BPREL32: [00000008], Type:             0x13A1, V
 * 
 * (00012C) S_END
 */

/*
 * (000130) S_GPROC32: [0001:000371A8], Cb: 00000080, Type:             0x1AED, BuildBox_CalcNormal
 *          Parent: 00000000, End: 000001D4, Next: 000001D8
 *          Debug start: 00000006, Debug end: 0000007C
 *          Flags: Frame Ptr Present
 * 
 * (00016C)  S_BPREL32: [00000008], Type:             0x13A1, N
 * (00017C)  S_BPREL32: [0000000C], Type:             0x13A1, A
 * (00018C)  S_BPREL32: [00000010], Type:             0x13A1, B
 * (00019C)  S_BPREL32: [00000014], Type:             0x13A1, C
 * (0001AC)  S_BPREL32: [FFFFFFE8], Type:             0x1008, vec2
 * (0001C0)  S_BPREL32: [FFFFFFF4], Type:             0x1008, vec1
 * 
 * (0001D4) S_END
 */

/*
 * (0001D8) S_LPROC32: [0001:00037228], Cb: 00000060, Type:             0x1AB4, simCrossProduct
 *          Parent: 00000000, End: 00000240, Next: 00000244
 *          Debug start: 00000003, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (000210)  S_BPREL32: [00000008], Type:             0x13A1, A
 * (000220)  S_BPREL32: [0000000C], Type:             0x13A1, B
 * (000230)  S_BPREL32: [00000010], Type:             0x13A1, T
 * 
 * (000240) S_END
 */

/*
 * (000244) S_GPROC32: [0001:00037288], Cb: 000005BE, Type:             0x1408, CarCol_BuildBox
 *          Parent: 00000000, End: 0000030C, Next: 00000310
 *          Debug start: 00000006, Debug end: 000005BA
 *          Flags: Frame Ptr Present
 * 
 * (00027C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00028C)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), hoff
 * (0002A0)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), l
 * (0002B0)  S_BPREL32: [FFFFFFEC], Type:             0x1A9D, ThisCar
 * (0002C4)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), h
 * (0002D4)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), w
 * (0002E4)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), loff
 * (0002F8)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (00030C) S_END
 */

/*
 * (000310) S_GPROC32: [0001:00037846], Cb: 000000FD, Type:             0x1AEF, CarCol_GenWorldPos
 *          Parent: 00000000, End: 000003C4, Next: 000003C8
 *          Debug start: 00000006, Debug end: 000000F9
 *          Flags: Frame Ptr Present
 * 
 * (00034C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00035C)  S_BPREL32: [0000000C], Type:             0x11DC, rM
 * (00036C)  S_BPREL32: [FFFFFFEC], Type:             0x1A9D, ThisCar
 * (000380)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (000390)  S_BPREL32: [FFFFFFF4], Type:             0x13A1, rmv
 * (0003A0)  S_BPREL32: [FFFFFFF8], Type:             0x13A1, cmv
 * (0003B0)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (0003C4) S_END
 */

/*
 * (0003C8) S_GPROC32: [0001:00037943], Cb: 0000004D, Type:             0x1AF1, CarCol_MeshCollideToPoint
 *          Parent: 00000000, End: 0000046C, Next: 00000470
 *          Debug start: 00000006, Debug end: 00000049
 *          Flags: Frame Ptr Present
 * 
 * (00040C)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (000420)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (000434)  S_BPREL32: [00000010], Type:             0x13A1, target
 * (000448)  S_BPREL32: [00000014], Type:  T_32PREAL32(0440), alpha
 * (00045C)  S_BPREL32: [FFFFFFF4], Type:             0x1008, V
 * 
 * (00046C) S_END
 */

/*
 * (000470) S_GPROC32: [0001:00037990], Cb: 00000446, Type:             0x1AF1, CarCol_MeshCollide
 *          Parent: 00000000, End: 000005A0, Next: 000005A4
 *          Debug start: 00000006, Debug end: 00000442
 *          Flags: Frame Ptr Present
 * 
 * (0004AC)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (0004C0)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (0004D4)  S_BPREL32: [00000010], Type:             0x13A1, dir
 * (0004E4)  S_BPREL32: [00000014], Type:  T_32PREAL32(0440), walpha
 * (0004F8)  S_BPREL32: [FFFFFFB8], Type:     T_REAL32(0040), ba
 * (000508)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), tc
 * (000518)  S_BPREL32: [FFFFFFC0], Type:             0x1008, AR
 * (000528)  S_BPREL32: [FFFFFFCC], Type:             0x1008, I
 * (000538)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), dsor
 * (00054C)  S_BPREL32: [FFFFFFDC], Type:             0x1008, E
 * (00055C)  S_BPREL32: [FFFFFFE8], Type:             0x13B6, cnd
 * (00056C)  S_BPREL32: [FFFFFFEC], Type:             0x13B6, bt
 * (00057C)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), alpha
 * (000590)  S_BPREL32: [FFFFFFF4], Type:             0x1008, cN
 * 
 * (0005A0) S_END
 */

/*
 * (0005A4) S_GPROC32: [0001:00037DD6], Cb: 00000580, Type:             0x1AF1, CarCol_MeshCollideGravity
 *          Parent: 00000000, End: 00000750, Next: 00000754
 *          Debug start: 00000006, Debug end: 0000057C
 *          Flags: Frame Ptr Present
 * 
 * (0005E8)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (0005FC)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (000610)  S_BPREL32: [00000010], Type:             0x13A1, dir
 * (000620)  S_BPREL32: [00000014], Type:  T_32PREAL32(0440), walpha
 * (000634)  S_BPREL32: [FFFFFFA0], Type:     T_REAL32(0040), ba
 * (000644)  S_BPREL32: [FFFFFFA4], Type:      T_ULONG(0022), tc
 * (000654)  S_BPREL32: [FFFFFFA8], Type:             0x1008, AR
 * (000664)  S_BPREL32: [FFFFFFB4], Type:             0x1008, I
 * (000674)  S_BPREL32: [FFFFFFC0], Type:     T_REAL32(0040), normgrav
 * (00068C)  S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), dsor
 * (0006A0)  S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), pn
 * (0006B0)  S_BPREL32: [FFFFFFCC], Type:             0x1008, E
 * (0006C0)  S_BPREL32: [FFFFFFD8], Type:             0x13B6, cnd
 * (0006D0)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), dn
 * (0006E0)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), invnormgrav
 * (0006F8)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), c
 * (000708)  S_BPREL32: [FFFFFFE8], Type:             0x13B6, bt
 * (000718)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), cmpn
 * (00072C)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), alpha
 * (000740)  S_BPREL32: [FFFFFFF4], Type:             0x1008, cN
 * 
 * (000750) S_END
 */

/*
 * (000754) S_GPROC32: [0001:00038356], Cb: 000000E6, Type:             0x1001, MotionTracker_Reset
 *          Parent: 00000000, End: 000007EC, Next: 000007F0
 *          Debug start: 00000006, Debug end: 000000E2
 *          Flags: Frame Ptr Present
 * 
 * (000790)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0007A0)  S_BPREL32: [FFFFFFF0], Type:             0x1A9D, ThisCar
 * (0007B4)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (0007C4)  S_BPREL32: [FFFFFFF8], Type:             0x1AF2, DataSet
 * (0007D8)  S_BPREL32: [FFFFFFFC], Type:             0x1404, CarObj
 * 
 * (0007EC) S_END
 */

/*
 * (0007F0) S_GPROC32: [0001:0003843C], Cb: 000000F8, Type:             0x1AF7, CalcCarBox
 *          Parent: 00000000, End: 000008AC, Next: 000008B0
 *          Debug start: 00000006, Debug end: 000000F4
 *          Flags: Frame Ptr Present
 * 
 * (000824)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000834)  S_BPREL32: [0000000C], Type:             0x1AF5, CBox
 * (000848)  S_BPREL32: [FFFFFFEC], Type:             0x13A1, BoxVert
 * (00085C)  S_BPREL32: [FFFFFFF0], Type:             0x1A9D, Car
 * (00086C)  S_BPREL32: [FFFFFFF4], Type:             0x13A1, MeshVert
 * (000884)  S_BPREL32: [FFFFFFF8], Type:             0x11DC, rm
 * (000894)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), iMeshVert
 * 
 * (0008AC) S_END
 */

/*
 * (0008B0) S_GPROC32: [0001:00038534], Cb: 00000128, Type:             0x1AF7, PredictNextCarBox
 *          Parent: 00000000, End: 00000988, Next: 0000098C
 *          Debug start: 00000006, Debug end: 00000124
 *          Flags: Frame Ptr Present
 * 
 * (0008EC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0008FC)  S_BPREL32: [0000000C], Type:             0x1AF5, CBox
 * (000910)  S_BPREL32: [FFFFFFAC], Type:             0x13A1, BoxVert
 * (000924)  S_BPREL32: [FFFFFFB0], Type:             0x1A9D, Car
 * (000934)  S_BPREL32: [FFFFFFB4], Type:             0x13A1, MeshVert
 * (00094C)  S_BPREL32: [FFFFFFB8], Type:             0x1006, rm
 * (00095C)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), iMeshVert
 * (000974)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (000988) S_END
 */

/*
 * (00098C) S_LPROC32: [0001:0003865C], Cb: 0000019C, Type:             0x1AB0, simMultMatrices
 *          Parent: 00000000, End: 000009F4, Next: 000009F8
 *          Debug start: 00000003, Debug end: 0000019A
 *          Flags: Frame Ptr Present
 * 
 * (0009C4)  S_BPREL32: [00000008], Type:             0x11DC, C
 * (0009D4)  S_BPREL32: [0000000C], Type:             0x11DC, A
 * (0009E4)  S_BPREL32: [00000010], Type:             0x11DC, B
 * 
 * (0009F4) S_END
 */

/*
 * (0009F8) S_GPROC32: [0001:000387F8], Cb: 00000145, Type:             0x1AF9, InterpolateVectors
 *          Parent: 00000000, End: 00000AB8, Next: 00000ABC
 *          Debug start: 00000006, Debug end: 00000141
 *          Flags: Frame Ptr Present
 * 
 * (000A34)  S_BPREL32: [00000008], Type:             0x13A1, A
 * (000A44)  S_BPREL32: [0000000C], Type:             0x13A1, B
 * (000A54)  S_BPREL32: [00000010], Type:     T_REAL32(0040), t
 * (000A64)  S_BPREL32: [00000014], Type:             0x13A1, C
 * (000A74)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), cosphi
 * (000A88)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), y
 * (000A98)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), x
 * (000AA8)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), phi
 * 
 * (000AB8) S_END
 */

/*
 * (000ABC) S_GPROC32: [0001:0003893D], Cb: 00000123, Type:             0x1AFB, DampMatrix
 *          Parent: 00000000, End: 00000B40, Next: 00000B44
 *          Debug start: 00000006, Debug end: 0000011F
 *          Flags: Frame Ptr Present
 * 
 * (000AF0)  S_BPREL32: [00000008], Type:             0x11DC, m
 * (000B00)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), a
 * (000B10)  S_BPREL32: [FFFFFFDC], Type:             0x1008, C
 * (000B20)  S_BPREL32: [FFFFFFE8], Type:             0x1008, B
 * (000B30)  S_BPREL32: [FFFFFFF4], Type:             0x1008, A
 * 
 * (000B40) S_END
 */

/*
 * (000B44) S_GPROC32: [0001:00038A60], Cb: 00000140, Type:             0x1AFB, KillAlmostDeadMatrix
 *          Parent: 00000000, End: 00000BA0, Next: 00000BA4
 *          Debug start: 00000006, Debug end: 0000013C
 *          Flags: Frame Ptr Present
 * 
 * (000B80)  S_BPREL32: [00000008], Type:             0x11DC, m
 * (000B90)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), a
 * 
 * (000BA0) S_END
 */

/*
 * (000BA4) S_GPROC32: [0001:00038BA0], Cb: 0000015C, Type:             0x1AFD, RotateTo
 *          Parent: 00000000, End: 00000C64, Next: 00000C68
 *          Debug start: 00000006, Debug end: 00000158
 *          Flags: Frame Ptr Present
 * 
 * (000BD4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000BE4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), t
 * (000BF4)  S_BPREL32: [FFFFFF94], Type:             0x1008, vNow
 * (000C08)  S_BPREL32: [FFFFFFA0], Type:             0x1008, vNext
 * (000C1C)  S_BPREL32: [FFFFFFAC], Type:             0x1A9D, Car
 * (000C2C)  S_BPREL32: [FFFFFFB0], Type:             0x1006, rm
 * (000C3C)  S_BPREL32: [FFFFFFF0], Type:             0x1008, vWant
 * (000C50)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (000C64) S_END
 */

/*
 * (000C68) S_GPROC32: [0001:00038CFC], Cb: 000001B8, Type:             0x1AFF, CorrectMatrix
 *          Parent: 00000000, End: 00000CE0, Next: 00000CE4
 *          Debug start: 00000006, Debug end: 000001B4
 *          Flags: Frame Ptr Present
 * 
 * (000CA0)  S_BPREL32: [00000008], Type:             0x11DC, m
 * (000CB0)  S_BPREL32: [FFFFFFDC], Type:             0x1008, c
 * (000CC0)  S_BPREL32: [FFFFFFE8], Type:             0x1008, b
 * (000CD0)  S_BPREL32: [FFFFFFF4], Type:             0x1008, a
 * 
 * (000CE0) S_END
 */

/*
 * (000CE4) S_GPROC32: [0001:00038EB4], Cb: 00000259, Type:             0x1B01, FindVelocity
 *          Parent: 00000000, End: 00000E00, Next: 00000E04
 *          Debug start: 00000006, Debug end: 00000255
 *          Flags: Frame Ptr Present
 * 
 * (000D18)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000D28)  S_BPREL32: [0000000C], Type:             0x13A1, P
 * (000D38)  S_BPREL32: [00000010], Type:             0x13A1, V
 * (000D48)  S_BPREL32: [FFFFFFC4], Type:             0x1008, nP
 * (000D58)  S_BPREL32: [FFFFFFD0], Type:             0x1A9D, Car
 * (000D68)  S_BPREL32: [FFFFFFD4], Type:             0x11DC, vm
 * (000D78)  S_BPREL32: [FFFFFFD8], Type:             0x11DC, rm
 * (000D88)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), ab
 * (000D98)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), aa
 * (000DA8)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), y
 * (000DB8)  S_BPREL32: [FFFFFFE8], Type:             0x1008, oV
 * (000DC8)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000DD8)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), theta
 * (000DEC)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (000E00) S_END
 */

/*
 * (000E04) S_GPROC32: [0001:0003910D], Cb: 0000029A, Type:             0x1B03, PredictCarBoxAtTime
 *          Parent: 00000000, End: 00000F2C, Next: 00000F30
 *          Debug start: 00000009, Debug end: 00000296
 *          Flags: Frame Ptr Present
 * 
 * (000E40)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000E50)  S_BPREL32: [0000000C], Type:             0x1AF5, CBox
 * (000E64)  S_BPREL32: [00000010], Type:     T_REAL32(0040), t
 * (000E74)  S_BPREL32: [FFFFFF48], Type:             0x13A1, BoxVert
 * (000E88)  S_BPREL32: [FFFFFF4C], Type:             0x1A9D, Car
 * (000E98)  S_BPREL32: [FFFFFF50], Type:             0x13A1, MeshVert
 * (000EB0)  S_BPREL32: [FFFFFF54], Type:             0x1006, rm
 * (000EC0)  S_BPREL32: [FFFFFF94], Type:      T_ULONG(0022), iMeshVert
 * (000ED8)  S_BPREL32: [FFFFFF98], Type:             0x1008, C
 * (000EE8)  S_BPREL32: [FFFFFFA4], Type:             0x1008, B
 * (000EF8)  S_BPREL32: [FFFFFFB0], Type:             0x1008, A
 * (000F08)  S_BPREL32: [FFFFFFBC], Type:             0x1AA3, vDat
 * (000F1C)  S_BPREL32: [FFFFFFC0], Type:             0x1006, av
 * 
 * (000F2C) S_END
 */

/*
 * (000F30) S_GPROC32: [0001:000393A7], Cb: 000011E0, Type:             0x1B05, UpdateWheel
 *          Parent: 00000000, End: 000012F4, Next: 000012F8
 *          Debug start: 00000009, Debug end: 000011DC
 *          Flags: Frame Ptr Present
 * 
 * (000F64)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000F74)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), iWhl
 * (000F88)  S_BPREL32: [00000010], Type:     T_REAL32(0040), t
 * (000F98)  S_BPREL32: [00000014], Type:             0x13A1, vForce
 * (000FAC)  S_BPREL32: [00000018], Type:             0x13A1, vForce2
 * (000FC0)  S_BPREL32: [0000001C], Type:             0x13A1, vAppPnt
 * (000FD4)  S_BPREL32: [FFFFFF4C], Type:             0x1008, vSpringDrag
 * (000FEC)  S_BPREL32: [FFFFFF58], Type:             0x1008, vCForce
 * (001000)  S_BPREL32: [FFFFFF64], Type:     T_REAL32(0040), DiffWheelSpeeds
 * (00101C)  S_BPREL32: [FFFFFF68], Type:             0x1A9D, Car
 * (00102C)  S_BPREL32: [FFFFFF6C], Type:             0x11DC, rm
 * (00103C)  S_BPREL32: [FFFFFF70], Type:     T_REAL32(0040), sva
 * (00104C)  S_BPREL32: [FFFFFF74], Type:     T_REAL32(0040), spinFric
 * (001064)  S_BPREL32: [FFFFFF78], Type:     T_REAL32(0040), GroundSpeed
 * (00107C)  S_BPREL32: [FFFFFF7C], Type:             0x1AA8, SArm
 * (001090)  S_BPREL32: [FFFFFF80], Type:             0x1008, vSpringAxis
 * (0010A8)  S_BPREL32: [FFFFFF8C], Type:     T_REAL32(0040), sprOff
 * (0010BC)  S_BPREL32: [FFFFFF90], Type:     T_REAL32(0040), v
 * (0010CC)  S_BPREL32: [FFFFFF94], Type:     T_REAL32(0040), tmp
 * (0010DC)  S_BPREL32: [FFFFFF98], Type:             0x13B6, face
 * (0010F0)  S_BPREL32: [FFFFFF9C], Type:             0x1008, vMountPos
 * (001108)  S_BPREL32: [FFFFFFA8], Type:             0x1008, vFNormal
 * (001120)  S_BPREL32: [FFFFFFB4], Type:             0x1008, vWheelOff
 * (001138)  S_BPREL32: [FFFFFFC0], Type:             0x1008, vCForce2
 * (001150)  S_BPREL32: [FFFFFFCC], Type:             0x1008, vWheelPos
 * (001168)  S_BPREL32: [FFFFFFD8], Type:             0x1008, vWheelDir
 * (001180)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), sprLen
 * (001194)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), cva
 * (0011A4)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), WheelSpeed
 * (0011BC)  S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), zone
 * (0011D0)  S_BPREL32: [FFFFFFF4], Type:             0x1B08, griped
 * (0011E4)  S_BPREL32: [FFFFFFF8], Type:             0x1AA3, vDat
 * (0011F8)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), collLength
 * 
 * (001210)  S_BLOCK32: [0001:0003995C], Cb: 00000957, (none)
 *           Parent: 00000F30, End: 000012F0
 * 
 * (001228)   S_BPREL32: [FFFFFF20], Type:             0x1008, vDesMotion
 * (001240)   S_BPREL32: [FFFFFF2C], Type:     T_REAL32(0040), wheelSpeed
 * (001258)   S_BPREL32: [FFFFFF30], Type:             0x1008, vActMotion
 * (001270)   S_BPREL32: [FFFFFF3C], Type:             0x1008, vFrict
 * (001284)   S_BPREL32: [FFFFFF48], Type:     T_REAL32(0040), xRotV
 * 
 * (001298)   S_BLOCK32: [0001:00039F02], Cb: 000000F5, (none)
 *            Parent: 00001210, End: 000012EC
 * 
 * (0012B0)    S_BPREL32: [FFFFFF18], Type:     T_REAL32(0040), cosslip_threshold
 * (0012D0)    S_BPREL32: [FFFFFF1C], Type:     T_REAL32(0040), cosslip_value
 * 
 * (0012EC)   S_END
 * 
 * (0012F0)  S_END
 * 
 * (0012F4) S_END
 */

/*
 * (0012F8) S_LPROC32: [0001:0003A587], Cb: 00000031, Type:             0x1AAE, simSinCos
 *          Parent: 00000000, End: 00001360, Next: 00001364
 *          Debug start: 00000003, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (00132C)  S_BPREL32: [00000008], Type:     T_USHORT(0021), angle
 * (001340)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), s
 * (001350)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), c
 * 
 * (001360) S_END
 */

/*
 * (001364) S_LPROC32: [0001:0003A5B8], Cb: 00000071, Type:             0x1AA5, meshFindCollisionZone
 *          Parent: 00000000, End: 00001420, Next: 00001424
 *          Debug start: 00000006, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (0013A4)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (0013B4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z
 * (0013C4)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (0013D4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), iz
 * (0013E4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ix
 * 
 * (0013F4)  S_BLOCK32: [0001:0003A60C], Cb: 00000017, (none)
 *           Parent: 00001364, End: 0000141C
 * 
 * (00140C)   S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), z
 * 
 * (00141C)  S_END
 * 
 * (001420) S_END
 */

/*
 * (001424) S_GPROC32: [0001:0003A629], Cb: 0000009C, Type:             0x1B0A, MoveCarToTime
 *          Parent: 00000000, End: 00001490, Next: 00001494
 *          Debug start: 00000003, Debug end: 0000009A
 *          Flags: Frame Ptr Present
 * 
 * (00145C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00146C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), t
 * (00147C)  S_BPREL32: [00000010], Type:       T_INT4(0074), doGrav
 * 
 * (001490) S_END
 */

/*
 * (001494) S_GPROC32: [0001:0003A6C5], Cb: 00000260, Type:             0x1AF7, MeshCollideFailSafe
 *          Parent: 00000000, End: 000015F0, Next: 000015F4
 *          Debug start: 00000009, Debug end: 0000025C
 *          Flags: Frame Ptr Present
 * 
 * (0014D0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0014E0)  S_BPREL32: [0000000C], Type:             0x1AF5, nowBox
 * (0014F4)  S_BPREL32: [FFFFFF40], Type:       T_INT4(0074), moreColls
 * (00150C)  S_BPREL32: [FFFFFF44], Type:      T_ULONG(0022), iMeshVert
 * (001524)  S_BPREL32: [FFFFFF48], Type:   T_32PULONG(0422), oldZone
 * (001538)  S_BPREL32: [FFFFFF4C], Type:   T_32PULONG(0422), newZone
 * (00154C)  S_BPREL32: [FFFFFF50], Type:             0x13A1, thisVert
 * (001564)  S_BPREL32: [FFFFFF54], Type:             0x1AF4, nextBox
 * (001578)  S_BPREL32: [FFFFFFD8], Type:             0x13B6, face
 * (00158C)  S_BPREL32: [FFFFFFDC], Type:             0x1008, tmp
 * (00159C)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), mag
 * (0015AC)  S_BPREL32: [FFFFFFEC], Type:             0x13A1, nextVert
 * (0015C4)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), time
 * (0015D8)  S_BPREL32: [FFFFFFF4], Type:             0x1008, motionVec
 * 
 * (0015F0) S_END
 */

/*
 * (0015F4) S_GPROC32: [0001:0003A925], Cb: 00000A0A, Type:             0x1ADE, MeshCollisionOS
 *          Parent: 00000000, End: 000018D4, Next: 000018D8
 *          Debug start: 00000009, Debug end: 00000A06
 *          Flags: Frame Ptr Present
 * 
 * (00162C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00163C)  S_BPREL32: [FFFFFC80], Type:     T_REAL32(0040), Inn
 * (00164C)  S_BPREL32: [FFFFFC84], Type:             0x1008, n
 * (00165C)  S_BPREL32: [FFFFFC90], Type:             0x1A9D, Car
 * (00166C)  S_BPREL32: [FFFFFC94], Type:       T_LONG(0012), earliestVert
 * (001688)  S_BPREL32: [FFFFFC98], Type:             0x1AF4, box
 * (001698)  S_BPREL32: [FFFFFD1C], Type:       T_INT4(0074), Collided
 * (0016B0)  S_BPREL32: [FFFFFD20], Type:     T_REAL32(0040), totMassInCol
 * (0016CC)  S_BPREL32: [FFFFFD24], Type:             0x1B0B, eFace
 * (0016E0)  S_BPREL32: [FFFFFD50], Type:      T_ULONG(0022), iMeshVert
 * (0016F8)  S_BPREL32: [FFFFFD54], Type:     T_REAL32(0040), nPntsInCol
 * (001710)  S_BPREL32: [FFFFFD58], Type:             0x1A89, pntForce
 * (001728)  S_BPREL32: [FFFFFDDC], Type:   T_32PULONG(0422), oldZone
 * (00173C)  S_BPREL32: [FFFFFDE0], Type:   T_32PULONG(0422), newZone
 * (001750)  S_BPREL32: [FFFFFDE4], Type:             0x13A1, thisVert
 * (001768)  S_BPREL32: [FFFFFDE8], Type:             0x1008, v
 * (001778)  S_BPREL32: [FFFFFDF4], Type:             0x1AF4, nextBox
 * (00178C)  S_BPREL32: [FFFFFE78], Type:             0x1A89, pntPoint
 * (0017A4)  S_BPREL32: [FFFFFEFC], Type:             0x13B6, face
 * (0017B8)  S_BPREL32: [FFFFFF00], Type:             0x1008, tmp
 * (0017C8)  S_BPREL32: [FFFFFF0C], Type:     T_REAL32(0040), mag
 * (0017D8)  S_BPREL32: [FFFFFF10], Type:     T_REAL32(0040), friction
 * (0017F0)  S_BPREL32: [FFFFFF14], Type:     T_REAL32(0040), earliestTime
 * (00180C)  S_BPREL32: [FFFFFF18], Type:             0x1B0C, eTime
 * (001820)  S_BPREL32: [FFFFFF44], Type:     T_REAL32(0040), Irr
 * (001830)  S_BPREL32: [FFFFFF48], Type:             0x13A1, nextVert
 * (001848)  S_BPREL32: [FFFFFF4C], Type:             0x1008, r
 * (001858)  S_BPREL32: [FFFFFF58], Type:             0x1AF4, nowBox
 * (00186C)  S_BPREL32: [FFFFFFDC], Type:             0x1008, motionVec
 * (001884)  S_BPREL32: [FFFFFFE8], Type:             0x1B08, griped
 * (001898)  S_BPREL32: [FFFFFFEC], Type:             0x1AA3, vDat
 * (0018AC)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), thisTime
 * (0018C4)  S_BPREL32: [FFFFFFF4], Type:             0x1008, vel
 * 
 * (0018D4) S_END
 */

/*
 * (0018D8) S_GPROC32: [0001:0003B32F], Cb: 000012F8, Type:             0x1ADE, MeshCollision
 *          Parent: 00000000, End: 00001BAC, Next: 00001BB0
 *          Debug start: 00000009, Debug end: 000012F4
 *          Flags: Frame Ptr Present
 * 
 * (001910)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (001920)  S_BPREL32: [FFFFFF40], Type:     T_REAL32(0040), gravel
 * (001934)  S_BPREL32: [FFFFFF44], Type:             0x1A9D, Car
 * (001944)  S_BPREL32: [FFFFFF48], Type:      T_ULONG(0022), k
 * (001954)  S_BPREL32: [FFFFFF4C], Type:             0x1AE0, vForce2
 * (001968)  S_BPREL32: [FFFFFF7C], Type:             0x1AE0, vApp
 * (00197C)  S_BPREL32: [FFFFFFAC], Type:      T_ULONG(0022), i
 * (00198C)  S_BPREL32: [FFFFFFB0], Type:       T_INT4(0074), ret
 * (00199C)  S_BPREL32: [FFFFFFB4], Type:             0x1008, myVec
 * (0019B0)  S_BPREL32: [FFFFFFC0], Type:      T_ULONG(0022), d
 * (0019C0)  S_BPREL32: [FFFFFFC4], Type:      T_ULONG(0022), iWhl
 * (0019D4)  S_BPREL32: [FFFFFFC8], Type:             0x1AE0, vForce
 * (0019E8)  S_BPREL32: [FFFFFFF8], Type:             0x1AA3, vDat
 * (0019FC)  S_BPREL32: [FFFFFFFC], Type:             0x1402, OldCollisionFlags
 * 
 * (001A1C)  S_BLOCK32: [0001:0003B5AA], Cb: 000000C0, (none)
 *           Parent: 000018D8, End: 00001A48
 * 
 * (001A34)   S_BPREL32: [FFFFFF3C], Type:             0x1AA8, SArm
 * 
 * (001A48)  S_END
 * 
 * (001A4C)  S_BLOCK32: [0001:0003B7CD], Cb: 00000996, (none)
 *           Parent: 000018D8, End: 00001B2C
 * 
 * (001A64)   S_BPREL32: [FFFFFF1C], Type:     T_REAL32(0040), dt
 * (001A74)   S_BPREL32: [FFFFFF20], Type:     T_REAL32(0040), sf
 * (001A84)   S_BPREL32: [FFFFFF24], Type:     T_REAL32(0040), sf2
 * (001A94)   S_BPREL32: [FFFFFF28], Type:       T_LONG(0012), temp
 * (001AA8)   S_BPREL32: [FFFFFF2C], Type:             0x1008, mVec
 * (001ABC)   S_BPREL32: [FFFFFF38], Type:             0x1AA8, SArm
 * 
 * (001AD0)   S_BLOCK32: [0001:0003BF96], Cb: 000001BB, (none)
 *            Parent: 00001A4C, End: 00001B28
 * 
 * (001AE8)    S_BPREL32: [FFFFFF18], Type:             0x1404, skid
 * 
 * (001AFC)    S_BLOCK32: [0001:0003C01C], Cb: 00000100, (none)
 *             Parent: 00001AD0, End: 00001B24
 * 
 * (001B14)     S_BPREL32: [FFFFFF0C], Type:             0x1008, dif
 * 
 * (001B24)    S_END
 * 
 * (001B28)   S_END
 * 
 * (001B2C)  S_END
 * 
 * (001B30)  S_BLOCK32: [0001:0003C1D8], Cb: 0000042F, (none)
 *           Parent: 000018D8, End: 00001BA8
 * 
 * (001B48)   S_BPREL32: [FFFFFF04], Type:      T_ULONG(0022), DoSkid
 * (001B5C)   S_BPREL32: [FFFFFF08], Type:      T_ULONG(0022), WheelsOnGravel
 * 
 * (001B78)   S_BLOCK32: [0001:0003C21C], Cb: 0000009A, (none)
 *            Parent: 00001B30, End: 00001BA4
 * 
 * (001B90)    S_BPREL32: [FFFFFF00], Type:             0x1AA8, SArm
 * 
 * (001BA4)   S_END
 * 
 * (001BA8)  S_END
 * 
 * (001BAC) S_END
 */

/*
 * (001BB0) S_LPROC32: [0001:0003C627], Cb: 00000023, Type:             0x1AA6, nRand
 *          Parent: 00000000, End: 00001BE0, Next: 00001BE4
 *          Debug start: 00000003, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (001BE0) S_END
 */

/*
 * (001BE4) S_LPROC32: [0001:0003C64A], Cb: 0000001E, Type:             0x1ADE, CurCar
 *          Parent: 00000000, End: 00001C24, Next: 00001C28
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (001C14)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (001C24) S_END
 */

/*
 * (001C28) S_GPROC32: [0001:0003C668], Cb: 00000048, Type:             0x1B0E, InstantFindHeight
 *          Parent: 00000000, End: 00001CDC, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000044
 *          Flags: Frame Ptr Present
 * 
 * (001C64)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (001C74)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (001C84)  S_BPREL32: [00000010], Type:     T_REAL32(0040), z
 * (001C94)  S_BPREL32: [00000014], Type:     T_REAL32(0040), lift
 * (001CA8)  S_BPREL32: [FFFFFFEC], Type:             0x1008, pos
 * (001CB8)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), y1
 * (001CC8)  S_BPREL32: [FFFFFFFC], Type:   T_32PULONG(0422), czone
 * 
 * (001CDC) S_END
 */

