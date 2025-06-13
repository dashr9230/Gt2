
// File: C:\CodePrj\Gt2\Game\src\Adrian\replay.c

/*
 * ModName: .\Debug\replay.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\replay.obj
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
 * (00115C) S_GDATA32: [0003:000769B0], Type:       T_INT4(0074), REPLAY_Mode
 * (001178) S_LDATA32: [0003:000769A4], Type:             0x1834, ReplayFH
 * (001190) S_LDATA32: [0003:000769A8], Type:             0x1404, CopyObj
 * (0011A8) S_LDATA32: [0003:000769AC], Type:       T_INT4(0074), REPLAY_Status
 * (0011C4) S_LDATA32: [0003:00075F90], Type:             0x1B5A, RHeader
 * (0011DC) S_LDATA32: [0003:000769B4], Type:             0x1B51, lpReplayData
 * (0011F8) S_LDATA32: [0003:00075F10], Type:             0x1B5F, StoredFuncs
 * (001214) S_LDATA32: [0003:000769B8], Type:     T_REAL32(0040), ReplayPos
 * (00122C) S_LDATA32: [0003:000769BC], Type:      T_ULONG(0022), BufferPos
 * (001244) S_LDATA32: [0003:000769A0], Type:      T_ULONG(0022), SizeOfReplayTick
 * (001264) S_LDATA32: [0003:000769C0], Type:       T_INT4(0074), PlaybackEnable
 * (001284) S_LDATA32: [0003:00010CD0], Type:     T_REAL32(0040), ReplayPlaySpeed
 * (0012A4) S_LDATA32: [0003:00010CD4], Type:       T_LONG(0012), BlockLoadPos
 * (0012C0) S_GDATA32: [0003:00992AC0], Type:             0x1820, Drivers
 * (0012D8) S_GDATA32: [0003:00C964C8], Type:      T_ULONG(0022), PauseFlag
 * (0012F0) S_GDATA32: [0003:00990BE0], Type:             0x1837, Teams
 * (001304) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (00131C) S_LDATA32: [0003:000769C4], Type:             0x1834, CopySrc
 * (001334) S_LDATA32: [0003:000769C8], Type:             0x1834, CopyDest
 * (00134C) S_LDATA32: [0003:000769CC], Type:      T_ULONG(0022), CopyFileLength
 * (00136C) S_LDATA32: [0003:000769D0], Type:      T_ULONG(0022), CopyLength
 * (001388) S_LDATA32: [0003:000769D4], Type:   T_32PUCHAR(0420), CopyBuffer
 * (0013A4) S_GDATA32: [0003:0097BA00], Type:             0x1B60, REPLAY_SlotDirectory
 * (0013C8) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (0013E4) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 */

/*
 * (00008C) S_GPROC32: [0001:00031BB0], Cb: 00000005, Type:             0x1001, REPLAY_End
 *          Parent: 00000000, End: 000000C0, Next: 000000C4
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000C0) S_END
 */
void REPLAY_End()
{
	// TODO: REPLAY_End
}

/*
 * (0000C4) S_GPROC32: [0001:00031BB5], Cb: 00000042, Type:             0x1001, REPLAY_Close
 *          Parent: 00000000, End: 000000F8, Next: 000000FC
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (0000F8) S_END
 */
void REPLAY_Close()
{
	// TODO: REPLAY_Close
}

/*
 * (0000FC) S_LPROC32: [0001:00031BF7], Cb: 0000008E, Type:             0x1001, REPLAY_FileClose
 *          Parent: 00000000, End: 00000134, Next: 00000138
 *          Debug start: 00000003, Debug end: 0000008C
 *          Flags: Frame Ptr Present
 * 
 * (000134) S_END
 */
void REPLAY_FileClose()
{
	// TODO: REPLAY_FileClose
}

/*
 * (000138) S_LPROC32: [0001:00031C85], Cb: 00000058, Type:             0x16A1, REPLAY_FileUpdate
 *          Parent: 00000000, End: 000001C0, Next: 000001C4
 *          Debug start: 00000004, Debug end: 00000054
 *          Flags: Frame Ptr Present
 * 
 * (000174)  S_BPREL32: [00000008], Type:      T_ULONG(0022), CachedData
 * 
 * (00018C)  S_BLOCK32: [0001:00031C98], Cb: 00000041, (none)
 *           Parent: 00000138, End: 000001BC
 * 
 * (0001A4)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), NumWritten
 * 
 * (0001BC)  S_END
 * 
 * (0001C0) S_END
 */
