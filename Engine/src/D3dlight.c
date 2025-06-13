
// File: C:\CodePrj\Gt2\Engine\src\D3dlight.c

/*
 * ModName: .\Debug\D3dlight.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\D3dlight.obj
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
 * (000FA0) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 * (000FBC) S_GDATA32: [0003:01255DE0], Type:     T_REAL32(0040), MESH_DrawDist
 * (000FD8) S_GDATA32: [0003:0091ED68], Type:      T_UCHAR(0020), LT_Initialised
 * (000FF8) S_GDATA32: [0003:0006E1B4], Type:      T_UCHAR(0020), LT_Status
 * (001010) S_GDATA32: [0003:00C30EA0], Type:     T_REAL32(0040), CameraXPos
 * (00102C) S_GDATA32: [0003:00C30FAC], Type:     T_REAL32(0040), CameraYPos
 * (001048) S_GDATA32: [0003:00C30FA4], Type:     T_REAL32(0040), CameraZPos
 * (001064) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (001080) S_LDATA32: [0003:0006E1B8], Type:     T_REAL32(0040), fcv
 * (001094) S_GDATA32: [0003:00C96538], Type:             0x14C0, lpD3DMatBack
 * (0010B0) S_GDATA32: [0003:00C96530], Type:      T_ULONG(0022), hMatBack
 * (0010C8) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (0010E0) S_GDATA32: [0003:00C96540], Type:             0x1F65, LightCtrl
 * (0010F8) S_GDATA32: [0003:00C9653C], Type:      T_ULONG(0022), NumOfLights
 * (001114) S_GDATA32: [0003:0091ED6C], Type:      T_ULONG(0022), LT_AmbientColour
 * (001134) S_GDATA32: [0003:0091ED70], Type:      T_UCHAR(0020), LT_AmbientRed
 * (001150) S_GDATA32: [0003:0091ED71], Type:      T_UCHAR(0020), LT_AmbientGreen
 * (001170) S_GDATA32: [0003:0091ED72], Type:      T_UCHAR(0020), LT_AmbientBlue
 * (001190) S_GDATA32: [0003:0091ED73], Type:      T_UCHAR(0020), LT_AmbientAlpha
 * (0011B0) S_GDATA32: [0003:0091ED74], Type:       T_INT4(0074), LT_AmbientChanged
 * (0011D0) S_GDATA32: [0003:0006E1A4], Type:      T_ULONG(0022), LT_FogMode
 * (0011EC) S_GDATA32: [0003:0006E1A8], Type:     T_REAL32(0040), LT_FogStart
 * (001208) S_GDATA32: [0003:0006E1AC], Type:     T_REAL32(0040), LT_FogEnd
 * (001220) S_GDATA32: [0003:0091ED80], Type:       T_INT4(0074), LT_FogChanged
 * (00123C) S_GDATA32: [0003:0006E1B0], Type:     T_REAL32(0040), LT_FogDensity
 * (001258) S_GDATA32: [0003:0091ED78], Type:      T_ULONG(0022), LT_FogColour
 * (001274) S_GDATA32: [0003:0091ED7C], Type:      T_UCHAR(0020), LT_FogRed
 * (00128C) S_GDATA32: [0003:0091ED7D], Type:      T_UCHAR(0020), LT_FogGreen
 * (0012A8) S_GDATA32: [0003:0091ED7E], Type:      T_UCHAR(0020), LT_FogBlue
 * (0012C4) S_GDATA32: [0003:0091ED7F], Type:      T_UCHAR(0020), LT_FogAlpha
 * (0012E0) S_GDATA32: [0003:00C964E0], Type:             0x11B6, LT_BackMat
 * (0012FC) S_GDATA32: [0003:00C964D4], Type:      T_UCHAR(0020), LT_BackRed
 * (001318) S_GDATA32: [0003:00C96534], Type:      T_UCHAR(0020), LT_BackGreen
 * (001334) S_GDATA32: [0003:00C96535], Type:      T_UCHAR(0020), LT_BackBlue
 * (001350) S_GDATA32: [0003:00C970C0], Type:      T_UCHAR(0020), LT_BackAlpha
 * (00136C) S_GDATA32: [0003:00C964D0], Type:      T_ULONG(0022), LT_BackCtrl
 */

