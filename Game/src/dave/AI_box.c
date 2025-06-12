
// File: C:\CodePrj\Gt2\Game\src\dave\AI_box.c

/*
 * ModName: .\Debug\AI_box.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\AI_box.obj
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
 * (000F54) S_GDATA32: [0003:0097BCC0], Type:             0x1AD1, rndArray
 * (000F6C) S_GDATA32: [0003:0097BCB8], Type:      T_UCHAR(0020), rndIndex
 * (000F84) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (000FA0) S_GDATA32: [0003:009CF688], Type:     T_REAL32(0040), throttleModDueToAvoid
 * (000FC4) S_GDATA32: [0003:009CF68C], Type:     T_REAL32(0040), brakeDueToAvoid
 * (000FE4) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (001000) S_GDATA32: [0003:0097F140], Type:             0x1404, RaceCraftObject
 * (001020) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (00103C) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (001058) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 */

/*
 * (00008C) S_GPROC32: [0001:00000000], Cb: 00000042, Type:             0x1C58, AI_ShowLine
 *          Parent: 00000000, End: 000000F4, Next: 000000F8
 *          Debug start: 00000004, Debug end: 0000003E
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0000D0)  S_BPREL32: [0000000C], Type:             0x1AE3, rs
 * (0000E0)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (0000F4) S_END
 */

/*
 * (0000F8) S_GPROC32: [0001:00000042], Cb: 000000EB, Type:             0x1408, AI_ChooseLine
 *          Parent: 00000000, End: 00000188, Next: 0000018C
 *          Debug start: 00000006, Debug end: 000000E7
 *          Flags: Frame Ptr Present
 * 
 * (000130)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000140)  S_BPREL32: [FFFFFFF0], Type:             0x1A9D, ThisCar
 * (000154)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (000164)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), trigger
 * (000178)  S_BPREL32: [FFFFFFFC], Type:             0x1AE3, rs
 * 
 * (000188) S_END
 */

/*
 * (00018C) S_GPROC32: [0001:0000012D], Cb: 000002E1, Type:             0x1408, AI_BlackBox
 *          Parent: 00000000, End: 00000244, Next: 00000248
 *          Debug start: 00000006, Debug end: 000002DD
 *          Flags: Frame Ptr Present
 * 
 * (0001C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0001D0)  S_BPREL32: [FFFFFFF4], Type:             0x1A9D, ThisCar
 * (0001E4)  S_BPREL32: [FFFFFFF8], Type:             0x1A9E, ThisControl
 * (0001FC)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (000210)  S_BLOCK32: [0001:00000206], Cb: 00000187, (none)
 *           Parent: 0000018C, End: 00000240
 * 
 * (000228)   S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), bestGear
 * 
 * (000240)  S_END
 * 
 * (000244) S_END
 */

/*
 * (000248) S_GPROC32: [0001:0000040E], Cb: 00000185, Type:             0x1D67, FindCarPos
 *          Parent: 00000000, End: 00000340, Next: 00000344
 *          Debug start: 00000006, Debug end: 00000181
 *          Flags: Frame Ptr Present
 * 
 * (00027C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00028C)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), xpos
 * (0002A0)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), zpos
 * (0002B4)  S_BPREL32: [FFFFFFC8], Type:             0x1C45, vTop
 * (0002C8)  S_BPREL32: [FFFFFFD0], Type:             0x1A9D, ThisCar
 * (0002DC)  S_BPREL32: [FFFFFFD4], Type:             0x1C45, vBot
 * (0002F0)  S_BPREL32: [FFFFFFDC], Type:             0x1C45, d
 * (000300)  S_BPREL32: [FFFFFFE4], Type:             0x1C45, c
 * (000310)  S_BPREL32: [FFFFFFEC], Type:             0x1AE3, rs
 * (000320)  S_BPREL32: [FFFFFFF0], Type:             0x1C45, b
 * (000330)  S_BPREL32: [FFFFFFF8], Type:             0x1C45, a
 * 
 * (000340) S_END
 */

