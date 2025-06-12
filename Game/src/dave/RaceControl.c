
// File: C:\CodePrj\Gt2\Game\src\dave\RaceControl.c

/*
 * ModName: .\Debug\RaceControl.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\RaceControl.obj
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
 * (000908) S_GDATA32: [0003:0097F150], Type:             0x1008, flVec
 * (00091C) S_LDATA32: [0003:00075074], Type:             0x1404, FPSobj
 * (000934) S_GDATA32: [0003:000088F8], Type:             0x1C7B, MESH_PATH
 * (00094C) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000964) S_GDATA32: [0003:000082D8], Type:             0x1823, TrackInfo
 * (00097C) S_GDATA32: [0003:00008828], Type:             0x1A45, MusicFiles
 * (000998) S_GDATA32: [0003:0097F160], Type:       T_INT4(0074), SingleStep
 * (0009B4) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * (0009D4) S_GDATA32: [0003:0097C104], Type:             0x1418, Op
 * (0009E8) S_GDATA32: [0003:0097C0D8], Type:             0x1418, NextOp
 * (000A00) S_GDATA32: [0003:0099D280], Type:             0x1A44, Filez
 * (000A14) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 * (000A30) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (000A4C) S_GDATA32: [0003:0097BEE0], Type:             0x1BE3, VPM_GameScreen
 * (000A6C) S_GDATA32: [0003:000088A8], Type:             0x1C7C, MusicTrack
 * (000A88) S_GDATA32: [0003:0097F164], Type:             0x13A8, DashModel
 * (000AA0) S_GDATA32: [0003:00075070], Type:             0x1404, TVED
 */

/*
 * (000090) S_GPROC32: [0001:00019CD0], Cb: 0000034C, Type:             0x1C77, RC_Create
 *          Parent: 00000000, End: 00000118, Next: 0000011C
 *          Debug start: 00000006, Debug end: 00000348
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x1A9F, RaceSetup
 * (0000DC)  S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * (0000F4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), fi
 * (000104)  S_BPREL32: [FFFFFFFC], Type:             0x1A9F, Setup
 * 
 * (000118) S_END
 */

/*
 * (00011C) S_GPROC32: [0001:0001A01C], Cb: 0000001D, Type:             0x1001, SingleStep_Toggle
 *          Parent: 00000000, End: 00000158, Next: 0000015C
 *          Debug start: 00000003, Debug end: 0000001B
 *          Flags: Frame Ptr Present
 * 
 * (000158) S_END
 */

/*
 * (00015C) S_GPROC32: [0001:0001A039], Cb: 0000006E, Type:             0x1408, RC_Handler
 *          Parent: 00000000, End: 000001D0, Next: 000001D4
 *          Debug start: 00000006, Debug end: 0000006A
 *          Flags: Frame Ptr Present
 * 
 * (000190)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (0001A0)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (0001B8)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (0001D0) S_END
 */

/*
 * (0001D4) S_GPROC32: [0001:0001A0A7], Cb: 000000B1, Type:             0x1408, RC_Destroy
 *          Parent: 00000000, End: 00000230, Next: 00000234
 *          Debug start: 00000004, Debug end: 000000AD
 *          Flags: Frame Ptr Present
 * 
 * (000208)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (000218)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000230) S_END
 */

/*
 * (000234) S_GPROC32: [0001:0001A158], Cb: 0000015C, Type:             0x1001, RC_StoreResults
 *          Parent: 00000000, End: 000002FC, Next: 00000300
 *          Debug start: 00000007, Debug end: 00000157
 *          Flags: Frame Ptr Present
 * 
 * (00026C)  S_BPREL32: [FFFFFFE4], Type:             0x1A86, CarManager
 * (000284)  S_BPREL32: [FFFFFFE8], Type:             0x1A83, Time
 * (000298)  S_BPREL32: [FFFFFFEC], Type:             0x1A9D, ThisCar
 * (0002AC)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (0002BC)  S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * (0002D4)  S_BPREL32: [FFFFFFF8], Type:             0x1C78, dest
 * (0002E8)  S_BPREL32: [FFFFFFFC], Type:             0x1404, CarObj
 * 
 * (0002FC) S_END
 */

/*
 * (000300) S_GPROC32: [0001:0001A2B4], Cb: 0000006A, Type:             0x1001, RC_Shutdown
 *          Parent: 00000000, End: 00000368, Next: 0000036C
 *          Debug start: 00000004, Debug end: 00000066
 *          Flags: Frame Ptr Present
 * 
 * (000334)  S_BLOCK32: [0001:0001A2C1], Cb: 00000059, (none)
 *           Parent: 00000300, End: 00000364
 * 
 * (00034C)   S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000364)  S_END
 * 
 * (000368) S_END
 */

/*
 * (00036C) S_GPROC32: [0001:0001A31E], Cb: 00000079, Type:             0x1B48, DoesTrackExist
 *          Parent: 00000000, End: 000003CC, Next: 000003D0
 *          Debug start: 00000004, Debug end: 00000075
 *          Flags: Frame Ptr Present
 * 
 * (0003A4)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), trackname
 * (0003BC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0003CC) S_END
 */

/*
 * (0003D0) S_GPROC32: [0001:0001A397], Cb: 00000078, Type:             0x1B5B, RC_SelectVenue
 *          Parent: 00000000, End: 00000438, Next: 0000043C
 *          Debug start: 00000004, Debug end: 00000074
 *          Flags: Frame Ptr Present
 * 
 * (000408)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), TrackName
 * (000420)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000438) S_END
 */