/*
 * (000090) S_GPROC32: [0001:000899E0], Cb: 0000016B, Type:             0x17C9, CON_FogInfo
 *          Parent: 00000000, End: 00000160, Next: 00000164
 *          Debug start: 00000009, Debug end: 00000157
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_LDATA32: [0001:00089B3B], Type:     T_NOTYPE(0000), (none)
 * (0000D4)  S_LABEL32: [0001:00089A0E], $L65647
 * (0000E8)  S_LABEL32: [0001:00089A20], $L65649
 * (0000FC)  S_LABEL32: [0001:00089A7B], $L65652
 * (000110)  S_LABEL32: [0001:00089AD3], $L65655
 * (000124)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000138)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * (00014C)  S_BPREL32: [FFFFFF00], Type:             0x1A12, Buffer
 * 
 * (000160) S_END
 */
void CON_FogInfo()
{
	// TODO: CON_FogInfo
}

/*
 * (000164) S_GPROC32: [0001:00089B4B], Cb: 00000119, Type:             0x17C9, CON_FogMode
 *          Parent: 00000000, End: 000001C0, Next: 000001C4
 *          Debug start: 00000003, Debug end: 00000117
 *          Flags: Frame Ptr Present
 * 
 * (000198)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (0001AC)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (0001C0) S_END
 */
void CON_FogMode()
{
	// TODO: CON_FogMode
}

/*
 * (0001C4) S_GPROC32: [0001:00089C64], Cb: 00000095, Type:             0x17C9, CON_FogColour
 *          Parent: 00000000, End: 00000224, Next: 00000228
 *          Debug start: 00000003, Debug end: 00000093
 *          Flags: Frame Ptr Present
 * 
 * (0001FC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000210)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000224) S_END
 */
void CON_FogColour()
{
	// TODO: CON_FogColour
}

/*
 * (000228) S_GPROC32: [0001:00089CF9], Cb: 000000A8, Type:             0x17C9, CON_FogDensity
 *          Parent: 00000000, End: 00000288, Next: 0000028C
 *          Debug start: 00000003, Debug end: 000000A6
 *          Flags: Frame Ptr Present
 * 
 * (000260)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000274)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000288) S_END
 */
void CON_FogDensity()
{
	// TODO: CON_FogDensity
}

/*
 * (00028C) S_GPROC32: [0001:00089DA1], Cb: 000000A8, Type:             0x17C9, CON_FogStart
 *          Parent: 00000000, End: 000002E8, Next: 000002EC
 *          Debug start: 00000003, Debug end: 000000A6
 *          Flags: Frame Ptr Present
 * 
 * (0002C0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (0002D4)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (0002E8) S_END
 */
void CON_FogStart()
{
	// TODO: CON_FogStart
}

/*
 * (0002EC) S_GPROC32: [0001:00089E49], Cb: 000000A8, Type:             0x17C9, CON_FogEnd
 *          Parent: 00000000, End: 00000348, Next: 0000034C
 *          Debug start: 00000003, Debug end: 000000A6
 *          Flags: Frame Ptr Present
 * 
 * (000320)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000334)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000348) S_END
 */
void CON_FogEnd()
{
	// TODO: CON_FogEnd
}

