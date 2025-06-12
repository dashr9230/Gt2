
// File: C:\CodePrj\Gt2\Game\src\Mark\SimIterate2.c

/*
 * ModName: .\Debug\SimIterate2.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\SimIterate2.obj
 * 
 * (000044) S_COMPILE:
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
 * (0007C8) S_GDATA32: [0003:0091E090], Type:     T_REAL32(0040), ffFriction
 * (0007E4) S_GDATA32: [0003:0091E094], Type:     T_REAL32(0040), ffCentre
 * (0007FC) S_GDATA32: [0003:0091E098], Type:      T_ULONG(0022), ffEngine
 * (000814) S_GDATA32: [0003:0091E09C], Type:      T_ULONG(0022), ffTarget
 * (00082C) S_GDATA32: [0003:0091E0A0], Type:      T_RCHAR(0070), ffBump
 * (000844) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (000860) S_GDATA32: [0003:0097F140], Type:             0x1404, RaceCraftObject
 * (000880) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000898) S_GDATA32: [0003:0097F160], Type:       T_INT4(0074), SingleStep
 * (0008B4) S_GDATA32: [0003:000777D0], Type:       T_INT4(0074), TestForcePressed
 * (0008D4) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (0008F0) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (00090C) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 */

/*
 * (000090) S_GPROC32: [0001:0003C6B0], Cb: 00000135, Type:             0x1408, TestForce
 *          Parent: 00000000, End: 0000010C, Next: 00000110
 *          Debug start: 00000006, Debug end: 00000131
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0000D4)  S_BPREL32: [FFFFFFE4], Type:             0x1008, posOb
 * (0000E8)  S_BPREL32: [FFFFFFF0], Type:             0x1A9D, Car
 * (0000F8)  S_BPREL32: [FFFFFFF4], Type:             0x1008, dirWd
 * 
 * (00010C) S_END
 */

/*
 * (000110) S_GPROC32: [0001:0003C7E5], Cb: 000000BD, Type:             0x1ADE, CheckCarOrientation
 *          Parent: 00000000, End: 000001C4, Next: 000001C8
 *          Debug start: 00000006, Debug end: 000000B9
 *          Flags: Frame Ptr Present
 * 
 * (00014C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00015C)  S_BPREL32: [FFFFFFDC], Type:             0x1A9D, ThisCar
 * (000170)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), cosang
 * (000184)  S_BPREL32: [FFFFFFE4], Type:             0x1008, vCarUp
 * (000198)  S_BPREL32: [FFFFFFF0], Type:             0x1AA3, vDat
 * (0001AC)  S_BPREL32: [FFFFFFF4], Type:             0x1008, vWorldCarUp
 * 
 * (0001C4) S_END
 */

