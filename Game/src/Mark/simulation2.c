
// File: C:\CodePrj\Gt2\Game\src\Mark\simulation2.c

/*
 * ModName: .\Debug\simulation2.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\simulation2.obj
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
 */

/*
 * (0013D0) S_LDATA32: [0003:000119A8], Type:             0x13BA, diffscale
 * (0013E8) S_LDATA32: [0003:000119B8], Type:             0x1AB9, txFlare
 * (001400) S_LDATA32: [0003:000119F8], Type:             0x13BB, fullPage
 * (001418) S_LDATA32: [0003:00011A18], Type:             0x1ABA, ptForceA
 * (001430) S_LDATA32: [0003:00011A58], Type:             0x1ABA, ptForceB
 * (001448) S_LDATA32: [0003:00011A98], Type:             0x1ABA, ptMomentA
 * (001460) S_LDATA32: [0003:00011AD8], Type:             0x1ABA, ptMomentB
 * (001478) S_LDATA32: [0003:00011B18], Type:             0x1ABB, ptColTri
 * (001490) S_LDATA32: [0003:00011B48], Type:             0x1ABA, greyBox
 * (0014A8) S_GDATA32: [0003:0097B480], Type:      T_ULONG(0022), objflags
 * (0014C0) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (0014DC) S_GDATA32: [0003:0097B490], Type:             0x1008, Isec
 * (0014F0) S_GDATA32: [0003:012555A8], Type:      T_UCHAR(0020), rendDisable
 * (00150C) S_GDATA32: [0003:012555A4], Type:      T_ULONG(0022), rendDetach
 * (001528) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (001544) S_GDATA32: [0003:012555A0], Type:      T_UCHAR(0020), specEnable
 * (001560) S_GDATA32: [0003:00011B88], Type:             0x1ACD, CarDetailInfo
 * (00157C) S_GDATA32: [0003:0000D098], Type:             0x1ACF, cMeshVrt
 * (001594) S_GDATA32: [0003:0097BED0], Type:     T_REAL32(0040), meshXZD
 * (0015AC) S_GDATA32: [0003:0097BED4], Type:     T_REAL32(0040), meshZZD
 * (0015C4) S_GDATA32: [0003:0097BEC8], Type:     T_REAL32(0040), meshXOff
 * (0015DC) S_GDATA32: [0003:0097BECC], Type:     T_REAL32(0040), meshZOff
 * (0015F4) S_GDATA32: [0003:00075164], Type:             0x140A, GlobalCamera
 * (001610) S_GDATA32: [0003:0097C0FC], Type:             0x13B0, LT_Sun
 * (001628) S_LDATA32: [0002:00000760], Type:             0x1AD0, ?I@?1??simFieldCollision@@9@9
 * (001654) S_GDATA32: [0003:0097BCC0], Type:             0x1AD1, rndArray
 * (00166C) S_GDATA32: [0003:0097BCB8], Type:      T_UCHAR(0020), rndIndex
 * (001684) S_GDATA32: [0003:00070480], Type:             0x1006, CameraMatrix
 * (0016A0) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (0016B8) S_GDATA32: [0003:00C9A6E4], Type:             0x13EB, CurScreen
 * (0016D0) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (0016EC) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (001708) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * (001728) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (001744) S_GDATA32: [0003:00C97100], Type:             0x1AD2, RS_TransformChge
 * (001764) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (00177C) S_GDATA32: [0003:0097B49C], Type:     T_REAL32(0040), AirResistance
 * (001798) S_LDATA32: [0003:00078658], Type:             0x1006, rotAxis
 * (0017B0) S_LDATA32: [0003:00079FE8], Type:             0x1006, rotZ
 * (0017C4) S_LDATA32: [0003:00078610], Type:             0x1006, tmp1Rot
 * (0017DC) S_LDATA32: [0003:0007A0A9], Type:      T_UCHAR(0020), dbgMode
 * (0017F4) S_LDATA32: [0003:000777E8], Type:             0x1769, discOffset
 */

