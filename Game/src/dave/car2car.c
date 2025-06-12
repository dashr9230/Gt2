
// File: C:\CodePrj\Gt2\Game\src\dave\car2car.c

/*
 * ModName: .\Debug\car2car.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\car2car.obj
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
 * (0016BC) S_LDATA32: [0003:000002E4], Type:       T_INT4(0074), DetectSphere_Active
 * (0016E0) S_LDATA32: [0003:000002E8], Type:       T_INT4(0074), DetectMesh_Active
 */

/*
 * (00008C) S_GPROC32: [0001:00001DA0], Cb: 000000A6, Type:             0x1408, Car2Car_ApplyCollisions
 *          Parent: 00000000, End: 00000114, Next: 00000118
 *          Debug start: 00000006, Debug end: 000000A2
 *          Flags: Frame Ptr Present
 * 
 * (0000CC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0000DC)  S_BPREL32: [FFFFFFF4], Type:             0x1D51, Coll
 * (0000F0)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (000104)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000114) S_END
 */

/*
 * (000118) S_GPROC32: [0001:00001E46], Cb: 00000054, Type:             0x1408, Car2Car_GenerateAllCollisions
 *          Parent: 00000000, End: 00000184, Next: 00000188
 *          Debug start: 00000004, Debug end: 00000050
 *          Flags: Frame Ptr Present
 * 
 * (000160)  S_BPREL32: [00000008], Type:             0x1404, CM_Obj
 * (000174)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (000184) S_END
 */

/*
 * (000188) S_GPROC32: [0001:00001E9A], Cb: 0000005D, Type:             0x1408, Car2Car_ClearCollisionList
 *          Parent: 00000000, End: 00000200, Next: 00000204
 *          Debug start: 00000006, Debug end: 00000059
 *          Flags: Frame Ptr Present
 * 
 * (0001CC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0001DC)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (0001F0)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000200) S_END
 */

/*
 * (000204) S_GPROC32: [0001:00001EF7], Cb: 000000A8, Type:             0x1B01, Trans_Ob2World
 *          Parent: 00000000, End: 0000027C, Next: 00000280
 *          Debug start: 00000004, Debug end: 000000A4
 *          Flags: Frame Ptr Present
 * 
 * (00023C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00024C)  S_BPREL32: [0000000C], Type:             0x13A1, v
 * (00025C)  S_BPREL32: [00000010], Type:             0x13A1, d
 * (00026C)  S_BPREL32: [FFFFFFFC], Type:             0x11DC, rm
 * 
 * (00027C) S_END
 */

/*
 * (000280) S_GPROC32: [0001:00001F9F], Cb: 000000C1, Type:             0x1B01, Trans_World2Ob
 *          Parent: 00000000, End: 0000032C, Next: 00000330
 *          Debug start: 00000006, Debug end: 000000BD
 *          Flags: Frame Ptr Present
 * 
 * (0002B8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0002C8)  S_BPREL32: [0000000C], Type:             0x13A1, v
 * (0002D8)  S_BPREL32: [00000010], Type:             0x13A1, d
 * (0002E8)  S_BPREL32: [FFFFFFE8], Type:             0x1A9D, Car
 * (0002F8)  S_BPREL32: [FFFFFFEC], Type:             0x11DC, rm
 * (000308)  S_BPREL32: [FFFFFFF0], Type:             0x1008, f
 * (000318)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (00032C) S_END
 */

