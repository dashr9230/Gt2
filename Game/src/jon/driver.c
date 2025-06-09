
// Original file: C:\CodePrj\Gt2\Game\src\jon\driver.c

/*
 * ModName: .\Debug\driver.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\driver.obj
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
 * (00008C) S_GPROC32: [0001:0002BA80], Cb: 00000005, Type:             0x1408, drvReset
 *          Parent: 00000000, End: 000000CC, Next: 000000D0
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0000CC) S_END
 * 
 * (0000D0) S_GPROC32: [0001:0002BA85], Cb: 000001DA, Type:             0x1BC5, drvAllocate
 *          Parent: 00000000, End: 00000164, Next: 00000168
 *          Debug start: 00000006, Debug end: 000001D6
 *          Flags: Frame Ptr Present
 * 
 * (000104)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000114)  S_BPREL32: [0000000C], Type:             0x13C3, drv
 * (000124)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (000134)  S_BLOCK32: [0001:0002BAA4], Cb: 000001B4, (none)
 *           Parent: 000000D0, End: 00000160
 * 
 * (00014C)   S_BPREL32: [FFFFFFF8], Type:             0x1BC6, Driver
 * 
 * (000160)  S_END
 * 
 * (000164) S_END
 * 
 * (000168) S_LPROC32: [0001:0002BC5F], Cb: 0000000E, Type:             0x1A2F, REND_SetCallback
 *          Parent: 00000000, End: 000001C0, Next: 000001C4
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (0001A0)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (0001B0)  S_BPREL32: [0000000C], Type:             0x13A7, F
 * 
 * (0001C0) S_END
 * 
 * (0001C4) S_LPROC32: [0001:0002BC6D], Cb: 0000004C, Type:             0x1AA7, helmCallback
 *          Parent: 00000000, End: 0000025C, Next: 00000260
 *          Debug start: 00000006, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (0001F8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), idx
 * (000208)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), lpMdl
 * (00021C)  S_BPREL32: [00000010], Type:    T_32PVOID(0403), dat
 * (00022C)  S_BPREL32: [00000014], Type:             0x13A1, pos
 * (00023C)  S_BPREL32: [00000018], Type:             0x13A4, ori
 * (00024C)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (00025C) S_END
 * 
 * (000260) S_LPROC32: [0001:0002BCB9], Cb: 000000EE, Type:             0x1408, drvDraw
 *          Parent: 00000000, End: 000002FC, Next: 00000300
 *          Debug start: 00000006, Debug end: 000000EA
 *          Flags: Frame Ptr Present
 * 
 * (000290)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0002A0)  S_BLOCK32: [0001:0002BCCF], Cb: 000000D4, (none)
 *           Parent: 00000260, End: 000002F8
 * 
 * (0002B8)   S_BPREL32: [FFFFFFF4], Type:             0x1404, Car
 * (0002C8)   S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (0002DC)   S_BPREL32: [FFFFFFFC], Type:      T_SHORT(0011), CurDetailLevel
 * 
 * (0002F8)  S_END
 * 
 * (0002FC) S_END
 * 
 * (000300) S_LPROC32: [0001:0002BDA7], Cb: 0000000E, Type:             0x1A31, REND_SetCallData
 *          Parent: 00000000, End: 00000358, Next: 0000035C
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (000338)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (000348)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), D
 * 
 * (000358) S_END
 * 
 * (00035C) S_LPROC32: [0001:0002BDB5], Cb: 0000062B, Type:             0x1408, drvHandler
 *          Parent: 00000000, End: 000004A0, Next: 000004A4
 *          Debug start: 00000006, Debug end: 0000060B
 *          Flags: Frame Ptr Present
 * 
 * (000390)  S_LDATA32: [0001:0002C3C4], Type:     T_NOTYPE(0000), (none)
 * (0003A0)  S_LABEL32: [0001:0002BE6B], $L79741
 * (0003B4)  S_LABEL32: [0001:0002BEC0], $L79743
 * (0003C8)  S_LABEL32: [0001:0002BF53], $L79747
 * (0003DC)  S_LABEL32: [0001:0002BF9F], $L79749
 * (0003F0)  S_LABEL32: [0001:0002C028], $L79753
 * (000404)  S_LABEL32: [0001:0002C0BE], $L79757
 * (000418)  S_LABEL32: [0001:0002C10B], $L79759
 * (00042C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00043C)  S_BPREL32: [FFFFFFD0], Type:             0x1404, car
 * (00044C)  S_BPREL32: [FFFFFFD4], Type:     T_USHORT(0021), mcv
 * (00045C)  S_BPREL32: [FFFFFFD8], Type:             0x1008, v
 * (00046C)  S_BPREL32: [FFFFFFE4], Type:             0x1BC6, drvr
 * (000480)  S_BPREL32: [FFFFFFE8], Type:             0x1008, b
 * (000490)  S_BPREL32: [FFFFFFF4], Type:             0x1008, a
 * 
 * (0004A0) S_END
 * 
 * (0004A4) S_LPROC32: [0001:0002C3E0], Cb: 00000023, Type:             0x1AA6, nRand
 *          Parent: 00000000, End: 000004D4, Next: 000004D8
 *          Debug start: 00000003, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (0004D4) S_END
 * 
 * (0004D8) S_GPROC32: [0001:0002C403], Cb: 00000043, Type:             0x1001, DRIVER_Allocate
 *          Parent: 00000000, End: 00000538, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000510)  S_BPREL32: [FFFFFFF8], Type:             0x1404, Car
 * (000520)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000538) S_END
 * 
 * (00053C) S_GDATA32: [0003:0097BCC0], Type:             0x1AD1, rndArray
 * (000554) S_GDATA32: [0003:0097BCB8], Type:      T_UCHAR(0020), rndIndex
 * (00056C) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000584) S_GDATA32: [0003:00011B88], Type:             0x1BC7, CarDetailInfo
 * (0005A0) S_GDATA32: [0003:00075164], Type:             0x140A, GlobalCamera
 * (0005BC) S_LDATA32: [0003:00075678], Type:             0x1006, mTemp
 * (0005D0) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * 
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