/*
 * (000090) S_GPROC32: [0001:0003E220], Cb: 000008C3, Type:             0x1408, carDraw
 *          Parent: 00000000, End: 0000041C, Next: 00000420
 *          Debug start: 0000000A, Debug end: 000008AE
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_LDATA32: [0001:0003EAD3], Type:     T_NOTYPE(0000), (none)
 * (0000D0)  S_LABEL32: [0001:0003E64A], $L81080
 * (0000E4)  S_LABEL32: [0001:0003E655], $L81081
 * (0000F8)  S_LABEL32: [0001:0003E663], $L81082
 * (00010C)  S_LABEL32: [0001:0003E670], $L81083
 * (000120)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000130)  S_BPREL32: [FFFFFFD4], Type:             0x1A83, lpTime
 * (000144)  S_BPREL32: [FFFFFFD8], Type:             0x1A86, CarManager
 * (00015C)  S_BPREL32: [FFFFFFDC], Type:             0x1A9D, ThisCar
 * (000170)  S_BPREL32: [FFFFFFE0], Type:             0x1A9E, ThisControl
 * (000188)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), Models2Use
 * (0001A0)  S_BPREL32: [FFFFFFE8], Type:       T_INT4(0074), EnvMap
 * (0001B4)  S_BPREL32: [FFFFFFEC], Type:             0x1AA2, RaceControl
 * (0001CC)  S_BPREL32: [FFFFFFF0], Type:       T_LONG(0012), Model
 * (0001E0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), RenderControl
 * (0001FC)  S_BPREL32: [FFFFFFF8], Type:             0x1404, CM_Obj
 * (000210)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (000224)  S_BLOCK32: [0001:0003E311], Cb: 00000155, (none)
 *           Parent: 00000090, End: 000002C4
 * 
 * (00023C)   S_BPREL32: [FFFFFFB8], Type:             0x1008, Pos
 * (00024C)   S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), FarP
 * (000260)   S_BPREL32: [FFFFFFC8], Type:     T_USHORT(0021), Fov
 * (000270)   S_LDATA32: [0003:0007A028], Type:             0x1006, ObjMatrix
 * (000288)   S_LDATA32: [0003:00011C08], Type:             0x1006, CamMatrix
 * (0002A0)   S_BPREL32: [FFFFFFCC], Type:             0x13A8, mdl
 * (0002B0)   S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), NearP
 * 
 * (0002C4)  S_END
 * 
 * (0002C8)  S_BLOCK32: [0001:0003E497], Cb: 0000005C, (none)
 *           Parent: 00000090, End: 00000308
 * 
 * (0002E0)   S_BPREL32: [FFFFFFB0], Type:      T_ULONG(0022), ctpy
 * (0002F4)   S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), ctpx
 * 
 * (000308)  S_END
 * 
 * (00030C)  S_BLOCK32: [0001:0003E6C7], Cb: 000003C5, (none)
 *           Parent: 00000090, End: 00000418
 * 
 * (000324)   S_BPREL32: [FFFFFF9C], Type:     T_REAL32(0040), sg
 * (000334)   S_BPREL32: [FFFFFFA0], Type:   T_32PULONG(0422), czone
 * (000348)   S_BPREL32: [FFFFFFA4], Type:     T_REAL32(0040), sr
 * (000358)   S_BPREL32: [FFFFFFA8], Type:     T_REAL32(0040), sb
 * (000368)   S_BPREL32: [FFFFFFAC], Type:             0x13A8, mdl
 * 
 * (000378)   S_BLOCK32: [0001:0003E741], Cb: 000002F5, (none)
 *            Parent: 0000030C, End: 00000414
 * 
 * (000390)    S_BPREL32: [FFFFFF98], Type:             0x13B6, thisFace
 * 
 * (0003A8)    S_BLOCK32: [0001:0003E764], Cb: 000002D2, (none)
 *             Parent: 00000378, End: 00000410
 * 
 * (0003C0)     S_BPREL32: [FFFFFF88], Type:     T_REAL32(0040), AvgeR
 * (0003D4)     S_BPREL32: [FFFFFF8C], Type:     T_REAL32(0040), AvgeB
 * (0003E8)     S_BPREL32: [FFFFFF90], Type:     T_REAL32(0040), Avge
 * (0003FC)     S_BPREL32: [FFFFFF94], Type:     T_REAL32(0040), AvgeG
 * 
 * (000410)    S_END
 * 
 * (000414)   S_END
 * 
 * (000418)  S_END
 * 
 * (00041C) S_END
 */