void REPLAY_FileUpdate()
{
	// TODO: REPLAY_FileUpdate
}

/*
 * (0001C4) S_GPROC32: [0001:00031CDD], Cb: 000001F1, Type:             0x1001, REPLAY_Record
 *          Parent: 00000000, End: 000002CC, Next: 000002D0
 *          Debug start: 00000006, Debug end: 000001ED
 *          Flags: Frame Ptr Present
 * 
 * (0001FC)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000214)  S_BLOCK32: [0001:00031CF6], Cb: 000001D4, (none)
 *           Parent: 000001C4, End: 000002C8
 * 
 * (00022C)   S_BPREL32: [FFFFFFF4], Type:             0x1A86, CarManager
 * (000244)   S_BPREL32: [FFFFFFF8], Type:             0x1404, CM_Obj
 * 
 * (000258)   S_BLOCK32: [0001:00031D48], Cb: 00000173, (none)
 *            Parent: 00000214, End: 000002C4
 * 
 * (000270)    S_BPREL32: [FFFFFFEC], Type:             0x1404, Car
 * (000280)    S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), CIndex
 * 
 * (000294)    S_BLOCK32: [0001:00031DDF], Cb: 00000083, (none)
 *             Parent: 00000258, End: 000002C0
 * 
 * (0002AC)     S_BPREL32: [FFFFFFE8], Type:             0x1A9D, ThisCar
 * 
 * (0002C0)    S_END
 * 
 * (0002C4)   S_END
 * 
 * (0002C8)  S_END
 * 
 * (0002CC) S_END
 */
void REPLAY_Record()
{
	// TODO: REPLAY_Record
}

/*
 * (0002D0) S_LPROC32: [0001:00031ECE], Cb: 000000B3, Type:             0x1B45, REPLAY_FileOpen
 *          Parent: 00000000, End: 00000360, Next: 00000364
 *          Debug start: 00000009, Debug end: 000000AF
 *          Flags: Frame Ptr Present
 * 
 * (000308)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (00031C)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Name
 * 
 * (000330)  S_BLOCK32: [0001:00031EE4], Cb: 00000088, (none)
 *           Parent: 000002D0, End: 0000035C
 * 
 * (000348)   S_BPREL32: [FFFFFE00], Type:             0x153F, Buffer
 * 
 * (00035C)  S_END
 * 
 * (000360) S_END
 */
void REPLAY_FileOpen()
{
	// TODO: REPLAY_FileOpen
}

/*
 * (000364) S_GPROC32: [0001:00031F81], Cb: 000000F0, Type:             0x1B45, REPLAY_Load
 *          Parent: 00000000, End: 000003D4, Next: 000003D8
 *          Debug start: 00000009, Debug end: 000000EC
 *          Flags: Frame Ptr Present
 * 
 * (000398)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (0003AC)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), FName
 * (0003C0)  S_BPREL32: [FFFFFE00], Type:             0x153F, Name
 * 
 * (0003D4) S_END
 */
void REPLAY_Load()
{
	// TODO: REPLAY_Load
}

/*
 * (0003D8) S_GPROC32: [0001:00032071], Cb: 00000282, Type:             0x1B47, REPLAY_Playback
 *          Parent: 00000000, End: 000004EC, Next: 000004F0
 *          Debug start: 00000009, Debug end: 0000027E
 *          Flags: Frame Ptr Present
 * 
 * (000410)  S_BPREL32: [00000008], Type:       T_LONG(0012), Slot
 * (000424)  S_BPREL32: [0000000C], Type:             0x1A9F, RaceSetup
 * (00043C)  S_BPREL32: [00000010], Type:       T_INT4(0074), ReplayType
 * (000454)  S_BPREL32: [FFFFFDF4], Type:             0x153F, RName
 * (000468)  S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * (000480)  S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), b
 * (000490)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (0004A0)  S_BLOCK32: [0001:0003217E], Cb: 000000F5, (none)
 *           Parent: 000003D8, End: 000004E8
 * 
 * (0004B8)   S_BPREL32: [FFFFFDEC], Type:      T_ULONG(0022), DriverIndex
 * (0004D0)   S_BPREL32: [FFFFFDF0], Type:      T_ULONG(0022), TeamIndex
 * 
 * (0004E8)  S_END
 * 
 * (0004EC) S_END
 */
void REPLAY_Playback()
{
	// TODO: REPLAY_Playback
}