/*
 * (00034C) S_GPROC32: [0001:00089EF1], Cb: 000001D5, Type:             0x17C9, CON_FogSet
 *          Parent: 00000000, End: 00000458, Next: 0000045C
 *          Debug start: 00000006, Debug end: 000001D1
 *          Flags: Frame Ptr Present
 * 
 * (000380)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000394)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (0003A8)  S_BLOCK32: [0001:00089F43], Cb: 0000017D, (none)
 *           Parent: 0000034C, End: 00000454
 * 
 * (0003C0)   S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), Pos
 * (0003D0)   S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), Mode
 * (0003E4)   S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), Density
 * (0003F8)   S_BPREL32: [FFFFFFEC], Type:      T_UCHAR(0020), Blue
 * (00040C)   S_BPREL32: [FFFFFFF0], Type:      T_UCHAR(0020), Red
 * (00041C)   S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), End
 * (00042C)   S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), Start
 * (000440)   S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), Green
 * 
 * (000454)  S_END
 * 
 * (000458) S_END
 */
void CON_FogSet()
{
	// TODO: CON_FogSet
}

/*
 * (00045C) S_GPROC32: [0001:0008A0C6], Cb: 00000208, Type:             0x1408, DrawFogger
 *          Parent: 00000000, End: 00000500, Next: 00000504
 *          Debug start: 00000004, Debug end: 000001F4
 *          Flags: Frame Ptr Present
 * 
 * (000490)  S_LDATA32: [0001:0008A2BE], Type:     T_NOTYPE(0000), (none)
 * (0004A0)  S_LABEL32: [0001:0008A13C], $L65783
 * (0004B4)  S_LABEL32: [0001:0008A14F], $L65785
 * (0004C8)  S_LABEL32: [0001:0008A162], $L65787
 * (0004DC)  S_LABEL32: [0001:0008A175], $L65789
 * (0004F0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000500) S_END
 */
void DrawFogger()
{
	// TODO: DrawFogger
}

/*
 * (000504) S_GPROC32: [0001:0008A2CE], Cb: 00000428, Type:             0x1408, HandleFogger
 *          Parent: 00000000, End: 00000640, Next: 00000644
 *          Debug start: 00000006, Debug end: 00000408
 *          Flags: Frame Ptr Present
 * 
 * (000538)  S_LDATA32: [0001:0008A6DA], Type:     T_NOTYPE(0000), (none)
 * (000548)  S_LABEL32: [0001:0008A4B5], $L65841
 * (00055C)  S_LABEL32: [0001:0008A4FA], $L65844
 * (000570)  S_LABEL32: [0001:0008A544], $L65848
 * (000584)  S_LABEL32: [0001:0008A58E], $L65852
 * (000598)  S_LABEL32: [0001:0008A5D8], $L65856
 * (0005AC)  S_LABEL32: [0001:0008A615], $L65862
 * (0005C0)  S_LABEL32: [0001:0008A652], $L65868
 * (0005D4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0005E4)  S_BPREL32: [FFFFFFEC], Type:      T_UCHAR(0020), Sel
 * (0005F4)  S_BPREL32: [FFFFFFF0], Type:       T_LONG(0012), Val
 * (000604)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), Change
 * (000618)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), fChange
 * (00062C)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), iChange
 * 
 * (000640) S_END
 */
void HandleFogger()
{
	// TODO: HandleFogger
}

/*
 * (000644) S_GPROC32: [0001:0008A6F6], Cb: 000000C4, Type:             0x17C9, CON_Fogger
 *          Parent: 00000000, End: 000006CC, Next: 000006D0
 *          Debug start: 00000003, Debug end: 000000C2
 *          Flags: Frame Ptr Present
 * 
 * (000678)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (00068C)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * (0006A0)  S_LDATA32: [0003:0091ED88], Type:             0x1404, obj
 * (0006B4)  S_LDATA32: [0003:0091ED84], Type:      T_ULONG(0022), Fogger
 * 
 * (0006CC) S_END
 */
void CON_Fogger()
{
	// TODO: CON_Fogger
}

/*
 * (0006D0) S_GPROC32: [0001:0008A7BA], Cb: 00000250, Type:             0x1001, LT_Init
 *          Parent: 00000000, End: 00000710, Next: 00000714
 *          Debug start: 00000004, Debug end: 0000024C
 *          Flags: Frame Ptr Present
 * 
 * (000700)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000710) S_END
 */
