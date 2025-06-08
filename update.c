
// Original file: C:\CodePrj\Gt2\Engine\src\update.c

/*
 * ModName: .\Debug\update.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\update.obj
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
 * (00008C) S_GPROC32: [0001:00091FA0], Cb: 00000005, Type:             0x1A3C, ShowTime
 *          Parent: 00000000, End: 000000D4, Next: 000000D8
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), TimeMode
 * 
 * (0000D4) S_END
 * 
 * (0000D8) S_GPROC32: [0001:00091FA5], Cb: 00000036, Type:             0x1001, UpdateGame
 *          Parent: 00000000, End: 0000010C, Next: 00000110
 *          Debug start: 00000003, Debug end: 00000034
 *          Flags: Frame Ptr Present
 * 
 * (00010C) S_END
 * 
 * (000110) S_GPROC32: [0001:00091FDB], Cb: 000001E8, Type:             0x1EDB, GameServer
 *          Parent: 00000000, End: 000001B4, Next: 000001B8
 *          Debug start: 00000006, Debug end: 000001E4
 *          Flags: Frame Ptr Present
 * 
 * (000144)  S_BPREL32: [00000008], Type:       T_INT4(0074), RunOneFrame
 * (00015C)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), WritePosOnEntry
 * (000178)  S_BPREL32: [FFFFFFF4], Type:       T_LONG(0012), MaxDone
 * (00018C)  S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), UpdatesDone
 * (0001A4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0001B4) S_END
 * 
 * (0001B8) S_GPROC32: [0001:000921C3], Cb: 000000A3, Type:             0x1001, UpdateDisplay
 *          Parent: 00000000, End: 000001F0, Next: 000001F4
 *          Debug start: 00000003, Debug end: 000000A1
 *          Flags: Frame Ptr Present
 * 
 * (0001F0) S_END
 * 
 * (0001F4) S_GPROC32: [0001:00092266], Cb: 00000052, Type:             0x1001, TimerFunction
 *          Parent: 00000000, End: 0000022C, Next: 00000230
 *          Debug start: 00000003, Debug end: 00000050
 *          Flags: Frame Ptr Present
 * 
 * (00022C) S_END
 * 
 * (000230) S_GPROC32: [0001:000922B8], Cb: 0000003D, Type:             0x1715, TimerHandler
 *          Parent: 00000000, End: 000002DC, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000039
 *          Flags: Frame Ptr Present
 * 
 * (000264)  S_BPREL32: [00000008], Type:      T_UINT4(0075), wTimerID
 * (00027C)  S_BPREL32: [0000000C], Type:      T_UINT4(0075), msg
 * (00028C)  S_BPREL32: [00000010], Type:      T_ULONG(0022), dwUser
 * (0002A0)  S_BPREL32: [00000014], Type:      T_ULONG(0022), dw1
 * (0002B0)  S_BPREL32: [00000018], Type:      T_ULONG(0022), dw2
 * (0002C0)  S_LDATA32: [0003:00070414], Type:      T_UCHAR(0020), IntRunning
 * 
 * (0002DC) S_END
 * 
 * (0002E0) S_GDATA32: [0003:00C6E4C0], Type:             0x1EDD, STK_Buffer
 * (0002FC) S_GDATA32: [0003:00C31A60], Type:             0x1A1E, Jstk
 * (000310) S_GDATA32: [0003:00C31CE0], Type:             0x1C04, KEY_Buffer
 * (00032C) S_GDATA32: [0003:0093175C], Type:      T_ULONG(0022), JOY_WritePos
 * (000348) S_GDATA32: [0003:00931760], Type:      T_ULONG(0022), JOY_ReadPos
 * (000364) S_GDATA32: [0003:00931764], Type:      T_UCHAR(0020), JOY_ReadEnable
 * (000384) S_GDATA32: [0003:00931768], Type:       T_INT4(0074), GameServerLoadMode
 * (0003A8) S_GDATA32: [0003:00C440E0], Type:             0x1A20, Key
 * (0003BC) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (0003D8) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 * (0003F4) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (00040C) S_GDATA32: [0003:01245320], Type:             0x1EE0, UserInputDevice
 * (00042C) S_GDATA32: [0003:00C9A960], Type:             0x1C06, UsedScreensHead
 * (00044C) S_GDATA32: [0003:00C30FB8], Type:             0x102A, hWndMain
 * (000464) S_GDATA32: [0003:00931780], Type:      T_ULONG(0022), SystemActive
 * (000480) S_GDATA32: [0003:0121EFC0], Type:             0x1A2B, Mouse
 * (000494) S_GDATA32: [0003:0091ED90], Type:             0x1418, GameUpdateCallBack
 * (0004B8) S_GDATA32: [0003:00C964C8], Type:      T_ULONG(0022), PauseFlag
 * (0004D0) S_GDATA32: [0003:00931794], Type:      T_ULONG(0022), FrameRate
 * (0004E8) S_GDATA32: [0003:00931784], Type:             0x1C03, GameTimer
 * (000500) S_GDATA32: [0003:00931788], Type:             0x1C03, UserTimer
 * (000518) S_GDATA32: [0003:0093178C], Type:             0x1C03, NetTimer
 * (000530) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * (00054C) S_GDATA32: [0003:00931790], Type:      T_ULONG(0022), CurEngine
 * (000564) S_GDATA32: [0003:01249500], Type:             0x1C0B, UsedObjectsHead
 * (000584) S_GDATA32: [0003:00931798], Type:      T_ULONG(0022), GameUpdateStart
 * (0005A4) S_GDATA32: [0003:0093179C], Type:      T_ULONG(0022), GameUpdateEnd
 * (0005C0) S_GDATA32: [0003:009317A0], Type:      T_ULONG(0022), ObjectsElapsedTime
 * (0005E4) S_GDATA32: [0003:009317A4], Type:      T_ULONG(0022), WorldD3DRenderTime
 * (000608) S_GDATA32: [0003:00C30FB3], Type:      T_UCHAR(0020), DaveTest_Throttle
 * (000628) S_GDATA32: [0003:00C30FB4], Type:      T_UCHAR(0020), DaveTest_Brake
 * (000648) S_GDATA32: [0003:00C30FB5], Type:      T_RCHAR(0070), min_ds
 * (000660) S_GDATA32: [0003:00C30FB2], Type:      T_RCHAR(0070), max_ds
 * 
 * ModName: .\Debug\startup.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\startup.obj
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
 * (00008C) S_GPROC32: [0001:00091A60], Cb: 000002B5, Type:             0x1EE2, WinMain
 *          Parent: 00000000, End: 0000015C, Next: 00000160
 *          Debug start: 00000006, Debug end: 000002AF
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [00000008], Type:             0x15C5, hInstance
 * (0000D4)  S_BPREL32: [0000000C], Type:             0x15C5, hPrevInstance
 * (0000F0)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), CmdLine
 * (000104)  S_BPREL32: [00000014], Type:       T_INT4(0074), iCmdShow
 * (00011C)  S_BPREL32: [FFFFFFC8], Type:      T_ULONG(0022), DXVersion
 * (000134)  S_BPREL32: [FFFFFFCC], Type:      T_ULONG(0022), OSVersion
 * (00014C)  S_BPREL32: [FFFFFFD0], Type:             0x1EE6, wc
 * 
 * (00015C) S_END
 * 
 * (000160) S_GPROC32: [0001:00091D15], Cb: 00000012, Type:             0x1EE8, MessageLoopHandler
 *          Parent: 00000000, End: 000001CC, Next: 000001D0
 *          Debug start: 00000004, Debug end: 0000000E
 *          Flags: Frame Ptr Present
 * 
 * (00019C)  S_BPREL32: [00000008], Type:             0x1418, UpdateCallBack
 * (0001B8)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), RetVal
 * 
 * (0001CC) S_END
 * 
 * (0001D0) S_GPROC32: [0001:00091D27], Cb: 0000026F, Type:             0x175B, WndProc
 *          Parent: 00000000, End: 000002C0, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000246
 *          Flags: Frame Ptr Present
 * 
 * (000200)  S_LDATA32: [0001:00091F87], Type:     T_NOTYPE(0000), (none)
 * (000210)  S_LDATA32: [0001:00091F73], Type:     T_NOTYPE(0000), (none)
 * (000220)  S_LABEL32: [0001:00091DA8], $L73201
 * (000234)  S_LABEL32: [0001:00091DAF], $L73202
 * (000248)  S_LABEL32: [0001:00091DBE], $L73203
 * (00025C)  S_LABEL32: [0001:00091E83], $L73217
 * (000270)  S_BPREL32: [00000008], Type:             0x102A, hWnd
 * (000284)  S_BPREL32: [0000000C], Type:      T_UINT4(0075), iMsg
 * (000298)  S_BPREL32: [00000010], Type:      T_UINT4(0075), wParam
 * (0002AC)  S_BPREL32: [00000014], Type:       T_LONG(0012), lParam
 * 
 * (0002C0) S_END
 * 
 * (0002C4) S_GDATA32: [0003:00C30FBC], Type:             0x15C5, hInstMain
 * (0002DC) S_GDATA32: [0003:00C30FC0], Type:    T_32PVOID(0403), PHandle
 * (0002F4) S_GDATA32: [0003:0097C124], Type:      T_ULONG(0022), MessageLoopExit
 * (000314) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (00032C) S_GDATA32: [0003:00C30FB8], Type:             0x102A, hWndMain
 * (000344) S_GDATA32: [0003:00931780], Type:      T_ULONG(0022), SystemActive
 * (000360) S_GDATA32: [0003:0000B620], Type:             0x1D4C, USER_ApplicationName
 * 
 */