/*
 * (000330) S_GPROC32: [0001:00002060], Cb: 000002D0, Type:             0x1D53, FindLineBoxIntersection
 *          Parent: 00000000, End: 00000468, Next: 0000046C
 *          Debug start: 00000006, Debug end: 000002CC
 *          Flags: Frame Ptr Present
 * 
 * (000370)  S_BPREL32: [00000008], Type:             0x1404, obL
 * (000380)  S_BPREL32: [0000000C], Type:             0x1404, obB
 * (000390)  S_BPREL32: [00000010], Type:      T_ULONG(0022), i1
 * (0003A0)  S_BPREL32: [00000014], Type:      T_ULONG(0022), i2
 * (0003B0)  S_BPREL32: [00000018], Type:             0x13A1, p
 * (0003C0)  S_BPREL32: [FFFFFFC4], Type:             0x1A9D, CarB
 * (0003D4)  S_BPREL32: [FFFFFFC8], Type:             0x1D54, MeshL
 * (0003E8)  S_BPREL32: [FFFFFFCC], Type:             0x1008, w
 * (0003F8)  S_BPREL32: [FFFFFFD8], Type:             0x1AA3, vDatB
 * (00040C)  S_BPREL32: [FFFFFFDC], Type:             0x1A9D, CarL
 * (000420)  S_BPREL32: [FFFFFFE0], Type:             0x1008, o2
 * (000430)  S_BPREL32: [FFFFFFEC], Type:             0x1008, o1
 * (000440)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), lamda
 * (000454)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), maxl
 * 
 * (000468) S_END
 */

/*
 * (00046C) S_GPROC32: [0001:00002330], Cb: 000008CE, Type:             0x1D56, LineInBox
 *          Parent: 00000000, End: 000005EC, Next: 000005F0
 *          Debug start: 00000006, Debug end: 000008CA
 *          Flags: Frame Ptr Present
 * 
 * (0004A0)  S_BPREL32: [00000008], Type:             0x1404, obL
 * (0004B0)  S_BPREL32: [0000000C], Type:             0x1404, obB
 * (0004C0)  S_BPREL32: [00000010], Type:      T_ULONG(0022), i1
 * (0004D0)  S_BPREL32: [00000014], Type:      T_ULONG(0022), i2
 * (0004E0)  S_BPREL32: [00000018], Type:             0x13A1, n
 * (0004F0)  S_BPREL32: [0000001C], Type:             0x13A1, p
 * (000500)  S_BPREL32: [FFFFFFB4], Type:             0x1D54, MeshB
 * (000514)  S_BPREL32: [FFFFFFB8], Type:     T_REAL32(0040), cz
 * (000524)  S_BPREL32: [FFFFFFBC], Type:     T_REAL32(0040), cy
 * (000534)  S_BPREL32: [FFFFFFC0], Type:      T_ULONG(0022), nCols
 * (000548)  S_BPREL32: [FFFFFFC4], Type:             0x1A9D, CarB
 * (00055C)  S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), cx
 * (00056C)  S_BPREL32: [FFFFFFCC], Type:             0x1D54, MeshL
 * (000580)  S_BPREL32: [FFFFFFD0], Type:             0x1008, w
 * (000590)  S_BPREL32: [FFFFFFDC], Type:             0x1AA3, vDatB
 * (0005A4)  S_BPREL32: [FFFFFFE0], Type:             0x1A9D, CarL
 * (0005B8)  S_BPREL32: [FFFFFFE4], Type:             0x1008, o2
 * (0005C8)  S_BPREL32: [FFFFFFF0], Type:             0x1008, o1
 * (0005D8)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), lamda
 * 
 * (0005EC) S_END
 */

/*
 * (0005F0) S_GPROC32: [0001:00002BFE], Cb: 00000212, Type:             0x1D58, IsInBox
 *          Parent: 00000000, End: 00000704, Next: 00000708
 *          Debug start: 00000006, Debug end: 0000020E
 *          Flags: Frame Ptr Present
 * 
 * (000620)  S_BPREL32: [00000008], Type:             0x1404, ob1
 * (000630)  S_BPREL32: [0000000C], Type:             0x1404, ob2
 * (000640)  S_BPREL32: [00000010], Type:      T_ULONG(0022), i
 * (000650)  S_BPREL32: [00000014], Type:             0x13A1, n
 * (000660)  S_BPREL32: [FFFFFFCC], Type:             0x1D54, Mesh2
 * (000674)  S_BPREL32: [FFFFFFD0], Type:             0x1008, o
 * (000684)  S_BPREL32: [FFFFFFDC], Type:             0x1D54, Mesh1
 * (000698)  S_BPREL32: [FFFFFFE0], Type:             0x1A9D, Car2
 * (0006AC)  S_BPREL32: [FFFFFFE4], Type:             0x1A9D, Car1
 * (0006C0)  S_BPREL32: [FFFFFFE8], Type:             0x1008, w
 * (0006D0)  S_BPREL32: [FFFFFFF4], Type:             0x1AA3, vDat2
 * (0006E4)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), az
 * (0006F4)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), ax
 * 
 * (000704) S_END
 */

