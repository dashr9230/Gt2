
// File: C:\CodePrj\Gt2\Game\src\dave\TVedit.c

/*
 * ModName: .\Debug\TVedit.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\TVedit.obj
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
 */

/*
 * (000CDC) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (000CF8) S_GDATA32: [0003:00075070], Type:             0x1404, TVED
 * (000D0C) S_GDATA32: [0003:0121E700], Type:             0x140B, CamHead
 * (000D24) S_GDATA32: [0003:0121E660], Type:             0x140B, CamTail
 * (000D3C) S_GDATA32: [0003:00C44220], Type:             0x1BFC, Joy
 * (000D50) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000D68) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000D80) S_GDATA32: [0003:0097BED0], Type:     T_REAL32(0040), meshXZD
 * (000D98) S_GDATA32: [0003:0097BED4], Type:     T_REAL32(0040), meshZZD
 * (000DB0) S_GDATA32: [0003:0097BEC8], Type:     T_REAL32(0040), meshXOff
 * (000DC8) S_GDATA32: [0003:0097BECC], Type:     T_REAL32(0040), meshZOff
 * (000DE0) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (000DFC) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * (000E18) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 * (000E34) S_GDATA32: [0003:0121EFC0], Type:             0x1A2B, Mouse
 */

/*
 * (00008C) S_GPROC32: [0001:00027400], Cb: 0000011D, Type:             0x1824, TVED_Allocate
 *          Parent: 00000000, End: 000000E8, Next: 000000EC
 *          Debug start: 00000006, Debug end: 00000119
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [FFFFFFF8], Type:             0x1404, obj
 * (0000D4)  S_BPREL32: [FFFFFFFC], Type:             0x1BEA, tved
 * 
 * (0000E8) S_END
 */
void TVED_Allocate()
{
	// TODO: TVED_Allocate
}

/*
 * (0000EC) S_GPROC32: [0001:0002751D], Cb: 00000039, Type:             0x1408, TVED_Destroy
 *          Parent: 00000000, End: 00000160, Next: 00000164
 *          Debug start: 00000004, Debug end: 00000035
 *          Flags: Frame Ptr Present
 * 
 * (000120)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000130)  S_BLOCK32: [0001:00027527], Cb: 0000002B, (none)
 *           Parent: 000000EC, End: 0000015C
 * 
 * (000148)   S_BPREL32: [FFFFFFFC], Type:             0x1BEA, tved
 * 
 * (00015C)  S_END
 * 
 * (000160) S_END
 */
void TVED_Destroy()
{
	// TODO: TVED_Destroy
}

/*
 * (000164) S_GPROC32: [0001:00027556], Cb: 0000001E, Type:             0x1408, TVED_Release
 *          Parent: 00000000, End: 000001A8, Next: 000001AC
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (000198)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0001A8) S_END
 */
void TVED_Release()
{
	// TODO: TVED_Release
}

/*
 * (0001AC) S_GPROC32: [0001:00027574], Cb: 00000041, Type:             0x1BEC, GetCamDist
 *          Parent: 00000000, End: 00000230, Next: 00000234
 *          Debug start: 00000006, Debug end: 0000003D
 *          Flags: Frame Ptr Present
 * 
 * (0001E0)  S_BPREL32: [00000008], Type:             0x140A, Cam
 * (0001F0)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000200)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000210)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), cy
 * (000220)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), cx
 * 
 * (000230) S_END
 */
void GetCamDist()
{
	// TODO: GetCamDist
}

/*
 * (000234) S_GPROC32: [0001:000275B5], Cb: 00000076, Type:             0x1BED, FindClosestCameraman
 *          Parent: 00000000, End: 000002F8, Next: 000002FC
 *          Debug start: 00000006, Debug end: 00000072
 *          Flags: Frame Ptr Present
 * 
 * (000270)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000280)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000290)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Filter
 * (0002A4)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), nhyp
 * (0002B8)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), chyp
 * (0002CC)  S_BPREL32: [FFFFFFF8], Type:             0x140A, ChosenCam
 * (0002E4)  S_BPREL32: [FFFFFFFC], Type:             0x140A, ThisCam
 * 
 * (0002F8) S_END
 */