/*
 * (00043C) S_LPROC32: [0001:0001A40F], Cb: 00000058, Type:             0x1C12, FindTrackId
 *          Parent: 00000000, End: 00000498, Next: 0000049C
 *          Debug start: 00000006, Debug end: 00000054
 *          Flags: Frame Ptr Present
 * 
 * (000470)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (000480)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000498) S_END
 */

/*
 * (00049C) S_GPROC32: [0001:0001A467], Cb: 00000013, Type:             0x16A1, RC_EnterCar
 *          Parent: 00000000, End: 000004E4, Next: 000004E8
 *          Debug start: 00000003, Debug end: 00000011
 *          Flags: Frame Ptr Present
 * 
 * (0004D0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), driver
 * 
 * (0004E4) S_END
 */

/*
 * (0004E8) S_GPROC32: [0001:0001A47A], Cb: 000000AA, Type:             0x1001, RC_Load
 *          Parent: 00000000, End: 00000548, Next: 0000054C
 *          Debug start: 00000006, Debug end: 000000A6
 *          Flags: Frame Ptr Present
 * 
 * (000518)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (000530)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000548) S_END
 */

/*
 * (00054C) S_GPROC32: [0001:0001A524], Cb: 000003E3, Type:             0x1001, RC_Ready
 *          Parent: 00000000, End: 000005E8, Next: 000005EC
 *          Debug start: 00000009, Debug end: 000003DF
 *          Flags: Frame Ptr Present
 * 
 * (00057C)  S_BPREL32: [FFFFFF74], Type:             0x180C, cmd
 * (00058C)  S_BPREL32: [FFFFFFB4], Type:             0x1A86, CarManager
 * (0005A4)  S_BPREL32: [FFFFFFB8], Type:             0x180C, Filename
 * (0005BC)  S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * (0005D4)  S_BPREL32: [FFFFFFFC], Type:             0x1404, CM_Obj
 * 
 * (0005E8) S_END
 */

/*
 * (0005EC) S_GPROC32: [0001:0001A907], Cb: 000000F4, Type:             0x1001, RC_Restart
 *          Parent: 00000000, End: 00000698, Next: 0000069C
 *          Debug start: 00000006, Debug end: 000000F0
 *          Flags: Frame Ptr Present
 * 
 * (000620)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (000638)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000650)  S_BLOCK32: [0001:0001A9CF], Cb: 00000023, (none)
 *           Parent: 000005EC, End: 00000694
 * 
 * (000668)   S_BPREL32: [FFFFFFF0], Type:             0x1A86, CarManager
 * (000680)   S_BPREL32: [FFFFFFF4], Type:             0x1404, CM_Obj
 * 
 * (000694)  S_END
 * 
 * (000698) S_END
 */

/*
 * (00069C) S_GPROC32: [0001:0001A9FB], Cb: 00000014, Type:             0x1408, FPS_Draw
 *          Parent: 00000000, End: 000006DC, Next: 000006E0
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (0006CC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0006DC) S_END
 */

/*
 * (0006E0) S_GPROC32: [0001:0001AA0F], Cb: 00000071, Type:             0x1408, FPS_Handle
 *          Parent: 00000000, End: 00000724, Next: 00000728
 *          Debug start: 00000003, Debug end: 0000006F
 *          Flags: Frame Ptr Present
 * 
 * (000714)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000724) S_END
 */

/*
 * (000728) S_GPROC32: [0001:0001AA80], Cb: 00000081, Type:             0x1001, FPS_Install
 *          Parent: 00000000, End: 0000075C, Next: 00000760
 *          Debug start: 00000003, Debug end: 0000007F
 *          Flags: Frame Ptr Present
 * 
 * (00075C) S_END
 */

/*
 * (000760) S_GPROC32: [0001:0001AB01], Cb: 00000026, Type:             0x1001, FPS_Remove
 *          Parent: 00000000, End: 00000794, Next: 00000798
 *          Debug start: 00000003, Debug end: 00000024
 *          Flags: Frame Ptr Present
 * 
 * (000794) S_END
 */

/*
 * (000798) S_GPROC32: [0001:0001AB27], Cb: 00000161, Type:             0x1C7A, RC_Simple
 *          Parent: 00000000, End: 0000085C, Next: 00000860
 *          Debug start: 00000006, Debug end: 0000015D
 *          Flags: Frame Ptr Present
 * 
 * (0007CC)  S_BPREL32: [00000008], Type:             0x1A9F, RaceSetup
 * (0007E4)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), track_id
 * (0007FC)  S_BPREL32: [00000010], Type:      T_ULONG(0022), demo_id
 * (000810)  S_BPREL32: [00000014], Type:      T_ULONG(0022), car_id
 * (000824)  S_BPREL32: [00000018], Type:      T_ULONG(0022), num_cars
 * (00083C)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), ncc
 * (00084C)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (00085C) S_END
 */

/*
 * (000860) S_GPROC32: [0001:0001AC88], Cb: 00000014, Type:             0x1001, OpRC_Quit
 *          Parent: 00000000, End: 00000894, Next: 00000898
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (000894) S_END
 */

/*
 * (000898) S_GPROC32: [0001:0001AC9C], Cb: 00000031, Type:             0x1001, OpRC_RaceOver
 *          Parent: 00000000, End: 000008D0, Next: 000008D4
 *          Debug start: 00000003, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (0008D0) S_END
 */

/*
 * (0008D4) S_GPROC32: [0001:0001ACCD], Cb: 0000000F, Type:             0x1001, RC_Quit
 *          Parent: 00000000, End: 00000904, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000000D
 *          Flags: Frame Ptr Present
 * 
 * (000904) S_END
 */