/*
 * (000344) S_GPROC32: [0001:00000593], Cb: 0000100D, Type:             0x1D68, SteeringHelp
 *          Parent: 00000000, End: 000007BC, Next: 000007C0
 *          Debug start: 00000009, Debug end: 00001009
 *          Flags: Frame Ptr Present
 * 
 * (000378)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000388)  S_BPREL32: [FFFFFEF0], Type:             0x1C45, vLineB
 * (00039C)  S_BPREL32: [FFFFFEF8], Type:             0x1C45, vCarToA
 * (0003B0)  S_BPREL32: [FFFFFF00], Type:             0x1C45, vCrossRoad
 * (0003C8)  S_BPREL32: [FFFFFF08], Type:       T_INT4(0074), TargetCheck
 * (0003E0)  S_BPREL32: [FFFFFF0C], Type:     T_REAL32(0040), closest
 * (0003F4)  S_BPREL32: [FFFFFF10], Type:             0x1AE3, rs2
 * (000404)  S_BPREL32: [FFFFFF14], Type:             0x1C45, vLineA
 * (000418)  S_BPREL32: [FFFFFF1C], Type:             0x1C45, vCarPos
 * (00042C)  S_BPREL32: [FFFFFF24], Type:             0x1404, closeCar
 * (000444)  S_BPREL32: [FFFFFF28], Type:     T_REAL32(0040), slowdown
 * (00045C)  S_BPREL32: [FFFFFF2C], Type:     T_USHORT(0021), dir
 * (00046C)  S_BPREL32: [FFFFFF30], Type:             0x1404, objLoop
 * (000480)  S_BPREL32: [FFFFFF34], Type:     T_REAL32(0040), targetX
 * (000494)  S_BPREL32: [FFFFFF38], Type:     T_REAL32(0040), Mosey
 * (0004A8)  S_BPREL32: [FFFFFF3C], Type:             0x1A9D, ThisCar
 * (0004BC)  S_BPREL32: [FFFFFF40], Type:      T_SHORT(0011), required_heading
 * (0004DC)  S_BPREL32: [FFFFFF44], Type:     T_REAL32(0040), angle_degrees
 * (0004F8)  S_BPREL32: [FFFFFF48], Type:     T_REAL32(0040), ddd
 * (000508)  S_BPREL32: [FFFFFF4C], Type:             0x1A9E, ThisControl
 * (000520)  S_BPREL32: [FFFFFF50], Type:     T_REAL32(0040), himZ
 * (000534)  S_BPREL32: [FFFFFF54], Type:             0x1C52, vTest
 * (000548)  S_BPREL32: [FFFFFF7C], Type:             0x1C45, v2d
 * (000558)  S_BPREL32: [FFFFFF84], Type:      T_ULONG(0022), nAhead
 * (00056C)  S_BPREL32: [FFFFFF88], Type:      T_ULONG(0022), i
 * (00057C)  S_BPREL32: [FFFFFF8C], Type:     T_REAL32(0040), nz
 * (00058C)  S_BPREL32: [FFFFFF90], Type:             0x1C45, vRealTarget
 * (0005A4)  S_BPREL32: [FFFFFF98], Type:             0x1C45, vI
 * (0005B4)  S_BPREL32: [FFFFFFA0], Type:     T_REAL32(0040), himX
 * (0005C8)  S_BPREL32: [FFFFFFA4], Type:             0x1AA2, RaceControl
 * (0005E0)  S_BPREL32: [FFFFFFA8], Type:             0x1C45, vCarToI
 * (0005F4)  S_BPREL32: [FFFFFFB0], Type:       T_INT4(0074), HeadingCheck
 * (000610)  S_BPREL32: [FFFFFFB4], Type:     T_REAL32(0040), meZ
 * (000620)  S_BPREL32: [FFFFFFB8], Type:     T_REAL32(0040), nx
 * (000630)  S_BPREL32: [FFFFFFBC], Type:     T_REAL32(0040), angle_wordian
 * (00064C)  S_BPREL32: [FFFFFFC0], Type:     T_REAL32(0040), steerdiff
 * (000664)  S_BPREL32: [FFFFFFC4], Type:             0x1C45, vCarTarget
 * (00067C)  S_BPREL32: [FFFFFFCC], Type:     T_REAL32(0040), meX
 * (00068C)  S_BPREL32: [FFFFFFD0], Type:             0x1C45, vOnRailsRearGunner
 * (0006AC)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), ddm
 * (0006BC)  S_BPREL32: [FFFFFFDC], Type:             0x1C45, vT
 * (0006CC)  S_BPREL32: [FFFFFFE4], Type:             0x1AE3, rs
 * (0006DC)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), steersign
 * (0006F4)  S_BPREL32: [FFFFFFEC], Type:             0x1C45, vOnRails
 * (00070C)  S_BPREL32: [FFFFFFF4], Type:             0x1AA3, vDat
 * (000720)  S_BPREL32: [FFFFFFF8], Type:     T_USHORT(0021), heading
 * (000734)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), ShowIntersect
 * 
 * (000750)  S_BLOCK32: [0001:00001261], Cb: 000000DB, (none)
 *           Parent: 00000344, End: 00000784
 * 
 * (000768)   S_LDATA32: [0003:00074FA8], Type:      T_ULONG(0022), MoseyCount
 * 
 * (000784)  S_END
 * 
 * (000788)  S_BLOCK32: [0001:0000133E], Cb: 00000037, (none)
 *           Parent: 00000344, End: 000007B8
 * 
 * (0007A0)   S_LDATA32: [0003:00074FAC], Type:      T_ULONG(0022), MoseyFail
 * 
 * (0007B8)  S_END
 * 
 * (0007BC) S_END
 */