/*
 * (000708) S_GPROC32: [0001:00002E10], Cb: 00000337, Type:             0x1D5A, FindCar2CarCollPoint
 *          Parent: 00000000, End: 00000844, Next: 00000848
 *          Debug start: 00000006, Debug end: 00000333
 *          Flags: Frame Ptr Present
 * 
 * (000744)  S_BPREL32: [00000008], Type:             0x1404, ob1
 * (000754)  S_BPREL32: [0000000C], Type:             0x1404, ob2
 * (000764)  S_BPREL32: [00000010], Type:             0x13A1, p
 * (000774)  S_BPREL32: [00000014], Type:             0x13A1, n1
 * (000784)  S_BPREL32: [00000018], Type:             0x13A1, n2
 * (000794)  S_BPREL32: [FFFFFFC0], Type:             0x1D54, Mesh2
 * (0007A8)  S_BPREL32: [FFFFFFC4], Type:             0x1D54, Mesh1
 * (0007BC)  S_BPREL32: [FFFFFFC8], Type:             0x1008, n
 * (0007CC)  S_BPREL32: [FFFFFFD4], Type:      T_ULONG(0022), nm
 * (0007DC)  S_BPREL32: [FFFFFFD8], Type:             0x1A9D, Car2
 * (0007F0)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), j
 * (000800)  S_BPREL32: [FFFFFFE0], Type:             0x1A9D, Car1
 * (000814)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), i
 * (000824)  S_BPREL32: [FFFFFFE8], Type:             0x1008, w
 * (000834)  S_BPREL32: [FFFFFFF4], Type:             0x1008, t
 * 
 * (000844) S_END
 */

/*
 * (000848) S_GPROC32: [0001:00003147], Cb: 00000314, Type:             0x1D5A, FindCar2CarCollPointLines
 *          Parent: 00000000, End: 000009AC, Next: 000009B0
 *          Debug start: 00000006, Debug end: 00000310
 *          Flags: Frame Ptr Present
 * 
 * (00088C)  S_BPREL32: [00000008], Type:             0x1404, ob1
 * (00089C)  S_BPREL32: [0000000C], Type:             0x1404, ob2
 * (0008AC)  S_BPREL32: [00000010], Type:             0x13A1, p
 * (0008BC)  S_BPREL32: [00000014], Type:             0x13A1, n1
 * (0008CC)  S_BPREL32: [00000018], Type:             0x13A1, n2
 * (0008DC)  S_BPREL32: [FFFFFFB8], Type:             0x1D54, Mesh2
 * (0008F0)  S_BPREL32: [FFFFFFBC], Type:             0x1D54, Mesh1
 * (000904)  S_BPREL32: [FFFFFFC0], Type:             0x1008, n
 * (000914)  S_BPREL32: [FFFFFFCC], Type:      T_ULONG(0022), i2
 * (000924)  S_BPREL32: [FFFFFFD0], Type:      T_ULONG(0022), nm
 * (000934)  S_BPREL32: [FFFFFFD4], Type:      T_ULONG(0022), i1
 * (000944)  S_BPREL32: [FFFFFFD8], Type:             0x1A9D, Car2
 * (000958)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), j
 * (000968)  S_BPREL32: [FFFFFFE0], Type:             0x1A9D, Car1
 * (00097C)  S_BPREL32: [FFFFFFE4], Type:             0x1008, w
 * (00098C)  S_BPREL32: [FFFFFFF0], Type:             0x1008, op
 * (00099C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), nnn
 * 
 * (0009AC) S_END
 */