void carDraw()
{
	// TODO: carDraw
}

/*
 * (000420) S_LPROC32: [0001:0003EAE3], Cb: 0000000E, Type:             0x1A2F, REND_SetCallback
 *          Parent: 00000000, End: 00000478, Next: 0000047C
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (000458)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (000468)  S_BPREL32: [0000000C], Type:             0x13A7, F
 * 
 * (000478) S_END
 */
void REND_SetCallback()
{
	// TODO: REND_SetCallback
}

/*
 * (00047C) S_LPROC32: [0001:0003EAF1], Cb: 0000000E, Type:             0x1A31, REND_SetCallData
 *          Parent: 00000000, End: 000004D4, Next: 000004D8
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (0004B4)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (0004C4)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), D
 * 
 * (0004D4) S_END
 */
void REND_SetCallData()
{
	// TODO: REND_SetCallData
}

/*
 * (0004D8) S_LPROC32: [0001:0003EAFF], Cb: 00000071, Type:             0x1AA5, meshFindCollisionZone
 *          Parent: 00000000, End: 00000594, Next: 00000598
 *          Debug start: 00000006, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (000518)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000528)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z
 * (000538)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (000548)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), iz
 * (000558)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ix
 * 
 * (000568)  S_BLOCK32: [0001:0003EB53], Cb: 00000017, (none)
 *           Parent: 000004D8, End: 00000590
 * 
 * (000580)   S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), z
 * 
 * (000590)  S_END
 * 
 * (000594) S_END
 */
void meshFindCollisionZone()
{
	// TODO: meshFindCollisionZone
}

/*
 * (000598) S_LPROC32: [0001:0003EB70], Cb: 00000023, Type:             0x1AA6, nRand
 *          Parent: 00000000, End: 000005C8, Next: 000005CC
 *          Debug start: 00000003, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (0005C8) S_END
 */
void nRand()
{
	// TODO: nRand
}

/*
 * (0005CC) S_LPROC32: [0001:0003EB93], Cb: 00000182, Type:             0x1AA7, DriversArmCB
 *          Parent: 00000000, End: 000006FC, Next: 00000700
 *          Debug start: 00000006, Debug end: 0000016E
 *          Flags: Frame Ptr Present
 * 
 * (000600)  S_LDATA32: [0001:0003ED05], Type:     T_NOTYPE(0000), (none)
 * (000610)  S_LABEL32: [0001:0003EBD7], $L80926
 * (000624)  S_LABEL32: [0001:0003EC21], $L80933
 * (000638)  S_LABEL32: [0001:0003EC75], $L80938
 * (00064C)  S_LABEL32: [0001:0003ECD2], $L80943
 * (000660)  S_BPREL32: [00000008], Type:      T_ULONG(0022), idx
 * (000670)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), lpMdl
 * (000684)  S_BPREL32: [00000010], Type:    T_32PVOID(0403), dat
 * (000694)  S_BPREL32: [00000014], Type:             0x13A1, pos
 * (0006A4)  S_BPREL32: [00000018], Type:             0x13A4, ori
 * (0006B4)  S_BPREL32: [FFFFFFF0], Type:             0x1404, Obj
 * (0006C4)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), rpm
 * (0006D4)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (0006E8)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (0006FC) S_END
 */
void DriversArmCB()
{
	// TODO: DriversArmCB
}

/*
 * (000700) S_GPROC32: [0001:0003ED15], Cb: 00000028, Type:             0x1408, simStep
 *          Parent: 00000000, End: 00000754, Next: 00000758
 *          Debug start: 00000004, Debug end: 00000024
 *          Flags: Frame Ptr Present
 * 
 * (000730)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000740)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000754) S_END
 */
void simStep()
{
	// TODO: simStep
}

/*
 * (000758) S_GPROC32: [0001:0003ED3D], Cb: 00000028, Type:             0x1408, simRun
 *          Parent: 00000000, End: 000007AC, Next: 000007B0
 *          Debug start: 00000004, Debug end: 00000024
 *          Flags: Frame Ptr Present
 * 
 * (000788)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000798)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (0007AC) S_END
 */