/*
 * (0001C8) S_GPROC32: [0001:0003C8A2], Cb: 0000181D, Type:             0x1408, simIterate2
 *          Parent: 00000000, End: 00000688, Next: 0000068C
 *          Debug start: 00000009, Debug end: 00001819
 *          Flags: Frame Ptr Present
 * 
 * (0001FC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00020C)  S_BPREL32: [FFFFFF24], Type:      T_SHORT(0011), BounceOff_wPh
 * (000228)  S_BPREL32: [FFFFFF28], Type:      T_SHORT(0011), BounceOff_wTh
 * (000244)  S_BPREL32: [FFFFFF2C], Type:             0x1008, BounceOff
 * (00025C)  S_BPREL32: [FFFFFF38], Type:     T_REAL32(0040), f1
 * (00026C)  S_LDATA32: [0003:000777C8], Type:     T_REAL32(0040), gCentr
 * (000284)  S_BPREL32: [FFFFFF3C], Type:             0x1A86, CarManager
 * (00029C)  S_BPREL32: [FFFFFF40], Type:             0x1A83, Time
 * (0002B0)  S_BPREL32: [FFFFFF44], Type:             0x1008, MGcenter
 * (0002C8)  S_BPREL32: [FFFFFF50], Type:      T_SHORT(0011), AppRotx
 * (0002DC)  S_BPREL32: [FFFFFF54], Type:     T_REAL32(0040), ME
 * (0002EC)  S_BPREL32: [FFFFFF58], Type:             0x11DC, rm
 * (0002FC)  S_BPREL32: [FFFFFF5C], Type:     T_REAL32(0040), skid
 * (000310)  S_BPREL32: [FFFFFF60], Type:     T_REAL32(0040), fWheelSpeedDiff
 * (00032C)  S_BPREL32: [FFFFFF64], Type:             0x1A9D, ThisCar
 * (000340)  S_BPREL32: [FFFFFF68], Type:             0x1008, CurRot
 * (000354)  S_BPREL32: [FFFFFF74], Type:      T_SHORT(0011), AppRotz
 * (000368)  S_BPREL32: [FFFFFF78], Type:             0x1A9E, ThisControl
 * (000380)  S_BPREL32: [FFFFFF7C], Type:       T_LONG(0012), csv
 * (000390)  S_BPREL32: [FFFFFF80], Type:      T_SHORT(0011), AppRoty
 * (0003A4)  S_BPREL32: [FFFFFF84], Type:     T_REAL32(0040), PE
 * (0003B4)  S_BPREL32: [FFFFFF88], Type:     T_REAL32(0040), strw
 * (0003C8)  S_BPREL32: [FFFFFF8C], Type:      T_ULONG(0022), i
 * (0003D8)  S_BPREL32: [FFFFFF90], Type:      T_UCHAR(0020), nbw
 * (0003E8)  S_BPREL32: [FFFFFF94], Type:     T_REAL32(0040), orgthv
 * (0003FC)  S_BPREL32: [FFFFFF98], Type:      T_UCHAR(0020), onGravel
 * (000414)  S_LDATA32: [0003:000777CC], Type:     T_REAL32(0040), gFrict
 * (00042C)  S_BPREL32: [FFFFFF9C], Type:             0x1AA2, RaceControl
 * (000444)  S_BPREL32: [FFFFFFA0], Type:      T_SHORT(0011), BounceOff_wRh
 * (000460)  S_BPREL32: [FFFFFFA4], Type:     T_REAL32(0040), strd
 * (000474)  S_BPREL32: [FFFFFFA8], Type:     T_REAL32(0040), fTemp
 * (000488)  S_BPREL32: [FFFFFFAC], Type:             0x1008, MGvec
 * (00049C)  S_BPREL32: [FFFFFFB8], Type:             0x1008, MGoppositevec
 * (0004B8)  S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), strc
 * (0004CC)  S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), KE
 * (0004DC)  S_BPREL32: [FFFFFFCC], Type:      T_ULONG(0022), nG
 * (0004EC)  S_LDATA32: [0003:000777C4], Type:      T_UCHAR(0020), gTick
 * (000500)  S_BPREL32: [FFFFFFD0], Type:             0x1008, rotAvg
 * (000514)  S_BPREL32: [FFFFFFDC], Type:             0x1404, CM_Obj
 * (000528)  S_BPREL32: [FFFFFFE0], Type:             0x1AE3, rs
 * (000538)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), f4
 * (000548)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), f3
 * (000558)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), humandist
 * (000570)  S_BPREL32: [FFFFFFF0], Type:             0x1AA3, vDat
 * (000584)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), idx
 * (000594)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), susi
 * (0005A8)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), f2
 * 
 * (0005B8)  S_BLOCK32: [0001:0003D22A], Cb: 0000011F, (none)
 *           Parent: 000001C8, End: 000005E0
 * 
 * (0005D0)   S_BPREL32: [FFFFFF20], Type:     T_REAL32(0040), s
 * 
 * (0005E0)  S_END
 * 
 * (0005E4)  S_BLOCK32: [0001:0003DC17], Cb: 0000010E, (none)
 *           Parent: 000001C8, End: 0000062C
 * 
 * (0005FC)   S_BPREL32: [FFFFFF18], Type:             0x13A1, oldMVptr
 * (000614)   S_BPREL32: [FFFFFF1C], Type:             0x13A1, MeshVert
 * 
 * (00062C)  S_END
 * 
 * (000630)  S_BLOCK32: [0001:0003DD60], Cb: 00000236, (none)
 *           Parent: 000001C8, End: 00000684
 * 
 * (000648)   S_BPREL32: [FFFFFF0C], Type:     T_REAL32(0040), ctv
 * (000658)   S_BPREL32: [FFFFFF10], Type:     T_REAL32(0040), fFriction
 * (000670)   S_BPREL32: [FFFFFF14], Type:     T_REAL32(0040), fCentre
 * 
 * (000684)  S_END
 * 
 * (000688) S_END
 */

/*
 * (00068C) S_LPROC32: [0001:0003E0BF], Cb: 00000129, Type:             0x1AE8, simSolveOrientation
 *          Parent: 00000000, End: 00000758, Next: 0000075C
 *          Debug start: 00000006, Debug end: 00000125
 *          Flags: Frame Ptr Present
 * 
 * (0006C8)  S_BPREL32: [00000008], Type:             0x11DC, m
 * (0006D8)  S_BPREL32: [0000000C], Type:  T_32PUSHORT(0421), Th
 * (0006E8)  S_BPREL32: [00000010], Type:  T_32PUSHORT(0421), Ph
 * (0006F8)  S_BPREL32: [00000014], Type:  T_32PUSHORT(0421), Rh
 * (000708)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), w
 * (000718)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), v
 * (000728)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), u
 * (000738)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), sa
 * (000748)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), ca
 * 
 * (000758) S_END
 */

/*
 * (00075C) S_LPROC32: [0001:0003E1E8], Cb: 00000031, Type:             0x1AAE, simSinCos
 *          Parent: 00000000, End: 000007C4, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (000790)  S_BPREL32: [00000008], Type:     T_USHORT(0021), angle
 * (0007A4)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), s
 * (0007B4)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), c
 * 
 * (0007C4) S_END
 */