void LT_Init()
{
	// TODO: LT_Init
}

/*
 * (000714) S_GPROC32: [0001:0008AA0A], Cb: 000000C7, Type:             0x1001, LT_Exit
 *          Parent: 00000000, End: 00000754, Next: 00000758
 *          Debug start: 00000004, Debug end: 000000C3
 *          Flags: Frame Ptr Present
 * 
 * (000744)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000754) S_END
 */
void LT_Exit()
{
	// TODO: LT_Exit
}

/*
 * (000758) S_GPROC32: [0001:0008AAD1], Cb: 000000A9, Type:             0x1F58, LT_Create
 *          Parent: 00000000, End: 0000079C, Next: 000007A0
 *          Debug start: 00000004, Debug end: 000000A5
 *          Flags: Frame Ptr Present
 * 
 * (00078C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (00079C) S_END
 */
void LT_Create()
{
	// TODO: LT_Create
}

/*
 * (0007A0) S_GPROC32: [0001:0008AB7A], Cb: 0000003F, Type:             0x1F5A, LT_Add
 *          Parent: 00000000, End: 000007E4, Next: 000007E8
 *          Debug start: 00000003, Debug end: 0000003D
 *          Flags: Frame Ptr Present
 * 
 * (0007D0)  S_BPREL32: [00000008], Type:             0x13B0, Light
 * 
 * (0007E4) S_END
 */
void LT_Add()
{
	// TODO: LT_Add
}

/*
 * (0007E8) S_GPROC32: [0001:0008ABB9], Cb: 0000003F, Type:             0x1F5A, LT_Delete
 *          Parent: 00000000, End: 00000830, Next: 00000834
 *          Debug start: 00000003, Debug end: 0000003D
 *          Flags: Frame Ptr Present
 * 
 * (00081C)  S_BPREL32: [00000008], Type:             0x13B0, Light
 * 
 * (000830) S_END
 */
void LT_Delete()
{
	// TODO: LT_Delete
}

/*
 * (000834) S_GPROC32: [0001:0008ABF8], Cb: 00000036, Type:             0x1F5A, LT_Change
 *          Parent: 00000000, End: 0000087C, Next: 00000880
 *          Debug start: 00000003, Debug end: 00000034
 *          Flags: Frame Ptr Present
 * 
 * (000868)  S_BPREL32: [00000008], Type:             0x13B0, Light
 * 
 * (00087C) S_END
 */
void LT_Change()
{
	// TODO: LT_Change
}

/*
 * (000880) S_GPROC32: [0001:0008AC2E], Cb: 0000006E, Type:             0x1F5A, LT_Remove
 *          Parent: 00000000, End: 000008C8, Next: 000008CC
 *          Debug start: 00000003, Debug end: 0000006C
 *          Flags: Frame Ptr Present
 * 
 * (0008B4)  S_BPREL32: [00000008], Type:             0x13B0, Light
 * 
 * (0008C8) S_END
 */
void LT_Remove()
{
	// TODO: LT_Remove
}

/*
 * (0008CC) S_GPROC32: [0001:0008AC9C], Cb: 00000048, Type:             0x1001, LT_RemoveALL
 *          Parent: 00000000, End: 00000910, Next: 00000914
 *          Debug start: 00000004, Debug end: 00000044
 *          Flags: Frame Ptr Present
 * 
 * (000900)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000910) S_END
 */
void LT_RemoveALL()
{
	// TODO: LT_RemoveALL
}