void FindClosestCameraman()
{
	// TODO: FindClosestCameraman
}

/*
 * (0002FC) S_GPROC32: [0001:0002762B], Cb: 0000007A, Type:             0x1BED, HireCameramanAt
 *          Parent: 00000000, End: 000003B4, Next: 000003B8
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (000334)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000344)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000354)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Flags
 * (000368)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), y1
 * (000378)  S_BPREL32: [FFFFFFEC], Type:             0x1A7E, Screen
 * (00038C)  S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), czone
 * (0003A0)  S_BPREL32: [FFFFFFF4], Type:             0x1008, real
 * 
 * (0003B4) S_END
 */
void HireCameramanAt()
{
	// TODO: HireCameramanAt
}

/*
 * (0003B8) S_LPROC32: [0001:000276A5], Cb: 00000071, Type:             0x1AA5, meshFindCollisionZone
 *          Parent: 00000000, End: 00000474, Next: 00000478
 *          Debug start: 00000006, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (0003F8)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000408)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z
 * (000418)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (000428)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), iz
 * (000438)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ix
 * 
 * (000448)  S_BLOCK32: [0001:000276F9], Cb: 00000017, (none)
 *           Parent: 000003B8, End: 00000470
 * 
 * (000460)   S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), z
 * 
 * (000470)  S_END
 * 
 * (000474) S_END
 */
void meshFindCollisionZone()
{
	// TODO: meshFindCollisionZone
}

/*
 * (000478) S_GPROC32: [0001:00027716], Cb: 00000675, Type:             0x1408, TVED_Handler
 *          Parent: 00000000, End: 00000704, Next: 00000708
 *          Debug start: 00000006, Debug end: 00000671
 *          Flags: Frame Ptr Present
 * 
 * (0004AC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0004BC)  S_BPREL32: [FFFFFFDC], Type:             0x1A86, CarManager
 * (0004D4)  S_BPREL32: [FFFFFFE0], Type:       T_INT4(0074), RClick
 * (0004E8)  S_BPREL32: [FFFFFFE4], Type:       T_INT4(0074), LClick
 * (0004FC)  S_BPREL32: [FFFFFFE8], Type:             0x1AA2, RaceControl
 * (000514)  S_BPREL32: [FFFFFFEC], Type:             0x140A, ThisCam
 * (000528)  S_BPREL32: [FFFFFFF0], Type:             0x1404, Focus
 * (00053C)  S_BPREL32: [FFFFFFF4], Type:             0x1BF4, jstk
 * (000550)  S_BPREL32: [FFFFFFF8], Type:             0x1BEA, tved
 * (000564)  S_BPREL32: [FFFFFFFC], Type:             0x1404, CM_Obj
 * 
 * (000578)  S_BLOCK32: [0001:00027881], Cb: 00000054, (none)
 *           Parent: 00000478, End: 000005C8
 * 
 * (000590)   S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), z
 * (0005A0)   S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), x
 * (0005B0)   S_BPREL32: [FFFFFFD8], Type:             0x140A, Deselected
 * 
 * (0005C8)  S_END
 * 
 * (0005CC)  S_BLOCK32: [0001:0002790E], Cb: 0000005A, (none)
 *           Parent: 00000478, End: 0000061C
 * 
 * (0005E4)   S_BPREL32: [FFFFFFC4], Type:             0x140A, MoveToCam
 * (0005FC)   S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), z
 * (00060C)   S_BPREL32: [FFFFFFCC], Type:     T_REAL32(0040), x
 * 
 * (00061C)  S_END
 * 
 * (000620)  S_BLOCK32: [0001:0002796A], Cb: 0000003A, (none)
 *           Parent: 00000478, End: 00000658
 * 
 * (000638)   S_BPREL32: [FFFFFFBC], Type:     T_REAL32(0040), z
 * (000648)   S_BPREL32: [FFFFFFC0], Type:     T_REAL32(0040), x
 * 
 * (000658)  S_END
 * 
 * (00065C)  S_BLOCK32: [0001:000279BE], Cb: 000000F2, (none)
 *           Parent: 00000478, End: 00000700
 * 
 * (000674)   S_BPREL32: [FFFFFFA0], Type:     T_REAL32(0040), newcamx
 * (000688)   S_BPREL32: [FFFFFFA4], Type:     T_REAL32(0040), newcamy
 * (00069C)   S_BPREL32: [FFFFFFA8], Type:     T_REAL32(0040), testy
 * (0006B0)   S_BPREL32: [FFFFFFAC], Type:     T_REAL32(0040), testx
 * (0006C4)   S_BPREL32: [FFFFFFB0], Type:     T_REAL32(0040), tempy
 * (0006D8)   S_BPREL32: [FFFFFFB4], Type:     T_REAL32(0040), tempx
 * (0006EC)   S_BPREL32: [FFFFFFB8], Type:             0x140A, NewCam
 * 
 * (000700)  S_END
 * 
 * (000704) S_END
 */