/*
 * (0004F0) S_GPROC32: [0001:000322F3], Cb: 000000C1, Type:             0x1001, REPLAY_PlaybackInstant
 *          Parent: 00000000, End: 0000056C, Next: 00000570
 *          Debug start: 00000006, Debug end: 000000BD
 *          Flags: Frame Ptr Present
 * 
 * (000530)  S_BPREL32: [FFFFFFF4], Type:             0x1404, Car
 * (000540)  S_BPREL32: [FFFFFFF8], Type:             0x1404, Time
 * (000554)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (00056C) S_END
 */
void REPLAY_PlaybackInstant()
{
	// TODO: REPLAY_PlaybackInstant
}

/*
 * (000570) S_GPROC32: [0001:000323B4], Cb: 000000A8, Type:             0x1001, REPLAY_PlaybackHook
 *          Parent: 00000000, End: 00000618, Next: 0000061C
 *          Debug start: 00000006, Debug end: 000000A4
 *          Flags: Frame Ptr Present
 * 
 * (0005AC)  S_BLOCK32: [0001:000323E6], Cb: 00000072, (none)
 *           Parent: 00000570, End: 00000614
 * 
 * (0005C4)   S_BPREL32: [FFFFFFF0], Type:             0x1404, Car
 * (0005D4)   S_BPREL32: [FFFFFFF4], Type:             0x1404, Time
 * (0005E8)   S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), CurCar
 * (0005FC)   S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000614)  S_END
 * 
 * (000618) S_END
 */
void REPLAY_PlaybackHook()
{
	// TODO: REPLAY_PlaybackHook
}

/*
 * (00061C) S_GPROC32: [0001:0003245C], Cb: 0000001D, Type:             0x1001, REPLAY_Stop
 *          Parent: 00000000, End: 00000650, Next: 00000654
 *          Debug start: 00000003, Debug end: 0000001B
 *          Flags: Frame Ptr Present
 * 
 * (000650) S_END
 */
void REPLAY_Stop()
{
	// TODO: REPLAY_Stop
}

/*
 * (000654) S_GPROC32: [0001:00032479], Cb: 0000000A, Type:             0x1B48, REPLAY_Save
 *          Parent: 00000000, End: 0000069C, Next: 000006A0
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (000688)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), FName
 * 
 * (00069C) S_END
 */
void REPLAY_Save()
{
	// TODO: REPLAY_Save
}

/*
 * (0006A0) S_LPROC32: [0001:00032483], Cb: 000000F2, Type:             0x16A1, REPLAY_PlayUpdate
 *          Parent: 00000000, End: 00000730, Next: 00000734
 *          Debug start: 00000006, Debug end: 000000EE
 *          Flags: Frame Ptr Present
 * 
 * (0006DC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), CurPos
 * (0006F0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), FPos
 * (000704)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), CPos
 * (000718)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), AmountLeft
 * 
 * (000730) S_END
 */
void REPLAY_PlayUpdate()
{
	// TODO: REPLAY_PlayUpdate
}

/*
 * (000734) S_GPROC32: [0001:00032575], Cb: 00000116, Type:             0x17C9, CON_Replay
 *          Parent: 00000000, End: 00000790, Next: 00000794
 *          Debug start: 00000004, Debug end: 00000112
 *          Flags: Frame Ptr Present
 * 
 * (000768)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (00077C)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000790) S_END
 */
void CON_Replay()
{
	// TODO: CON_Replay
}

/*
 * (000794) S_GPROC32: [0001:0003268B], Cb: 00000078, Type:             0x1001, REPLAY_Init
 *          Parent: 00000000, End: 000007C8, Next: 000007CC
 *          Debug start: 00000003, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (0007C8) S_END
 */
void REPLAY_Init()
{
	// TODO: REPLAY_Init
}

/*
 * (0007CC) S_GPROC32: [0001:00032703], Cb: 00000039, Type:             0x1001, REPLAY_Shutdown
 *          Parent: 00000000, End: 00000804, Next: 00000808
 *          Debug start: 00000003, Debug end: 00000037
 *          Flags: Frame Ptr Present
 * 
 * (000804) S_END
 */
void REPLAY_Shutdown()
{
	// TODO: REPLAY_Shutdown
}

