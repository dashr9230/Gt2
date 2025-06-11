
// File: C:\CodePrj\Gt2\Game\src\jon\collmesh.c

/*
 * ModName: .\Debug\collmesh.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\collmesh.obj
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
 * (00008C) S_GPROC32: [0001:0002AED0], Cb: 00000463, Type:             0x1AF1, meshCollide
 *          Parent: 00000000, End: 000001EC, Next: 000001F0
 *          Debug start: 00000006, Debug end: 0000045F
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (0000D4)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (0000E8)  S_BPREL32: [00000010], Type:             0x13A1, dir
 * (0000F8)  S_BPREL32: [00000014], Type:  T_32PREAL32(0440), alpha
 * (00010C)  S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), ba
 * (00011C)  S_BPREL32: [FFFFFFD4], Type:      T_ULONG(0022), tc
 * (00012C)  S_BPREL32: [FFFFFFD8], Type:             0x1008, AR
 * (00013C)  S_BPREL32: [FFFFFFE4], Type:             0x1008, I
 * (00014C)  S_BPREL32: [FFFFFFF0], Type:             0x13B6, bt
 * (00015C)  S_BPREL32: [FFFFFFF4], Type:             0x1008, cN
 * 
 * (00016C)  S_BLOCK32: [0001:0002AF69], Cb: 0000038B, (none)
 *           Parent: 0000008C, End: 000001E8
 * 
 * (000184)   S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), dsor
 * (000198)   S_BPREL32: [FFFFFFC8], Type:             0x13B6, cnd
 * (0001A8)   S_BPREL32: [FFFFFFCC], Type:     T_REAL32(0040), alpha
 * 
 * (0001BC)   S_BLOCK32: [0001:0002B035], Cb: 000002BF, (none)
 *            Parent: 0000016C, End: 000001E4
 * 
 * (0001D4)    S_BPREL32: [FFFFFFB8], Type:             0x1008, E
 * 
 * (0001E4)   S_END
 * 
 * (0001E8)  S_END
 * 
 * (0001EC) S_END
 * 
 * (0001F0) S_GPROC32: [0001:0002B333], Cb: 000001FA, Type:             0x1BC9, meshFindHeight
 *          Parent: 00000000, End: 000002BC, Next: 000002C0
 *          Debug start: 00000006, Debug end: 000001F6
 *          Flags: Frame Ptr Present
 * 
 * (000228)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (00023C)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (000250)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), tc
 * (000260)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), bh
 * (000270)  S_BPREL32: [FFFFFFF8], Type:             0x13B6, cnd
 * (000280)  S_BPREL32: [FFFFFFFC], Type:             0x13B6, bf
 * 
 * (000290)  S_BLOCK32: [0001:0002B37A], Cb: 0000018B, (none)
 *           Parent: 000001F0, End: 000002B8
 * 
 * (0002A8)   S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), r1
 * 
 * (0002B8)  S_END
 * 
 * (0002BC) S_END
 * 
 * (0002C0) S_GPROC32: [0001:0002B52D], Cb: 00000202, Type:             0x1BCB, meshFindHeightEx
 *          Parent: 00000000, End: 000003A0, Next: 000003A4
 *          Debug start: 00000006, Debug end: 000001FE
 *          Flags: Frame Ptr Present
 * 
 * (0002F8)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (00030C)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (000320)  S_BPREL32: [00000010], Type:             0x1AC1, lpFace
 * (000334)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), tc
 * (000344)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), bh
 * (000354)  S_BPREL32: [FFFFFFF8], Type:             0x13B6, cnd
 * (000364)  S_BPREL32: [FFFFFFFC], Type:             0x13B6, bf
 * 
 * (000374)  S_BLOCK32: [0001:0002B574], Cb: 0000018B, (none)
 *           Parent: 000002C0, End: 0000039C
 * 
 * (00038C)   S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), r1
 * 
 * (00039C)  S_END
 * 
 * (0003A0) S_END
 * 
 * (0003A4) S_GPROC32: [0001:0002B72F], Cb: 0000020D, Type:             0x1BC9, meshFindHeightFloor
 *          Parent: 00000000, End: 00000474, Next: 00000478
 *          Debug start: 00000006, Debug end: 00000209
 *          Flags: Frame Ptr Present
 * 
 * (0003E0)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (0003F4)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (000408)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), tc
 * (000418)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), bh
 * (000428)  S_BPREL32: [FFFFFFF8], Type:             0x13B6, cnd
 * (000438)  S_BPREL32: [FFFFFFFC], Type:             0x13B6, bf
 * 
 * (000448)  S_BLOCK32: [0001:0002B776], Cb: 0000019E, (none)
 *           Parent: 000003A4, End: 00000470
 * 
 * (000460)   S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), r1
 * 
 * (000470)  S_END
 * 
 * (000474) S_END
 * 
 * (000478) S_GPROC32: [0001:0002B93C], Cb: 0000004D, Type:             0x1AF1, meshCollideToPoint
 *          Parent: 00000000, End: 00000510, Next: 00000514
 *          Debug start: 00000006, Debug end: 00000049
 *          Flags: Frame Ptr Present
 * 
 * (0004B4)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), zone
 * (0004C8)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (0004DC)  S_BPREL32: [00000010], Type:             0x13A1, trg
 * (0004EC)  S_BPREL32: [00000014], Type:  T_32PREAL32(0440), alpha
 * (000500)  S_BPREL32: [FFFFFFF4], Type:             0x1008, V
 * 
 * (000510) S_END
 * 
 * (000514) S_GPROC32: [0001:0002B989], Cb: 000000D2, Type:             0x1001, meshInitializeCollision
 *          Parent: 00000000, End: 00000554, Next: 00000558
 *          Debug start: 00000006, Debug end: 000000CE
 *          Flags: Frame Ptr Present
 * 
 * (000554) S_END
 * 
 * (000558) S_GPROC32: [0001:0002BA5B], Cb: 00000022, Type:             0x1001, meshReleaseCollision
 *          Parent: 00000000, End: 00000594, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000020
 *          Flags: Frame Ptr Present
 * 
 * (000594) S_END
 * 
 * (000598) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (0005B4) S_GDATA32: [0003:0097BED0], Type:     T_REAL32(0040), meshXZD
 * (0005CC) S_GDATA32: [0003:0097BED4], Type:     T_REAL32(0040), meshZZD
 * (0005E4) S_GDATA32: [0003:0097BEC8], Type:     T_REAL32(0040), meshXOff
 * (0005FC) S_GDATA32: [0003:0097BECC], Type:     T_REAL32(0040), meshZOff
 * (000614) S_LDATA32: [0003:00075278], Type:             0x1905, grOff
 * 
 */