/*
 * (0009B0) S_GPROC32: [0001:0000345B], Cb: 0000061B, Type:             0x1D5C, CalcCollNormalOld
 *          Parent: 00000000, End: 00000B00, Next: 00000B04
 *          Debug start: 00000006, Debug end: 00000617
 *          Flags: Frame Ptr Present
 * 
 * (0009EC)  S_BPREL32: [00000008], Type:             0x1404, obN
 * (0009FC)  S_BPREL32: [0000000C], Type:             0x1404, obF
 * (000A0C)  S_BPREL32: [00000010], Type:             0x13A1, p
 * (000A1C)  S_BPREL32: [00000014], Type:             0x13A1, n
 * (000A2C)  S_BPREL32: [FFFFFFB0], Type:             0x1A9D, CarF
 * (000A40)  S_BPREL32: [FFFFFFB4], Type:     T_REAL32(0040), cz
 * (000A50)  S_BPREL32: [FFFFFFB8], Type:     T_REAL32(0040), cy
 * (000A60)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), nCols
 * (000A74)  S_BPREL32: [FFFFFFC0], Type:             0x1A9D, Car2
 * (000A88)  S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), cx
 * (000A98)  S_BPREL32: [FFFFFFC8], Type:             0x1008, w
 * (000AA8)  S_BPREL32: [FFFFFFD4], Type:             0x1008, o2
 * (000AB8)  S_BPREL32: [FFFFFFE0], Type:             0x1008, tmp
 * (000AC8)  S_BPREL32: [FFFFFFEC], Type:             0x1008, o1
 * (000AD8)  S_BPREL32: [FFFFFFF8], Type:             0x1AA3, vDatN
 * (000AEC)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), lamda
 * 
 * (000B00) S_END
 */

/*
 * (000B04) S_GPROC32: [0001:00003A76], Cb: 00000376, Type:             0x1D5E, CalcCollNormal
 *          Parent: 00000000, End: 00000C30, Next: 00000C34
 *          Debug start: 00000006, Debug end: 00000372
 *          Flags: Frame Ptr Present
 * 
 * (000B3C)  S_BPREL32: [00000008], Type:             0x1404, obN
 * (000B4C)  S_BPREL32: [0000000C], Type:             0x1404, obF
 * (000B5C)  S_BPREL32: [00000010], Type:             0x13A1, p
 * (000B6C)  S_BPREL32: [00000014], Type:             0x13A1, n
 * (000B7C)  S_BPREL32: [00000018], Type:  T_32PREAL32(0440), pen
 * (000B8C)  S_BPREL32: [FFFFFFBC], Type:             0x1A9D, CarF
 * (000BA0)  S_BPREL32: [FFFFFFC0], Type:             0x1A9D, Car2
 * (000BB4)  S_BPREL32: [FFFFFFC4], Type:             0x1008, w
 * (000BC4)  S_BPREL32: [FFFFFFD0], Type:             0x1008, o2
 * (000BD4)  S_BPREL32: [FFFFFFDC], Type:             0x1008, tmp
 * (000BE4)  S_BPREL32: [FFFFFFE8], Type:             0x1008, o1
 * (000BF4)  S_BPREL32: [FFFFFFF4], Type:             0x1AA3, vDatN
 * (000C08)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), lamda
 * (000C1C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), maxl
 * 
 * (000C30) S_END
 */