void TVED_Handler()
{
	// TODO: TVED_Handler
}

/*
 * (000708) S_GPROC32: [0001:00027D8B], Cb: 00000094, Type:             0x1BF6, SetCamColor
 *          Parent: 00000000, End: 000007B8, Next: 000007BC
 *          Debug start: 00000006, Debug end: 00000090
 *          Flags: Frame Ptr Present
 * 
 * (00073C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00074C)  S_BPREL32: [0000000C], Type:             0x140A, Cam
 * (00075C)  S_BPREL32: [00000010], Type:      T_ULONG(0022), FlashFlag
 * (000774)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), Flash
 * (000788)  S_LDATA32: [0003:000751C0], Type:      T_ULONG(0022), FlashCounter
 * (0007A4)  S_BPREL32: [FFFFFFFC], Type:             0x1BEA, tved
 * 
 * (0007B8) S_END
 */
void SetCamColor()
{
	// TODO: SetCamColor
}

/*
 * (0007BC) S_GPROC32: [0001:00027E1F], Cb: 00000005, Type:             0x1BF8, SetCamLogo
 *          Parent: 00000000, End: 00000810, Next: 00000814
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0007F0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000800)  S_BPREL32: [0000000C], Type:             0x140A, Cam
 * 
 * (000810) S_END
 */
void SetCamLogo()
{
	// TODO: SetCamLogo
}

/*
 * (000814) S_GPROC32: [0001:00027E24], Cb: 0000004E, Type:             0x1408, TVED_Draw
 *          Parent: 00000000, End: 00000880, Next: 00000884
 *          Debug start: 00000006, Debug end: 0000004A
 *          Flags: Frame Ptr Present
 * 
 * (000848)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000858)  S_BPREL32: [FFFFFFF8], Type:             0x140A, ThisCam
 * (00086C)  S_BPREL32: [FFFFFFFC], Type:             0x1BEA, tved
 * 
 * (000880) S_END
 */
void TVED_Draw()
{
	// TODO: TVED_Draw
}

/*
 * (000884) S_LPROC32: [0001:00027E72], Cb: 00000104, Type:             0x1BF9, DrawMouse
 *          Parent: 00000000, End: 000008EC, Next: 000008F0
 *          Debug start: 00000003, Debug end: 00000102
 *          Flags: Frame Ptr Present
 * 
 * (0008B8)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (0008C8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (0008D8)  S_LDATA32: [0003:00075190], Type:             0x1ABB, tri
 * 
 * (0008EC) S_END
 */
void DrawMouse()
{
	// TODO: DrawMouse
}

/*
 * (0008F0) S_GPROC32: [0001:00027F76], Cb: 0000011E, Type:             0x1001, TVED_Save
 *          Parent: 00000000, End: 000009AC, Next: 000009B0
 *          Debug start: 00000006, Debug end: 0000011A
 *          Flags: Frame Ptr Present
 * 
 * (000924)  S_BPREL32: [FFFFFF90], Type:    T_32PVOID(0403), hFile
 * (000938)  S_BPREL32: [FFFFFF94], Type:             0x1BFB, CamPacket
 * (000950)  S_BPREL32: [FFFFFFB4], Type:             0x180C, Filename
 * (000968)  S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * (000980)  S_BPREL32: [FFFFFFF8], Type:             0x140A, ThisCam
 * (000994)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), numbytes
 * 
 * (0009AC) S_END
 */
void TVED_Save()
{
	// TODO: TVED_Save
}