void simRun()
{
	// TODO: simRun
}

/*
 * (0007B0) S_GPROC32: [0001:0003ED65], Cb: 00000032, Type:             0x1408, simSlow
 *          Parent: 00000000, End: 00000804, Next: 00000808
 *          Debug start: 00000004, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (0007E0)  S_BPREL32: [00000008], Type:             0x1404, car
 * (0007F0)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000804) S_END
 */
void simSlow()
{
	// TODO: simSlow
}

/*
 * (000808) S_GPROC32: [0001:0003ED97], Cb: 00000518, Type:             0x1408, simReset
 *          Parent: 00000000, End: 00000910, Next: 00000914
 *          Debug start: 00000006, Debug end: 00000514
 *          Flags: Frame Ptr Present
 * 
 * (000838)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000848)  S_BPREL32: [FFFFFFDC], Type:  T_32PREAL32(0440), m
 * (000858)  S_BPREL32: [FFFFFFE0], Type:             0x11DC, rM
 * (000868)  S_BPREL32: [FFFFFFE4], Type:             0x1A9D, ThisCar
 * (00087C)  S_BPREL32: [FFFFFFE8], Type:             0x1008, uvA
 * (00088C)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), i
 * (00089C)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), v
 * (0008AC)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (0008C0)  S_BLOCK32: [0001:0003F0E1], Cb: 00000194, (none)
 *           Parent: 00000808, End: 0000090C
 * 
 * (0008D8)   S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), l
 * (0008E8)   S_BPREL32: [FFFFFFD4], Type:             0x1AA8, SArm
 * (0008FC)   S_BPREL32: [FFFFFFD8], Type:             0x13A1, oTM
 * 
 * (00090C)  S_END
 * 
 * (000910) S_END
 */
void simReset()
{
	// TODO: simReset
}

/*
 * (000914) S_GPROC32: [0001:0003F2AF], Cb: 0000041A, Type:             0x1408, simUpright
 *          Parent: 00000000, End: 00000A4C, Next: 00000A50
 *          Debug start: 00000006, Debug end: 00000416
 *          Flags: Frame Ptr Present
 * 
 * (000948)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000958)  S_BPREL32: [FFFFFFE0], Type:  T_32PREAL32(0440), m
 * (000968)  S_BPREL32: [FFFFFFE4], Type:             0x11DC, rM
 * (000978)  S_BPREL32: [FFFFFFE8], Type:             0x1A9D, ThisCar
 * (00098C)  S_BPREL32: [FFFFFFEC], Type:             0x1008, uvA
 * (00099C)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), v
 * (0009AC)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (0009C0)  S_BLOCK32: [0001:0003F42E], Cb: 00000187, (none)
 *           Parent: 00000914, End: 00000A0C
 * 
 * (0009D8)   S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), l
 * (0009E8)   S_BPREL32: [FFFFFFD8], Type:             0x1AA8, SArm
 * (0009FC)   S_BPREL32: [FFFFFFDC], Type:             0x13A1, oTM
 * 
 * (000A0C)  S_END
 * 
 * (000A10)  S_BLOCK32: [0001:0003F5EF], Cb: 000000D1, (none)
 *           Parent: 00000914, End: 00000A48
 * 
 * (000A28)   S_BPREL32: [FFFFFFCC], Type:             0x13A1, rmv
 * (000A38)   S_BPREL32: [FFFFFFD0], Type:             0x13A1, cmv
 * 
 * (000A48)  S_END
 * 
 * (000A4C) S_END
 */
void simUpright()
{
	// TODO: simUpright
}

/*
 * (000A50) S_GPROC32: [0001:0003F6C9], Cb: 00000132, Type:             0x1AAA, simSetInverseRotationMatrix
 *          Parent: 00000000, End: 00000AC4, Next: 00000AC8
 *          Debug start: 00000004, Debug end: 0000012E
 *          Flags: Frame Ptr Present
 * 
 * (000A94)  S_BPREL32: [00000008], Type:             0x11DC, mx
 * (000AA4)  S_BPREL32: [0000000C], Type:             0x1404, obj
 * (000AB4)  S_BPREL32: [FFFFFFFC], Type:             0x11DC, rm
 * 
 * (000AC4) S_END
 */