/*
 * (000C34) S_GPROC32: [0001:00003DEC], Cb: 0000047F, Type:             0x1D5F, DoCar2CarColl
 *          Parent: 00000000, End: 00000DF4, Next: 00000DF8
 *          Debug start: 00000009, Debug end: 0000047B
 *          Flags: Frame Ptr Present
 * 
 * (000C6C)  S_BPREL32: [00000008], Type:             0x1404, ob1
 * (000C7C)  S_BPREL32: [0000000C], Type:             0x1404, ob2
 * (000C8C)  S_BPREL32: [FFFFFF70], Type:             0x1008, n1
 * (000C9C)  S_BPREL32: [FFFFFF7C], Type:     T_REAL32(0040), Inn
 * (000CAC)  S_BPREL32: [FFFFFF80], Type:             0x1A9D, Car2
 * (000CC0)  S_BPREL32: [FFFFFF84], Type:             0x1A9D, Car1
 * (000CD4)  S_BPREL32: [FFFFFF88], Type:             0x1D51, coll2
 * (000CE8)  S_BPREL32: [FFFFFF8C], Type:             0x1D51, coll1
 * (000CFC)  S_BPREL32: [FFFFFF90], Type:             0x1008, v
 * (000D0C)  S_BPREL32: [FFFFFF9C], Type:             0x1AA3, vDat2
 * (000D20)  S_BPREL32: [FFFFFFA0], Type:     T_REAL32(0040), pen2
 * (000D34)  S_BPREL32: [FFFFFFA4], Type:             0x1AA3, vDat1
 * (000D48)  S_BPREL32: [FFFFFFA8], Type:     T_REAL32(0040), pen1
 * (000D5C)  S_BPREL32: [FFFFFFAC], Type:             0x1008, t
 * (000D6C)  S_BPREL32: [FFFFFFB8], Type:             0x1008, tmp
 * (000D7C)  S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), mag
 * (000D8C)  S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), friction
 * (000DA4)  S_BPREL32: [FFFFFFCC], Type:     T_REAL32(0040), Irr
 * (000DB4)  S_BPREL32: [FFFFFFD0], Type:             0x1008, r
 * (000DC4)  S_BPREL32: [FFFFFFDC], Type:             0x1008, v2
 * (000DD4)  S_BPREL32: [FFFFFFE8], Type:             0x1008, v1
 * (000DE4)  S_BPREL32: [FFFFFFF4], Type:             0x1008, n2
 * 
 * (000DF4) S_END
 */

/*
 * (000DF8) S_LPROC32: [0001:0000426B], Cb: 000000F7, Type:             0x1408, Car2CollisionSoundEffect
 *          Parent: 00000000, End: 00000E58, Next: 00000E5C
 *          Debug start: 00000004, Debug end: 000000F3
 *          Flags: Frame Ptr Present
 * 
 * (000E38)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (000E48)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, Car
 * 
 * (000E58) S_END
 */

/*
 * (000E5C) S_LPROC32: [0001:00004362], Cb: 00000068, Type:             0x1408, Car2Car_DetectCollisionsWith
 *          Parent: 00000000, End: 00000EDC, Next: 00000EE0
 *          Debug start: 00000006, Debug end: 00000064
 *          Flags: Frame Ptr Present
 * 
 * (000EA0)  S_BPREL32: [00000008], Type:             0x1404, ThisObj
 * (000EB4)  S_BPREL32: [FFFFFFF0], Type:             0x1404, TestObj
 * (000EC8)  S_BPREL32: [FFFFFFF4], Type:             0x1008, CollPos
 * 
 * (000EDC) S_END
 */

/*
 * (000EE0) S_LPROC32: [0001:000043CA], Cb: 000000CA, Type:             0x1D61, Car2Car_DetectSphere
 *          Parent: 00000000, End: 00000FA8, Next: 00000FAC
 *          Debug start: 00000006, Debug end: 000000C6
 *          Flags: Frame Ptr Present
 * 
 * (000F1C)  S_BPREL32: [00000008], Type:             0x1404, ThisObj
 * (000F30)  S_BPREL32: [0000000C], Type:             0x1404, TestObj
 * (000F44)  S_BPREL32: [00000010], Type:             0x13A1, Coll_Pos
 * (000F5C)  S_BPREL32: [FFFFFFD4], Type:             0x1A9D, TestCar
 * (000F70)  S_BPREL32: [FFFFFFD8], Type:             0x1A9D, ThisCar
 * (000F84)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), minsep
 * (000F98)  S_BPREL32: [FFFFFFE0], Type:             0x1C63, vec
 * 
 * (000FA8) S_END
 */