/*
 * (000808) S_GPROC32: [0001:0003273C], Cb: 0000009C, Type:             0x16A5, REPLAY_Report
 *          Parent: 00000000, End: 000008A0, Next: 000008A4
 *          Debug start: 00000006, Debug end: 00000088
 *          Flags: Frame Ptr Present
 * 
 * (000840)  S_LDATA32: [0001:000327C8], Type:     T_NOTYPE(0000), (none)
 * (000850)  S_LABEL32: [0001:00032785], $L80264
 * (000864)  S_LABEL32: [0001:00032794], $L80266
 * (000878)  S_LABEL32: [0001:000327A3], $L80268
 * (00088C)  S_LABEL32: [0001:000327B2], $L80270
 * 
 * (0008A0) S_END
 */
void REPLAY_Report()
{
	// TODO: REPLAY_Report
}

/*
 * (0008A4) S_GPROC32: [0001:000327D8], Cb: 00000A9A, Type:             0x1408, REPLAY_Handler
 *          Parent: 00000000, End: 00000B90, Next: 00000B94
 *          Debug start: 00000009, Debug end: 00000A96
 *          Flags: Frame Ptr Present
 * 
 * (0008DC)  S_BPREL32: [00000008], Type:             0x1404, RaceObj
 * 
 * (0008F0)  S_BLOCK32: [0001:000327F9], Cb: 00000A75, (none)
 *           Parent: 000008A4, End: 00000B8C
 * 
 * (000908)   S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000920)   S_BLOCK32: [0001:00032848], Cb: 000002F9, (none)
 *            Parent: 000008F0, End: 00000A14
 * 
 * (000938)    S_BPREL32: [FFFFFFE8], Type:             0x1404, Car
 * (000948)    S_BPREL32: [FFFFFFEC], Type:             0x1A83, Time
 * (00095C)    S_BPREL32: [FFFFFFF0], Type:             0x1B51, lpReplayDataTick
 * (00097C)    S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), CIndex
 * (000990)    S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), a
 * 
 * (0009A0)    S_BLOCK32: [0001:00032896], Cb: 000001E3, (none)
 *             Parent: 00000920, End: 00000A10
 * 
 * (0009B8)     S_BPREL32: [FFFFFFE0], Type:             0x1A9D, ThisCar
 * (0009CC)     S_BPREL32: [FFFFFFE4], Type:             0x1AA3, vDat
 * 
 * (0009E0)     S_BLOCK32: [0001:000329AD], Cb: 000000BE, (none)
 *              Parent: 000009A0, End: 00000A0C
 * 
 * (0009F8)      S_BPREL32: [FFFFFFDC], Type:             0x1AA8, SArm
 * 
 * (000A0C)     S_END
 * 
 * (000A10)    S_END
 * 
 * (000A14)   S_END
 * 
 * (000A18)   S_BLOCK32: [0001:00032B6C], Cb: 00000702, (none)
 *            Parent: 000008F0, End: 00000B88
 * 
 * (000A30)    S_BPREL32: [FFFFFFBC], Type:             0x1404, Car
 * (000A40)    S_BPREL32: [FFFFFFC0], Type:             0x1A83, Time
 * (000A54)    S_BPREL32: [FFFFFFC4], Type:             0x1B51, lpReplayDataTick
 * (000A74)    S_BPREL32: [FFFFFFC8], Type:      T_ULONG(0022), CIndex
 * (000A88)    S_BPREL32: [FFFFFFCC], Type:             0x1404, Kids
 * (000A9C)    S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), CurBufferIndex
 * (000AB8)    S_BPREL32: [FFFFFFD4], Type:      T_ULONG(0022), a
 * (000AC8)    S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), ReplayOffset
 * 
 * (000AE4)    S_BLOCK32: [0001:00032BF3], Cb: 00000358, (none)
 *             Parent: 00000A18, End: 00000B84
 * 
 * (000AFC)     S_BPREL32: [FFFFFFA8], Type:             0x1A9D, ThisCar
 * (000B10)     S_BPREL32: [FFFFFFAC], Type:     T_REAL32(0040), dtz
 * (000B20)     S_BPREL32: [FFFFFFB0], Type:     T_REAL32(0040), dty
 * (000B30)     S_BPREL32: [FFFFFFB4], Type:             0x1AA3, vDat
 * (000B44)     S_BPREL32: [FFFFFFB8], Type:     T_REAL32(0040), dtx
 * 
 * (000B54)     S_BLOCK32: [0001:00032E2F], Cb: 000000CA, (none)
 *              Parent: 00000AE4, End: 00000B80
 * 
 * (000B6C)      S_BPREL32: [FFFFFFA4], Type:             0x1AA8, SArm
 * 
 * (000B80)     S_END
 * 
 * (000B84)    S_END
 * 
 * (000B88)   S_END
 * 
 * (000B8C)  S_END
 * 
 * (000B90) S_END
 */