/*
 * (000914) S_GPROC32: [0001:0008ACE4], Cb: 000002C5, Type:             0x1001, LT_Update
 *          Parent: 00000000, End: 000009F4, Next: 000009F8
 *          Debug start: 00000006, Debug end: 000002B1
 *          Flags: Frame Ptr Present
 * 
 * (000948)  S_LDATA32: [0001:0008AF99], Type:     T_NOTYPE(0000), (none)
 * (000958)  S_LABEL32: [0001:0008AD6F], $L65984
 * (00096C)  S_LABEL32: [0001:0008AE96], $L65990
 * (000980)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), DZ
 * (000990)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), DY
 * (0009A0)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), ltc
 * (0009B0)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), DX
 * (0009C0)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), Radius
 * (0009D4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (0009E4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0009F4) S_END
 */
void LT_Update()
{
	// TODO: LT_Update
}

/*
 * (0009F8) S_GPROC32: [0001:0008AFA9], Cb: 0000000C, Type:             0x1001, LT_LightsOff
 *          Parent: 00000000, End: 00000A2C, Next: 00000A30
 *          Debug start: 00000003, Debug end: 0000000A
 *          Flags: Frame Ptr Present
 * 
 * (000A2C) S_END
 */
void LT_LightsOff()
{
	// TODO: LT_LightsOff
}

/*
 * (000A30) S_GPROC32: [0001:0008AFB5], Cb: 0000000C, Type:             0x1001, LT_LightsOn
 *          Parent: 00000000, End: 00000A64, Next: 00000A68
 *          Debug start: 00000003, Debug end: 0000000A
 *          Flags: Frame Ptr Present
 * 
 * (000A64) S_END
 */
void LT_LightsOn()
{
	// TODO: LT_LightsOn
}

/*
 * (000A68) S_GPROC32: [0001:0008AFC1], Cb: 00000069, Type:             0x1F5C, LT_SetAmbient
 *          Parent: 00000000, End: 00000AE0, Next: 00000AE4
 *          Debug start: 00000003, Debug end: 00000067
 *          Flags: Frame Ptr Present
 * 
 * (000AA0)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), r
 * (000AB0)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), g
 * (000AC0)  S_BPREL32: [00000010], Type:      T_UCHAR(0020), b
 * (000AD0)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), a
 * 
 * (000AE0) S_END
 */
void LT_SetAmbient()
{
	// TODO: LT_SetAmbient
}

/*
 * (000AE4) S_GPROC32: [0001:0008B02A], Cb: 00000066, Type:             0x1CA6, LT_fSetAmbient
 *          Parent: 00000000, End: 00000B9C, Next: 00000BA0
 *          Debug start: 00000006, Debug end: 00000062
 *          Flags: Frame Ptr Present
 * 
 * (000B1C)  S_BPREL32: [00000008], Type:     T_REAL32(0040), fr
 * (000B2C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), fg
 * (000B3C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), fb
 * (000B4C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), fa
 * (000B5C)  S_BPREL32: [FFFFFFF0], Type:      T_UCHAR(0020), g
 * (000B6C)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), r
 * (000B7C)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), b
 * (000B8C)  S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), a
 * 
 * (000B9C) S_END
 */
void LT_fSetAmbient()
{
	// TODO: LT_fSetAmbient
}

/*
 * (000BA0) S_GPROC32: [0001:0008B090], Cb: 0000008B, Type:             0x1F5E, LT_SetFog
 *          Parent: 00000000, End: 00000C6C, Next: 00000C70
 *          Debug start: 00000003, Debug end: 00000089
 *          Flags: Frame Ptr Present
 * 
 * (000BD4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), FogMode
 * (000BE8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), FogStart
 * (000C00)  S_BPREL32: [00000010], Type:     T_REAL32(0040), FogEnd
 * (000C14)  S_BPREL32: [00000014], Type:     T_REAL32(0040), FogDensity
 * (000C2C)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), r
 * (000C3C)  S_BPREL32: [0000001C], Type:      T_UCHAR(0020), g
 * (000C4C)  S_BPREL32: [00000020], Type:      T_UCHAR(0020), b
 * (000C5C)  S_BPREL32: [00000024], Type:      T_UCHAR(0020), a
 * 
 * (000C6C) S_END
 */