/*
 * (000FAC) S_GPROC32: [0001:00004494], Cb: 00000459, Type:             0x1408, Car2Car_MakeCollisionMesh
 *          Parent: 00000000, End: 00001098, Next: 0000109C
 *          Debug start: 00000006, Debug end: 00000455
 *          Flags: Frame Ptr Present
 * 
 * (000FF0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (001000)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), hoff
 * (001014)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), l
 * (001024)  S_BPREL32: [FFFFFFE8], Type:             0x1A9D, ThisCar
 * (001038)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), h
 * (001048)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), loff
 * (00105C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), w
 * (00106C)  S_BPREL32: [FFFFFFF8], Type:             0x1D54, ThisMesh
 * (001084)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (001098) S_END
 */

/*
 * (00109C) S_LPROC32: [0001:000048ED], Cb: 000001EE, Type:             0x1D63, CollMesh_CalcNormal
 *          Parent: 00000000, End: 00001148, Next: 0000114C
 *          Debug start: 00000007, Debug end: 000001E9
 *          Flags: Frame Ptr Present
 * 
 * (0010D8)  S_BPREL32: [00000008], Type:             0x1D54, ThisMesh
 * (0010F0)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), i
 * (001100)  S_BPREL32: [FFFFFFE0], Type:             0x1D64, cf
 * (001110)  S_BPREL32: [FFFFFFE4], Type:             0x1008, vec2
 * (001124)  S_BPREL32: [FFFFFFF0], Type:             0x1008, vec1
 * (001138)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), mag
 * 
 * (001148) S_END
 */

/*
 * (00114C) S_LPROC32: [0001:00004ADB], Cb: 000002B9, Type:             0x1408, CollMesh_UpdatePos
 *          Parent: 00000000, End: 000011D4, Next: 000011D8
 *          Debug start: 00000006, Debug end: 000002B5
 *          Flags: Frame Ptr Present
 * 
 * (001188)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (001198)  S_BPREL32: [FFFFFFF4], Type:             0x1A9D, ThisCar
 * (0011AC)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (0011BC)  S_BPREL32: [FFFFFFFC], Type:             0x1D54, ThisMesh
 * 
 * (0011D4) S_END
 */

/*
 * (0011D8) S_GPROC32: [0001:00004D94], Cb: 0000029A, Type:             0x1408, CollMesh_Draw
 *          Parent: 00000000, End: 000012A8, Next: 000012AC
 *          Debug start: 00000006, Debug end: 00000296
 *          Flags: Frame Ptr Present
 * 
 * (001210)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (001220)  S_BPREL32: [FFFFFF9C], Type:             0x1A34, pos
 * (001230)  S_BPREL32: [FFFFFFA8], Type:             0x1A35, ori
 * (001240)  S_BPREL32: [FFFFFFB0], Type:             0x1A9D, ThisCar
 * (001254)  S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), i
 * (001264)  S_BPREL32: [FFFFFFB8], Type:             0x1ABA, vert
 * (001278)  S_BPREL32: [FFFFFFF8], Type:             0x1D54, ThisMesh
 * (001290)  S_BPREL32: [FFFFFFFC], Type:             0x1D64, ThisFace
 * 
 * (0012A8) S_END
 */

/*
 * (0012AC) S_GPROC32: [0001:0000502E], Cb: 000003C9, Type:             0x1408, CollMesh_DrawEdges
 *          Parent: 00000000, End: 000013B0, Next: 000013B4
 *          Debug start: 00000009, Debug end: 000003C5
 *          Flags: Frame Ptr Present
 * 
 * (0012E8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0012F8)  S_BPREL32: [FFFFFF54], Type:             0x1A34, pos
 * (001308)  S_BPREL32: [FFFFFF60], Type:             0x1A35, ori
 * (001318)  S_BPREL32: [FFFFFF68], Type:             0x1A9D, ThisCar
 * (00132C)  S_BPREL32: [FFFFFF6C], Type:      T_ULONG(0022), i
 * (00133C)  S_BPREL32: [FFFFFF70], Type:             0x1ABA, vert
 * (001350)  S_BPREL32: [FFFFFFB0], Type:      T_ULONG(0022), vi1
 * (001360)  S_BPREL32: [FFFFFFB4], Type:             0x1D54, ThisMesh
 * (001378)  S_BPREL32: [FFFFFFB8], Type:      T_ULONG(0022), vi0
 * (001388)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), vcol
 * (00139C)  S_BPREL32: [FFFFFFC0], Type:             0x1ABA, quad
 * 
 * (0013B0) S_END
 */