/*
 * (0007C0) S_GPROC32: [0001:000015A0], Cb: 00000230, Type:             0x1D68, ThrottleHelp
 *          Parent: 00000000, End: 00000988, Next: 0000098C
 *          Debug start: 00000006, Debug end: 0000022C
 *          Flags: Frame Ptr Present
 * 
 * (0007F4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000804)  S_BPREL32: [FFFFFFBC], Type:     T_REAL32(0040), catchup_multiplyer
 * (000824)  S_BPREL32: [FFFFFFC0], Type:             0x1A86, CarManager
 * (00083C)  S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), oz
 * (00084C)  S_BPREL32: [FFFFFFC8], Type:             0x1A9D, ThisCar
 * (000860)  S_BPREL32: [FFFFFFCC], Type:     T_REAL32(0040), catchup_thr
 * (000878)  S_BPREL32: [FFFFFFD0], Type:             0x1A9E, ThisControl
 * (000890)  S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), ox
 * (0008A0)  S_BPREL32: [FFFFFFD8], Type:             0x1C5B, gred
 * (0008B4)  S_BPREL32: [FFFFFFDC], Type:             0x1C4B, RaceCraft
 * (0008CC)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), catchup_place
 * (0008E8)  S_BPREL32: [FFFFFFE4], Type:             0x1AA2, RaceControl
 * (000900)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), catchup_year
 * (00091C)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), catchup_model
 * (000938)  S_BPREL32: [FFFFFFF0], Type:             0x1A9D, LeadCar
 * (00094C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), catchup_mod
 * (000964)  S_BPREL32: [FFFFFFF8], Type:             0x1AE3, rs
 * (000974)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), speed
 * 
 * (000988) S_END
 */

/*
 * (00098C) S_GPROC32: [0001:000017D0], Cb: 000000A2, Type:             0x1D68, BrakeHelp
 *          Parent: 00000000, End: 00000A84, Next: 00000A88
 *          Debug start: 00000006, Debug end: 0000009E
 *          Flags: Frame Ptr Present
 * 
 * (0009C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0009D0)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), oz
 * (0009E0)  S_BPREL32: [FFFFFFE0], Type:             0x1A9D, ThisCar
 * (0009F4)  S_BPREL32: [FFFFFFE4], Type:             0x1A9E, ThisControl
 * (000A0C)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), ox
 * (000A1C)  S_BPREL32: [FFFFFFEC], Type:             0x1C5B, gred
 * (000A30)  S_BPREL32: [FFFFFFF0], Type:             0x1C4B, RaceCraft
 * (000A48)  S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * (000A60)  S_BPREL32: [FFFFFFF8], Type:             0x1AE3, rs
 * (000A70)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), speed
 * 
 * (000A84) S_END
 */

/*
 * (000A88) S_GPROC32: [0001:00001872], Cb: 00000088, Type:             0x1D6A, Car2CarColl
 *          Parent: 00000000, End: 00000B3C, Next: 00000B40
 *          Debug start: 00000006, Debug end: 00000084
 *          Flags: Frame Ptr Present
 * 
 * (000ABC)  S_BPREL32: [00000008], Type:             0x1404, MyCar
 * (000AD0)  S_BPREL32: [0000000C], Type:             0x1404, OpCar
 * (000AE4)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), sepdist
 * (000AF8)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), dx
 * (000B08)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), dir
 * (000B18)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), dist
 * (000B2C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), dz
 * 
 * (000B3C) S_END
 */