void REPLAY_Handler()
{
	// TODO: REPLAY_Handler
}

/*
 * (000B94) S_LPROC32: [0001:00033272], Cb: 00000007, Type:             0x16A5, REPLAY_AbortCheck
 *          Parent: 00000000, End: 00000BD0, Next: 00000BD4
 *          Debug start: 00000003, Debug end: 00000005
 *          Flags: Frame Ptr Present
 * 
 * (000BD0) S_END
 */
void REPLAY_AbortCheck()
{
	// TODO: REPLAY_AbortCheck
}

/*
 * (000BD4) S_GPROC32: [0001:00033279], Cb: 00000029, Type:             0x16A5, REPLAY_IsPlaying
 *          Parent: 00000000, End: 00000C0C, Next: 00000C10
 *          Debug start: 00000003, Debug end: 00000027
 *          Flags: Frame Ptr Present
 * 
 * (000C0C) S_END
 */
void REPLAY_IsPlaying()
{
	// TODO: REPLAY_IsPlaying
}

/*
 * (000C10) S_GPROC32: [0001:000332A2], Cb: 00000020, Type:             0x16A5, REPLAY_IsRecording
 *          Parent: 00000000, End: 00000C4C, Next: 00000C50
 *          Debug start: 00000003, Debug end: 0000001E
 *          Flags: Frame Ptr Present
 * 
 * (000C4C) S_END
 */
void REPLAY_IsRecording()
{
	// TODO: REPLAY_IsRecording
}

/*
 * (000C50) S_GPROC32: [0001:000332C2], Cb: 0000003F, Type:             0x141A, REPLAY_SetPlaybackPosition
 *          Parent: 00000000, End: 00000CAC, Next: 00000CB0
 *          Debug start: 00000003, Debug end: 0000003D
 *          Flags: Frame Ptr Present
 * 
 * (000C94)  S_BPREL32: [00000008], Type:       T_LONG(0012), NewPosition
 * 
 * (000CAC) S_END
 */
void REPLAY_SetPlaybackPosition()
{
	// TODO: REPLAY_SetPlaybackPosition
}

/*
 * (000CB0) S_GPROC32: [0001:00033301], Cb: 0000001E, Type:             0x1B52, REPLAY_GetPlaybackPostion
 *          Parent: 00000000, End: 00000CF4, Next: 00000CF8
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (000CF4) S_END
 */
void REPLAY_GetPlaybackPostion()
{
	// TODO: REPLAY_GetPlaybackPostion
}

/*
 * (000CF8) S_GPROC32: [0001:0003331F], Cb: 00000016, Type:             0x1B53, REPLAY_SetPlaybackSpeed
 *          Parent: 00000000, End: 00000D50, Next: 00000D54
 *          Debug start: 00000003, Debug end: 00000014
 *          Flags: Frame Ptr Present
 * 
 * (000D38)  S_BPREL32: [00000008], Type:     T_REAL32(0040), NewSpeed
 * 
 * (000D50) S_END
 */
void REPLAY_SetPlaybackSpeed()
{
	// TODO: REPLAY_SetPlaybackSpeed
}

/*
 * (000D54) S_GPROC32: [0001:00033335], Cb: 0000001C, Type:             0x1B54, REPLAY_GetPlaybackSpeed
 *          Parent: 00000000, End: 00000D94, Next: 00000D98
 *          Debug start: 00000003, Debug end: 0000001A
 *          Flags: Frame Ptr Present
 * 
 * (000D94) S_END
 */
void REPLAY_GetPlaybackSpeed()
{
	// TODO: REPLAY_GetPlaybackSpeed
}

/*
 * (000D98) S_GPROC32: [0001:00033351], Cb: 00000167, Type:             0x1B55, REPLAY_CopyToSlot
 *          Parent: 00000000, End: 00000E00, Next: 00000E04
 *          Debug start: 00000009, Debug end: 00000163
 *          Flags: Frame Ptr Present
 * 
 * (000DD4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Slot
 * (000DE8)  S_BPREL32: [FFFFFE00], Type:             0x153F, DestName
 * 
 * (000E00) S_END
 */
void REPLAY_CopyToSlot()
{
	// TODO: REPLAY_CopyToSlot
}