/*
 * (0009B0) S_GPROC32: [0001:00028094], Cb: 0000000C, Type:             0x17C9, CON_TVED_Save
 *          Parent: 00000000, End: 00000A10, Next: 00000A14
 *          Debug start: 00000003, Debug end: 0000000A
 *          Flags: Frame Ptr Present
 * 
 * (0009E8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0009FC)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * 
 * (000A10) S_END
 */
void CON_TVED_Save()
{
	// TODO: CON_TVED_Save
}

/*
 * (000A14) S_GPROC32: [0001:000280A0], Cb: 00000047, Type:             0x1001, TVED_Reset
 *          Parent: 00000000, End: 00000A70, Next: 00000A74
 *          Debug start: 00000006, Debug end: 00000043
 *          Flags: Frame Ptr Present
 * 
 * (000A48)  S_BPREL32: [FFFFFFF8], Type:             0x140A, NextCam
 * (000A5C)  S_BPREL32: [FFFFFFFC], Type:             0x140A, ThisCam
 * 
 * (000A70) S_END
 */
void TVED_Reset()
{
	// TODO: TVED_Reset
}

/*
 * (000A74) S_GPROC32: [0001:000280E7], Cb: 00000027, Type:             0x17C9, CON_TVED_Reset
 *          Parent: 00000000, End: 00000AE8, Next: 00000AEC
 *          Debug start: 00000004, Debug end: 00000023
 *          Flags: Frame Ptr Present
 * 
 * (000AAC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000AC0)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (000AD4)  S_BPREL32: [FFFFFFFC], Type:             0x1BEA, tved
 * 
 * (000AE8) S_END
 */
void CON_TVED_Reset()
{
	// TODO: CON_TVED_Reset
}

/*
 * (000AEC) S_GPROC32: [0001:0002810E], Cb: 00000114, Type:             0x1001, TVED_Load
 *          Parent: 00000000, End: 00000BF4, Next: 00000BF8
 *          Debug start: 00000006, Debug end: 00000110
 *          Flags: Frame Ptr Present
 * 
 * (000B20)  S_LDATA32: [0003:000751C4], Type:      T_ULONG(0022), quickie_cam_count
 * (000B40)  S_BPREL32: [FFFFFF88], Type:    T_32PVOID(0403), hFile
 * (000B54)  S_BPREL32: [FFFFFF8C], Type:             0x1BFB, CamPacket
 * (000B6C)  S_BPREL32: [FFFFFFAC], Type:             0x180C, Filename
 * (000B84)  S_BPREL32: [FFFFFFEC], Type:             0x1AA2, RaceControl
 * (000B9C)  S_BPREL32: [FFFFFFF0], Type:             0x140A, ThisCam
 * (000BB0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), FileSize
 * (000BC8)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), NumCams
 * (000BDC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), numbytes
 * 
 * (000BF4) S_END
 */
void TVED_Load()
{
	// TODO: TVED_Load
}

/*
 * (000BF8) S_GPROC32: [0001:00028222], Cb: 0000000C, Type:             0x17C9, CON_TVED_Load
 *          Parent: 00000000, End: 00000C58, Next: 00000C5C
 *          Debug start: 00000003, Debug end: 0000000A
 *          Flags: Frame Ptr Present
 * 
 * (000C30)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000C44)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * 
 * (000C58) S_END
 */
void CON_TVED_Load()
{
	// TODO: CON_TVED_Load
}

/*
 * (000C5C) S_GPROC32: [0001:0002822E], Cb: 0000003B, Type:             0x1001, TVED_Console_Install
 *          Parent: 00000000, End: 00000C98, Next: 00000C9C
 *          Debug start: 00000003, Debug end: 00000039
 *          Flags: Frame Ptr Present
 * 
 * (000C98) S_END
 */
void TVED_Console_Install()
{
	// TODO: TVED_Console_Install
}

/*
 * (000C9C) S_GPROC32: [0001:00028269], Cb: 00000005, Type:             0x1001, TVED_AutoSelectCam
 *          Parent: 00000000, End: 00000CD8, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (000CD8) S_END
 */
void TVED_AutoSelectCam()
{
	// TODO: TVED_AutoSelectCam
}