void simSetInverseRotationMatrix()
{
	// TODO: simSetInverseRotationMatrix
}

/*
 * (000AC8) S_GPROC32: [0001:0003F7FB], Cb: 00000195, Type:             0x1AAC, BuildRotation
 *          Parent: 00000000, End: 00000BF4, Next: 00000BF8
 *          Debug start: 00000006, Debug end: 00000191
 *          Flags: Frame Ptr Present
 * 
 * (000B00)  S_BPREL32: [00000008], Type:             0x13A1, axis
 * (000B14)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), ang
 * (000B24)  S_BPREL32: [00000010], Type:             0x11DC, mat
 * (000B34)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), l
 * (000B44)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), sd
 * (000B54)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), cd
 * 
 * (000B64)  S_BLOCK32: [0001:0003F91F], Cb: 0000001D, (none)
 *           Parent: 00000AC8, End: 00000B90
 * 
 * (000B7C)   S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), macroT
 * 
 * (000B90)  S_END
 * 
 * (000B94)  S_BLOCK32: [0001:0003F93C], Cb: 0000001D, (none)
 *           Parent: 00000AC8, End: 00000BC0
 * 
 * (000BAC)   S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), macroT
 * 
 * (000BC0)  S_END
 * 
 * (000BC4)  S_BLOCK32: [0001:0003F959], Cb: 0000001D, (none)
 *           Parent: 00000AC8, End: 00000BF0
 * 
 * (000BDC)   S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), macroT
 * 
 * (000BF0)  S_END
 * 
 * (000BF4) S_END
 */
void BuildRotation()
{
	// TODO: BuildRotation
}

/*
 * (000BF8) S_LPROC32: [0001:0003F990], Cb: 00000031, Type:             0x1AAE, simSinCos
 *          Parent: 00000000, End: 00000C60, Next: 00000C64
 *          Debug start: 00000003, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (000C2C)  S_BPREL32: [00000008], Type:     T_USHORT(0021), angle
 * (000C40)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), s
 * (000C50)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), c
 * 
 * (000C60) S_END
 */
void simSinCos()
{
	// TODO: simSinCos
}

/*
 * (000C64) S_LPROC32: [0001:0003F9C1], Cb: 0000019C, Type:             0x1AB0, simMultMatrices
 *          Parent: 00000000, End: 00000CCC, Next: 00000CD0
 *          Debug start: 00000003, Debug end: 0000019A
 *          Flags: Frame Ptr Present
 * 
 * (000C9C)  S_BPREL32: [00000008], Type:             0x11DC, C
 * (000CAC)  S_BPREL32: [0000000C], Type:             0x11DC, A
 * (000CBC)  S_BPREL32: [00000010], Type:             0x11DC, B
 * 
 * (000CCC) S_END
 */
void simMultMatrices()
{
	// TODO: simMultMatrices
}

/*
 * (000CD0) S_GPROC32: [0001:0003FB5D], Cb: 000002D4, Type:             0x1AB2, simApplyForce
 *          Parent: 00000000, End: 00000E1C, Next: 00000E20
 *          Debug start: 0000000B, Debug end: 000002CE
 *          Flags: Frame Ptr Present
 * 
 * (000D08)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000D18)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), Mag
 * (000D28)  S_BPREL32: [00000010], Type:             0x13A1, Dir
 * (000D38)  S_BPREL32: [00000014], Type:             0x13A1, Pos
 * (000D48)  S_BPREL32: [FFFFFF74], Type:             0x1008, vTorque
 * (000D5C)  S_BPREL32: [FFFFFF80], Type:             0x1A9D, ThisCar
 * (000D70)  S_BPREL32: [FFFFFF84], Type:             0x11DC, rmx
 * (000D80)  S_BPREL32: [FFFFFF88], Type:             0x1008, nPos
 * (000D94)  S_BPREL32: [FFFFFF94], Type:             0x1008, vUnitAxis
 * (000DAC)  S_BPREL32: [FFFFFFA0], Type:             0x1008, vForce
 * (000DC0)  S_BPREL32: [FFFFFFAC], Type:     T_REAL32(0040), fAngAccel
 * (000DD8)  S_BPREL32: [FFFFFFB0], Type:             0x1008, vLinAccel
 * (000DF0)  S_BPREL32: [FFFFFFBC], Type:             0x1AA3, vDat
 * (000E04)  S_BPREL32: [FFFFFFC0], Type:             0x1006, mAngAccel
 * 
 * (000E1C) S_END
 */