/*
 * (000E04) S_LPROC32: [0001:000334B8], Cb: 00000116, Type:             0x1408, CopyHandler
 *          Parent: 00000000, End: 00000E94, Next: 00000E98
 *          Debug start: 00000006, Debug end: 00000112
 *          Flags: Frame Ptr Present
 * 
 * (000E38)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (000E48)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), Amount2Copy
 * 
 * (000E60)  S_BLOCK32: [0001:00033544], Cb: 00000086, (none)
 *           Parent: 00000E04, End: 00000E90
 * 
 * (000E78)   S_BPREL32: [FFFFFFF8], Type:             0x1B56, ObjBucket
 * 
 * (000E90)  S_END
 * 
 * (000E94) S_END
 */
void CopyHandler()
{
	// TODO: CopyHandler
}

/*
 * (000E98) S_GPROC32: [0001:000335CE], Cb: 00000017, Type:             0x16A5, REPLAY_IsCopyComplete
 *          Parent: 00000000, End: 00000ED8, Next: 00000EDC
 *          Debug start: 00000003, Debug end: 00000015
 *          Flags: Frame Ptr Present
 * 
 * (000ED8) S_END
 */
void REPLAY_IsCopyComplete()
{
	// TODO: REPLAY_IsCopyComplete
}

/*
 * (000EDC) S_GPROC32: [0001:000335E5], Cb: 00000053, Type:             0x1B54, REPLAY_CopyProgress
 *          Parent: 00000000, End: 00000F30, Next: 00000F34
 *          Debug start: 00000006, Debug end: 0000004F
 *          Flags: Frame Ptr Present
 * 
 * (000F18)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), Percentage
 * 
 * (000F30) S_END
 */
void REPLAY_CopyProgress()
{
	// TODO: REPLAY_CopyProgress
}

/*
 * (000F34) S_GPROC32: [0001:00033638], Cb: 00000075, Type:             0x1B45, REPLAY_GetSlotNameFromFile
 *          Parent: 00000000, End: 00000FD0, Next: 00000FD4
 *          Debug start: 00000009, Debug end: 00000071
 *          Flags: Frame Ptr Present
 * 
 * (000F78)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Filename
 * (000F90)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Slotname
 * (000FA8)  S_BPREL32: [FFFFF5EC], Type:             0x1834, f
 * (000FB8)  S_BPREL32: [FFFFF5F0], Type:             0x1B5A, FileHeader
 * 
 * (000FD0) S_END
 */
void REPLAY_GetSlotNameFromFile()
{
	// TODO: REPLAY_GetSlotNameFromFile
}

/*
 * (000FD4) S_GPROC32: [0001:000336AD], Cb: 000000DC, Type:             0x1B5B, REPLAY_BuildDirectory
 *          Parent: 00000000, End: 00001070, Next: 00001074
 *          Debug start: 0000000A, Debug end: 000000D7
 *          Flags: Frame Ptr Present
 * 
 * (001014)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), UnusedTextLabel
 * (001030)  S_BPREL32: [FFFFFF7C], Type:             0x180C, Slotname
 * (001048)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), i
 * (001058)  S_BPREL32: [FFFFFFC0], Type:             0x180C, Filename
 * 
 * (001070) S_END
 */
void REPLAY_BuildDirectory()
{
	// TODO: REPLAY_BuildDirectory
}

/*
 * (001074) S_GPROC32: [0001:00033789], Cb: 00000023, Type:             0x1B5C, REPLAY_GetSlotName
 *          Parent: 00000000, End: 000010C4, Next: 000010C8
 *          Debug start: 00000003, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (0010B0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Slot
 * 
 * (0010C4) S_END
 */
void REPLAY_GetSlotName()
{
	// TODO: REPLAY_GetSlotName
}

/*
 * (0010C8) S_GPROC32: [0001:000337AC], Cb: 000000B4, Type:             0x1B5E, REPLAY_SetSlotName
 *          Parent: 00000000, End: 00001158, Next: 00000000
 *          Debug start: 00000006, Debug end: 000000B0
 *          Flags: Frame Ptr Present
 * 
 * (001104)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Slot
 * (001118)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Slotname
 * (001130)  S_BPREL32: [FFFFFFBC], Type:             0x180C, Filename
 * (001148)  S_BPREL32: [FFFFFFFC], Type:             0x1834, f
 * 
 * (001158) S_END
 */
void REPLAY_SetSlotName()
{
	// TODO: REPLAY_SetSlotName
}