/*
 * (0013B4) S_LPROC32: [0001:000053F7], Cb: 00000060, Type:             0x1AB4, simCrossProduct
 *          Parent: 00000000, End: 0000141C, Next: 00001420
 *          Debug start: 00000003, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (0013EC)  S_BPREL32: [00000008], Type:             0x13A1, A
 * (0013FC)  S_BPREL32: [0000000C], Type:             0x13A1, B
 * (00140C)  S_BPREL32: [00000010], Type:             0x13A1, T
 * 
 * (00141C) S_END
 */

/*
 * (001420) S_GPROC32: [0001:00005457], Cb: 0000006E, Type:             0x1408, CollMesh_DrawLastCollision
 *          Parent: 00000000, End: 000014B4, Next: 000014B8
 *          Debug start: 00000006, Debug end: 0000006A
 *          Flags: Frame Ptr Present
 * 
 * (001464)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (001474)  S_BPREL32: [FFFFFFEC], Type:             0x1A9D, ThisCar
 * (001488)  S_BPREL32: [FFFFFFF0], Type:             0x1008, CollPos
 * (00149C)  S_BPREL32: [FFFFFFFC], Type:             0x1D54, ThisMesh
 * 
 * (0014B4) S_END
 */

/*
 * (0014B8) S_GPROC32: [0001:000054C5], Cb: 000001E7, Type:             0x1C65, ChooseFaceThatTookTheBruntOfTheImpact
 *          Parent: 00000000, End: 00001628, Next: 0000162C
 *          Debug start: 00000006, Debug end: 000001E3
 *          Flags: Frame Ptr Present
 * 
 * (001508)  S_BPREL32: [00000008], Type:             0x1404, ThisObj
 * (00151C)  S_BPREL32: [0000000C], Type:             0x1404, TestObj
 * (001530)  S_BPREL32: [FFFFFFB0], Type:     T_REAL32(0040), magmymot
 * (001548)  S_BPREL32: [FFFFFFB4], Type:             0x1008, vMov
 * (00155C)  S_BPREL32: [FFFFFFC0], Type:     T_REAL32(0040), worstcase
 * (001574)  S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), magmot
 * (001588)  S_BPREL32: [FFFFFFC8], Type:             0x1A9D, TestCar
 * (00159C)  S_BPREL32: [FFFFFFCC], Type:             0x1D54, TestMesh
 * (0015B4)  S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), bestcase
 * (0015CC)  S_BPREL32: [FFFFFFD4], Type:      T_ULONG(0022), i
 * (0015DC)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), cosang
 * (0015F0)  S_BPREL32: [FFFFFFDC], Type:             0x1008, vNorm
 * (001604)  S_BPREL32: [FFFFFFE8], Type:             0x1008, vUp
 * (001614)  S_BPREL32: [FFFFFFF4], Type:             0x1008, vMyMot
 * 
 * (001628) S_END
 */

/*
 * (00162C) S_GPROC32: [0001:000056AC], Cb: 000001FA, Type:             0x1408, CalcCollisionPt
 *          Parent: 00000000, End: 000016B8, Next: 00000000
 *          Debug start: 00000006, Debug end: 000001F6
 *          Flags: Frame Ptr Present
 * 
 * (001664)  S_BPREL32: [00000008], Type:             0x1404, TestObj
 * (001678)  S_BPREL32: [FFFFFFEC], Type:             0x1A9D, TestCar
 * (00168C)  S_BPREL32: [FFFFFFF0], Type:             0x1D54, TestMesh
 * (0016A4)  S_BPREL32: [FFFFFFF4], Type:             0x1008, vAvgPt
 * 
 * (0016B8) S_END
 */

