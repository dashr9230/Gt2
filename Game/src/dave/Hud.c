
// File: C:\CodePrj\Gt2\Game\src\dave\Hud.c

/*
 * ModName: .\Debug\Hud.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\Hud.obj
 * 
 * (00003C) S_COMPILE:
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
 * (0004F8) S_GDATA32: [0003:0097F278], Type:             0x1D16, HudInfo
 * (000510) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (00052C) S_GDATA32: [0003:0097F280], Type:             0x1C41, GAMETEXT
 * (000544) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (00055C) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000574) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 */

/*
 * (000088) S_GPROC32: [0001:0000D920], Cb: 0000001E, Type:             0x1001, HUD_Allocate
 *          Parent: 00000000, End: 000000BC, Next: 000000C0
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (0000BC) S_END
 */
void HUD_Allocate()
{
	// TODO: HUD_Allocate
}

/*
 * (0000C0) S_GPROC32: [0001:0000D93E], Cb: 00000027, Type:             0x1001, HUD_Release
 *          Parent: 00000000, End: 000000F4, Next: 000000F8
 *          Debug start: 00000003, Debug end: 00000025
 *          Flags: Frame Ptr Present
 * 
 * (0000F4) S_END
 */
void HUD_Release()
{
	// TODO: HUD_Release
}

/*
 * (0000F8) S_GPROC32: [0001:0000D965], Cb: 00000376, Type:             0x13EF, HUD_Car_Draw
 *          Parent: 00000000, End: 000002CC, Next: 000002D0
 *          Debug start: 00000006, Debug end: 00000372
 *          Flags: Frame Ptr Present
 * 
 * (00012C)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (000140)  S_BPREL32: [FFFFFFB8], Type:     T_REAL32(0040), sfx
 * (000150)  S_BPREL32: [FFFFFFBC], Type:             0x1A86, CarManager
 * (000168)  S_BPREL32: [FFFFFFC0], Type:             0x1A83, Time
 * (00017C)  S_BPREL32: [FFFFFFC4], Type:             0x1B32, Director
 * (000194)  S_BPREL32: [FFFFFFC8], Type:             0x1A9D, ThisCar
 * (0001A8)  S_BPREL32: [FFFFFFCC], Type:             0x140A, Cam
 * (0001B8)  S_BPREL32: [FFFFFFD0], Type:             0x1AA2, RaceControl
 * (0001D0)  S_BPREL32: [FFFFFFD4], Type:             0x1CAB, PauseMenu
 * (0001E8)  S_BPREL32: [FFFFFFD8], Type:             0x1C3E, RaceOverMenu
 * (000204)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), VPy
 * (000214)  S_BPREL32: [FFFFFFE0], Type:             0x1404, Focus
 * (000228)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), VPx
 * (000238)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), VPh
 * (000248)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), VPw
 * (000258)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), soy
 * (000268)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), sox
 * (000278)  S_BPREL32: [FFFFFFF8], Type:             0x1404, CM_Obj
 * (00028C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), sfy
 * 
 * (00029C)  S_BLOCK32: [0001:0000DAF3], Cb: 00000042, (none)
 *           Parent: 000000F8, End: 000002C8
 * 
 * (0002B4)   S_BPREL32: [FFFFFFB4], Type:             0x1A7E, lpVPM
 * 
 * (0002C8)  S_END
 * 
 * (0002CC) S_END
 */
void HUD_Car_Draw()
{
	// TODO: HUD_Car_Draw
}

/*
 * (0002D0) S_GPROC32: [0001:0000DCDB], Cb: 00000143, Type:             0x13EF, HUD_TV_Draw
 *          Parent: 00000000, End: 000003C4, Next: 000003C8
 *          Debug start: 00000006, Debug end: 0000013F
 *          Flags: Frame Ptr Present
 * 
 * (000304)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (000318)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), sfx
 * (000328)  S_BPREL32: [FFFFFFDC], Type:             0x1A83, Time
 * (00033C)  S_BPREL32: [FFFFFFE0], Type:             0x1AA2, RaceControl
 * (000354)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), VPy
 * (000364)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), VPx
 * (000374)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), VPh
 * (000384)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), VPw
 * (000394)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), soy
 * (0003A4)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), sox
 * (0003B4)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), sfy
 * 
 * (0003C4) S_END
 */
void HUD_TV_Draw()
{
	// TODO: HUD_TV_Draw
}

/*
 * (0003C8) S_GPROC32: [0001:0000DE1E], Cb: 00000190, Type:             0x13EF, HUD_Overlay_Draw
 *          Parent: 00000000, End: 000004F4, Next: 00000590
 *          Debug start: 00000006, Debug end: 0000018C
 *          Flags: Frame Ptr Present
 * 
 * (000400)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (000414)  S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), sfx
 * (000424)  S_BPREL32: [FFFFFFD4], Type:             0x1A83, Time
 * (000438)  S_BPREL32: [FFFFFFD8], Type:             0x1AA2, RaceControl
 * (000450)  S_BPREL32: [FFFFFFDC], Type:             0x1CAB, PauseMenu
 * (000468)  S_BPREL32: [FFFFFFE0], Type:             0x1C3E, RaceOverMenu
 * (000484)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), VPy
 * (000494)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), VPx
 * (0004A4)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), VPh
 * (0004B4)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), VPw
 * (0004C4)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), soy
 * (0004D4)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), sox
 * (0004E4)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), sfy
 * 
 * (0004F4) S_END
 */
void HUD_Overlay_Draw()
{
	// TODO: HUD_Overlay_Draw
}

/*
 * (000590) S_GPROC32: [0001:0000DFB0], Cb: 00000047, Type:             0x1001, RSTATES_BeginScene
 *          Parent: 00000000, End: 000005CC, Next: 000005D0
 *          Debug start: 00000003, Debug end: 00000045
 *          Flags: Frame Ptr Present
 * 
 * (0005CC) S_END
 */
void RSTATES_BeginScene()
{
	// TODO: RSTATES_BeginScene
}

/*
 * (0005D0) S_GPROC32: [0001:0000E000], Cb: 00000047, Type:             0x1001, RSTATES_EndScene
 *          Parent: 00000000, End: 00000608, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000045
 *          Flags: Frame Ptr Present
 * 
 * (000608) S_END
 */
void RSTATES_EndScene()
{
	// TODO: RSTATES_EndScene
}