void simApplyForce()
{
	// TODO: simApplyForce
}

/*
 * (000E20) S_LPROC32: [0001:0003FE31], Cb: 00000060, Type:             0x1AB4, simCrossProduct
 *          Parent: 00000000, End: 00000E88, Next: 00000E8C
 *          Debug start: 00000003, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (000E58)  S_BPREL32: [00000008], Type:             0x13A1, A
 * (000E68)  S_BPREL32: [0000000C], Type:             0x13A1, B
 * (000E78)  S_BPREL32: [00000010], Type:             0x13A1, T
 * 
 * (000E88) S_END
 */
void simCrossProduct()
{
	// TODO: simCrossProduct
}

/*
 * (000E8C) S_GPROC32: [0001:0003FE91], Cb: 00000090, Type:             0x1A6A, simControl
 *          Parent: 00000000, End: 00000EF8, Next: 00000EFC
 *          Debug start: 00000004, Debug end: 0000008C
 *          Flags: Frame Ptr Present
 * 
 * (000EC0)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000ED0)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), mode
 * (000EE4)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000EF8) S_END
 */
void simControl()
{
	// TODO: simControl
}

/*
 * (000EFC) S_GPROC32: [0001:0003FF21], Cb: 00000090, Type:             0x1A6A, simDebug
 *          Parent: 00000000, End: 00000F64, Next: 00000F68
 *          Debug start: 00000004, Debug end: 0000008C
 *          Flags: Frame Ptr Present
 * 
 * (000F2C)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000F3C)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), mode
 * (000F50)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000F64) S_END
 */
void simDebug()
{
	// TODO: simDebug
}

/*
 * (000F68) S_GPROC32: [0001:0003FFB1], Cb: 000000F9, Type:             0x1001, simInitialize
 *          Parent: 00000000, End: 00000FE0, Next: 00000FE4
 *          Debug start: 00000006, Debug end: 000000F5
 *          Flags: Frame Ptr Present
 * 
 * (000FA0)  S_BPREL32: [FFFFFFF0], Type:  T_32PREAL32(0440), o
 * (000FB0)  S_BPREL32: [FFFFFFF4], Type:  T_32PREAL32(0440), n
 * (000FC0)  S_BPREL32: [FFFFFFF8], Type:  T_32PREAL32(0440), m
 * (000FD0)  S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), v
 * 
 * (000FE0) S_END
 */
void simInitialize()
{
	// TODO: simInitialize
}

