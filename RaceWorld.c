
// Original file: C:\CodePrj\Gt2\Game\src\dave\RaceWorld.c

/*
 * ModName: .\Debug\RaceWorld.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\RaceWorld.obj
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
 * (00008C) S_GPROC32: [0001:00020C70], Cb: 0000003C, Type:             0x1001, RaceWorld_Init
 *          Parent: 00000000, End: 000000C4, Next: 000000C8
 *          Debug start: 00000003, Debug end: 0000003A
 *          Flags: Frame Ptr Present
 * 
 * (0000C4) S_END
 * 
 * (0000C8) S_GPROC32: [0001:00020CAC], Cb: 00000C35, Type:             0x1001, RaceWorld_SimpleStartup
 *          Parent: 00000000, End: 00000108, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000C33
 *          Flags: Frame Ptr Present
 * 
 * (000108) S_END
 * 
 * (00010C) S_GDATA32: [0003:00992AC0], Type:             0x1820, Drivers
 * (000124) S_GDATA32: [0003:00990BE0], Type:             0x1837, Teams
 * 
 * ModName: .\Debug\RaceTime.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\RaceTime.obj
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
 * (00008C) S_GPROC32: [0001:0001FDC0], Cb: 000000B3, Type:             0x1C39, Time_Init
 *          Parent: 00000000, End: 000000EC, Next: 000000F0
 *          Debug start: 00000004, Debug end: 000000AF
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x1404, ParentObject
 * (0000DC)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (0000EC) S_END
 * 
 * (0000F0) S_GPROC32: [0001:0001FE73], Cb: 0000011E, Type:             0x1A56, Time_Reset
 *          Parent: 00000000, End: 00000180, Next: 00000184
 *          Debug start: 00000006, Debug end: 0000011A
 *          Flags: Frame Ptr Present
 * 
 * (000124)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000134)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), GameType
 * (00014C)  S_BPREL32: [FFFFFFF4], Type:             0x1A83, Time
 * (000160)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), j
 * (000170)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000180) S_END
 * 
 * (000184) S_LPROC32: [0001:0001FF91], Cb: 0000001D, Type:             0x1408, Time_Destroy
 *          Parent: 00000000, End: 000001C8, Next: 000001CC
 *          Debug start: 00000003, Debug end: 0000001B
 *          Flags: Frame Ptr Present
 * 
 * (0001B8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0001C8) S_END
 * 
 * (0001CC) S_GPROC32: [0001:0001FFAE], Cb: 000000B3, Type:             0x1408, TriggerPitBoard
 *          Parent: 00000000, End: 00000240, Next: 00000244
 *          Debug start: 00000006, Debug end: 000000AF
 *          Flags: Frame Ptr Present
 * 
 * (000204)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000214)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (00022C)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000240) S_END
 * 
 * (000244) S_GPROC32: [0001:00020061], Cb: 0000001D, Type:             0x1408, Time_Handler
 *          Parent: 00000000, End: 00000288, Next: 0000028C
 *          Debug start: 00000003, Debug end: 0000001B
 *          Flags: Frame Ptr Present
 * 
 * (000278)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000288) S_END
 * 
 * (00028C) S_LPROC32: [0001:0002007E], Cb: 0000018C, Type:             0x1408, Time_Tick
 *          Parent: 00000000, End: 00000314, Next: 00000318
 *          Debug start: 00000006, Debug end: 00000188
 *          Flags: Frame Ptr Present
 * 
 * (0002C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0002D0)  S_BPREL32: [FFFFFFF4], Type:             0x1A83, Time
 * (0002E4)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (0002FC)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000314) S_END
 * 
 * (000318) S_LPROC32: [0001:0002020A], Cb: 00000118, Type:             0x1408, Time_StartLightHandler
 *          Parent: 00000000, End: 0000037C, Next: 00000380
 *          Debug start: 00000004, Debug end: 00000114
 *          Flags: Frame Ptr Present
 * 
 * (000358)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000368)  S_BPREL32: [FFFFFFFC], Type:             0x1A83, Time
 * 
 * (00037C) S_END
 * 
 * (000380) S_LPROC32: [0001:00020322], Cb: 0000002C, Type:             0x1408, TimeRaceInfoHandler
 *          Parent: 00000000, End: 000003E0, Next: 000003E4
 *          Debug start: 00000004, Debug end: 00000028
 *          Flags: Frame Ptr Present
 * 
 * (0003BC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0003CC)  S_BPREL32: [FFFFFFFC], Type:             0x1A83, Time
 * 
 * (0003E0) S_END
 * 
 * (0003E4) S_LPROC32: [0001:0002034E], Cb: 000000DE, Type:             0x1408, Time_Check
 *          Parent: 00000000, End: 000004A0, Next: 000004A4
 *          Debug start: 00000006, Debug end: 000000DA
 *          Flags: Frame Ptr Present
 * 
 * (000418)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000428)  S_BPREL32: [FFFFFFF4], Type:             0x1A83, Time
 * (00043C)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (000454)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (00046C)  S_BLOCK32: [0001:0002039F], Cb: 0000001A, (none)
 *           Parent: 000003E4, End: 0000049C
 * 
 * (000484)   S_BPREL32: [FFFFFFF0], Type:             0x1C3E, RaceOver
 * 
 * (00049C)  S_END
 * 
 * (0004A0) S_END
 * 
 * (0004A4) S_LPROC32: [0001:0002042C], Cb: 00000371, Type:             0x1408, Time_Draw
 *          Parent: 00000000, End: 00000538, Next: 0000053C
 *          Debug start: 00000006, Debug end: 0000036D
 *          Flags: Frame Ptr Present
 * 
 * (0004D8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0004E8)  S_BPREL32: [FFFFFFF0], Type:             0x1404, carobj
 * (0004FC)  S_BPREL32: [FFFFFFF4], Type:             0x1A83, Time
 * (000510)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (000524)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ypos
 * 
 * (000538) S_END
 * 
 * (00053C) S_GPROC32: [0001:0002079D], Cb: 00000062, Type:             0x1408, Time_InitCar
 *          Parent: 00000000, End: 00000594, Next: 00000598
 *          Debug start: 00000004, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (000570)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000580)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000594) S_END
 * 
 * (000598) S_GPROC32: [0001:000207FF], Cb: 00000394, Type:             0x1408, Time_UpdateCar
 *          Parent: 00000000, End: 0000063C, Next: 00000640
 *          Debug start: 00000007, Debug end: 0000038F
 *          Flags: Frame Ptr Present
 * 
 * (0005D0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0005E0)  S_BPREL32: [FFFFFFF0], Type:             0x1A83, Time
 * (0005F4)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), CheckCrossed
 * (000610)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (000624)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (00063C) S_END
 * 
 * (000640) S_LPROC32: [0001:00020B93], Cb: 0000001E, Type:             0x1408, TriggerRaceInfo
 *          Parent: 00000000, End: 0000069C, Next: 000006A0
 *          Debug start: 00000004, Debug end: 0000001A
 *          Flags: Frame Ptr Present
 * 
 * (000678)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000688)  S_BPREL32: [FFFFFFFC], Type:             0x1A83, Time
 * 
 * (00069C) S_END
 * 
 * (0006A0) S_LPROC32: [0001:00020BB1], Cb: 00000035, Type:             0x1408, TimePitBoardHandler
 *          Parent: 00000000, End: 00000700, Next: 00000704
 *          Debug start: 00000004, Debug end: 00000031
 *          Flags: Frame Ptr Present
 * 
 * (0006DC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0006EC)  S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000700) S_END
 * 
 * (000704) S_GPROC32: [0001:00020BE6], Cb: 00000055, Type:             0x1408, Time_TriggerRaceOver
 *          Parent: 00000000, End: 00000798, Next: 0000079C
 *          Debug start: 00000006, Debug end: 00000051
 *          Flags: Frame Ptr Present
 * 
 * (000740)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000750)  S_BPREL32: [FFFFFFFC], Type:             0x1A83, Time
 * 
 * (000764)  S_BLOCK32: [0001:00020C1A], Cb: 0000001D, (none)
 *           Parent: 00000704, End: 00000794
 * 
 * (00077C)   S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * 
 * (000794)  S_END
 * 
 * (000798) S_END
 * 
 * (00079C) S_GPROC32: [0001:00020C3B], Cb: 00000028, Type:             0x1408, Time_TriggerShutdownToMenu
 *          Parent: 00000000, End: 00000804, Next: 00000000
 *          Debug start: 00000004, Debug end: 00000024
 *          Flags: Frame Ptr Present
 * 
 * (0007E0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0007F0)  S_BPREL32: [FFFFFFFC], Type:             0x1A83, Time
 * 
 * (000804) S_END
 * 
 * (000808) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000820) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (00083C) S_GDATA32: [0003:0097C104], Type:             0x1418, Op
 * 
 */