/*
 * (000B40) S_GPROC32: [0001:000018FA], Cb: 0000004C, Type:             0x1D6B, Car2CarCollNear
 *          Parent: 00000000, End: 00000BB8, Next: 00000BBC
 *          Debug start: 00000004, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (000B78)  S_BPREL32: [00000008], Type:             0x1404, MyCar
 * (000B8C)  S_BPREL32: [0000000C], Type:             0x1404, HumanCar
 * (000BA4)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), dist
 * 
 * (000BB8) S_END
 */

/*
 * (000BBC) S_GPROC32: [0001:00001946], Cb: 0000009D, Type:             0x1408, AvoidCollision
 *          Parent: 00000000, End: 00000C90, Next: 00000C94
 *          Debug start: 00000006, Debug end: 00000099
 *          Flags: Frame Ptr Present
 * 
 * (000BF4)  S_BPREL32: [00000008], Type:             0x1404, ThisObj
 * (000C08)  S_BPREL32: [FFFFFFF0], Type:             0x1404, TestObj
 * (000C1C)  S_BPREL32: [FFFFFFF4], Type:             0x1A9D, TestCar
 * (000C30)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (000C44)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000C5C)  S_BLOCK32: [0001:000019B2], Cb: 00000022, (none)
 *           Parent: 00000BBC, End: 00000C8C
 * 
 * (000C74)   S_BPREL32: [FFFFFFEC], Type:             0x1A9E, ThisControl
 * 
 * (000C8C)  S_END
 * 
 * (000C90) S_END
 */

/*
 * (000C94) S_GPROC32: [0001:000019E3], Cb: 0000006D, Type:             0x1D6A, ProximityCheck
 *          Parent: 00000000, End: 00000D48, Next: 00000D4C
 *          Debug start: 00000006, Debug end: 00000069
 *          Flags: Frame Ptr Present
 * 
 * (000CCC)  S_BPREL32: [00000008], Type:             0x1404, MyObj
 * (000CE0)  S_BPREL32: [0000000C], Type:             0x1404, TestObj
 * (000CF4)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), seperation
 * (000D0C)  S_BPREL32: [FFFFFFF4], Type:             0x1A9D, TestCar
 * (000D20)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), dist
 * (000D34)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, MyCar
 * 
 * (000D48) S_END
 */

/*
 * (000D4C) S_GPROC32: [0001:00001A50], Cb: 000000F3, Type:             0x1408, Evasion
 *          Parent: 00000000, End: 00000E54, Next: 00000E58
 *          Debug start: 00000006, Debug end: 000000DF
 *          Flags: Frame Ptr Present
 * 
 * (000D7C)  S_LDATA32: [0001:00001B33], Type:     T_NOTYPE(0000), (none)
 * (000D8C)  S_LABEL32: [0001:00001AE7], $L80506
 * (000DA0)  S_LABEL32: [0001:00001AF6], $L80507
 * (000DB4)  S_LABEL32: [0001:00001B05], $L80508
 * (000DC8)  S_LABEL32: [0001:00001B14], $L80509
 * (000DDC)  S_BPREL32: [00000008], Type:             0x1404, MyObj
 * (000DF0)  S_BPREL32: [FFFFFFEC], Type:             0x1404, TestObj
 * (000E04)  S_BPREL32: [FFFFFFF0], Type:             0x1A86, CarManager
 * (000E1C)  S_BPREL32: [FFFFFFF4], Type:             0x1A9D, TestCar
 * (000E30)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, MyCar
 * (000E44)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), sep
 * 
 * (000E54) S_END
 */

/*
 * (000E58) S_GPROC32: [0001:00001B43], Cb: 000000D9, Type:             0x1408, SlipStream
 *          Parent: 00000000, End: 00000F1C, Next: 00000F20
 *          Debug start: 00000006, Debug end: 000000D5
 *          Flags: Frame Ptr Present
 * 
 * (000E8C)  S_BPREL32: [00000008], Type:             0x1404, MyObj
 * (000EA0)  S_BPREL32: [FFFFFFE8], Type:             0x1404, TestObj
 * (000EB4)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), carclose
 * (000ECC)  S_BPREL32: [FFFFFFF0], Type:             0x1A86, CarManager
 * (000EE4)  S_BPREL32: [FFFFFFF4], Type:             0x1A9D, TestCar
 * (000EF8)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, MyCar
 * (000F0C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), sep
 * 
 * (000F1C) S_END
 */

/*
 * (000F20) S_LPROC32: [0001:00001C1C], Cb: 00000023, Type:             0x1AA6, nRand
 *          Parent: 00000000, End: 00000F50, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (000F50) S_END
 */