void LT_SetFog()
{
	// TODO: LT_SetFog
}

/*
 * (000C70) S_GPROC32: [0001:0008B11B], Cb: 00000076, Type:             0x1F60, LT_fSetFog
 *          Parent: 00000000, End: 00000D7C, Next: 00000D80
 *          Debug start: 00000006, Debug end: 00000072
 *          Flags: Frame Ptr Present
 * 
 * (000CA4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), FogMode
 * (000CB8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), FogStart
 * (000CD0)  S_BPREL32: [00000010], Type:     T_REAL32(0040), FogEnd
 * (000CE4)  S_BPREL32: [00000014], Type:     T_REAL32(0040), FogDensity
 * (000CFC)  S_BPREL32: [00000018], Type:     T_REAL32(0040), fr
 * (000D0C)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), fg
 * (000D1C)  S_BPREL32: [00000020], Type:     T_REAL32(0040), fb
 * (000D2C)  S_BPREL32: [00000024], Type:     T_REAL32(0040), fa
 * (000D3C)  S_BPREL32: [FFFFFFF0], Type:      T_UCHAR(0020), g
 * (000D4C)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), r
 * (000D5C)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), b
 * (000D6C)  S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), a
 * 
 * (000D7C) S_END
 */
void LT_fSetFog()
{
	// TODO: LT_fSetFog
}

/*
 * (000D80) S_GPROC32: [0001:0008B191], Cb: 0000010F, Type:             0x1001, LT_CreateBackground
 *          Parent: 00000000, End: 00000DD0, Next: 00000DD4
 *          Debug start: 00000004, Debug end: 0000010B
 *          Flags: Frame Ptr Present
 * 
 * (000DBC)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), ddrval
 * 
 * (000DD0) S_END
 */
void LT_CreateBackground()
{
	// TODO: LT_CreateBackground
}

/*
 * (000DD4) S_GPROC32: [0001:0008B2A0], Cb: 00000005, Type:             0x1001, LT_DestroyBackground
 *          Parent: 00000000, End: 00000E10, Next: 00000E14
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (000E10) S_END
 */
void LT_DestroyBackground()
{
	// TODO: LT_DestroyBackground
}

/*
 * (000E14) S_GPROC32: [0001:0008B2A5], Cb: 000000E3, Type:             0x1F62, LT_SetBackground
 *          Parent: 00000000, End: 00000EF4, Next: 00000EF8
 *          Debug start: 00000006, Debug end: 000000DF
 *          Flags: Frame Ptr Present
 * 
 * (000E4C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Ctrl
 * (000E60)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), r
 * (000E70)  S_BPREL32: [00000010], Type:      T_UCHAR(0020), g
 * (000E80)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), b
 * (000E90)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), a
 * (000EA0)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), fa
 * (000EB0)  S_BPREL32: [FFFFFFF0], Type:       T_LONG(0012), ddrval
 * (000EC4)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), fg
 * (000ED4)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), fr
 * (000EE4)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), fb
 * 
 * (000EF4) S_END
 */
void LT_SetBackground()
{
	// TODO: LT_SetBackground
}

/*
 * (000EF8) S_GPROC32: [0001:0008B388], Cb: 000000AB, Type:             0x1F64, LT_fSetBackground
 *          Parent: 00000000, End: 00000F9C, Next: 00000000
 *          Debug start: 00000004, Debug end: 000000A7
 *          Flags: Frame Ptr Present
 * 
 * (000F34)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Ctrl
 * (000F48)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), fr
 * (000F58)  S_BPREL32: [00000010], Type:     T_REAL32(0040), fg
 * (000F68)  S_BPREL32: [00000014], Type:     T_REAL32(0040), fb
 * (000F78)  S_BPREL32: [00000018], Type:     T_REAL32(0040), fa
 * (000F88)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), ddrval
 * 
 * (000F9C) S_END
 */
void LT_fSetBackground()
{
	// TODO: LT_fSetBackground
}