/*
 * (000FE4) S_GPROC32: [0001:000400AA], Cb: 00000833, Type:             0x1AB6, simInitializeObject
 *          Parent: 00000000, End: 000011FC, Next: 00001200
 *          Debug start: 00000006, Debug end: 0000082F
 *          Flags: Frame Ptr Present
 * 
 * (001020)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (001030)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), SubType
 * (001044)  S_BPREL32: [00000010], Type:      T_UCHAR(0020), Ctrl
 * (001058)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), Cheese
 * (00106C)  S_BPREL32: [FFFFFFD0], Type:  T_32PREAL32(0440), m
 * (00107C)  S_BPREL32: [FFFFFFD4], Type:             0x11DC, rM
 * (00108C)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), l
 * (00109C)  S_BPREL32: [FFFFFFDC], Type:             0x1A9D, ThisCar
 * (0010B0)  S_BPREL32: [FFFFFFE0], Type:             0x1008, uvA
 * (0010C0)  S_BPREL32: [FFFFFFEC], Type:      T_UCHAR(0020), i
 * (0010D0)  S_BPREL32: [FFFFFFF0], Type:      T_UCHAR(0020), v
 * (0010E0)  S_BPREL32: [FFFFFFF4], Type:             0x13A8, mdl
 * (0010F0)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), a
 * (001100)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (001114)  S_BLOCK32: [0001:00040194], Cb: 00000152, (none)
 *           Parent: 00000FE4, End: 0000117C
 * 
 * (00112C)   S_BPREL32: [FFFFFFCC], Type:      T_ULONG(0022), Wheel
 * 
 * (001140)   S_BLOCK32: [0001:000401B1], Cb: 00000130, (none)
 *            Parent: 00001114, End: 00001178
 * 
 * (001158)    S_BPREL32: [FFFFFFC4], Type:      T_UCHAR(0020), tt
 * (001168)    S_BPREL32: [FFFFFFC8], Type:             0x100E, ts
 * 
 * (001178)   S_END
 * 
 * (00117C)  S_END
 * 
 * (001180)  S_BLOCK32: [0001:000405CA], Cb: 000000D1, (none)
 *           Parent: 00000FE4, End: 000011B8
 * 
 * (001198)   S_BPREL32: [FFFFFFBC], Type:             0x13A1, rmv
 * (0011A8)   S_BPREL32: [FFFFFFC0], Type:             0x13A1, cmv
 * 
 * (0011B8)  S_END
 * 
 * (0011BC)  S_BLOCK32: [0001:000406BD], Cb: 00000191, (none)
 *           Parent: 00000FE4, End: 000011F8
 * 
 * (0011D4)   S_BPREL32: [FFFFFFB4], Type:             0x1AA8, SArm
 * (0011E8)   S_BPREL32: [FFFFFFB8], Type:             0x13A1, oTM
 * 
 * (0011F8)  S_END
 * 
 * (0011FC) S_END
 */
void simInitializeObject()
{
	// TODO: simInitializeObject
}

/*
 * (001200) S_LPROC32: [0001:000408DD], Cb: 0000002F, Type:             0x1AB8, TS_SKIPTRI
 *          Parent: 00000000, End: 00001254, Next: 00001258
 *          Debug start: 00000004, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (001234)  S_BPREL32: [00000008], Type:             0x100E, ts
 * (001244)  S_BPREL32: [FFFFFFFC], Type:             0x100B, eVL
 * 
 * (001254) S_END
 */
void TS_SKIPTRI()
{
	// TODO: TS_SKIPTRI
}

/*
 * (001258) S_LPROC32: [0001:0004090C], Cb: 0000002F, Type:             0x1AB8, TS_SKIPTRI2
 *          Parent: 00000000, End: 000012AC, Next: 000012B0
 *          Debug start: 00000004, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (00128C)  S_BPREL32: [00000008], Type:             0x100E, ts
 * (00129C)  S_BPREL32: [FFFFFFFC], Type:             0x17BD, eVL
 * 
 * (0012AC) S_END
 */
void TS_SKIPTRI2()
{
	// TODO: TS_SKIPTRI2
}

/*
 * (0012B0) S_LPROC32: [0001:0004093B], Cb: 000001AC, Type:             0x1AA7, wheelCall
 *          Parent: 00000000, End: 000013CC, Next: 00000000
 *          Debug start: 00000007, Debug end: 000001A7
 *          Flags: Frame Ptr Present
 * 
 * (0012E4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), idx
 * (0012F4)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), lpMdl
 * (001308)  S_BPREL32: [00000010], Type:    T_32PVOID(0403), dat
 * (001318)  S_BPREL32: [00000014], Type:             0x13A1, pos
 * (001328)  S_BPREL32: [00000018], Type:             0x13A4, ori
 * (001338)  S_BPREL32: [FFFFFFE0], Type:             0x17BD, bdv
 * (001348)  S_BPREL32: [FFFFFFE4], Type:             0x1404, obj
 * (001358)  S_BPREL32: [FFFFFFE8], Type:             0x1A9D, ThisCar
 * (00136C)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), brk
 * (00137C)  S_BPREL32: [FFFFFFF0], Type:             0x1AA8, SArm
 * (001390)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), iWhl
 * (0013A4)  S_BPREL32: [FFFFFFF8], Type:             0x13A8, lpModel
 * (0013B8)  S_BPREL32: [FFFFFFFC], Type:             0x1AA3, vDat
 * 
 * (0013CC) S_END
 */
void wheelCall()
{
	// TODO: wheelCall
}

