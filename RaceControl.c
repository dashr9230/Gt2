
// Original file: C:\CodePrj\Gt2\Game\src\dave\RaceControl.c

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
 * 
 * (00011C) S_GPROC32: [0001:0001A01C], Cb: 0000001D, Type:             0x1001, SingleStep_Toggle
 *          Parent: 00000000, End: 00000158, Next: 0000015C
 *          Debug start: 00000003, Debug end: 0000001B
 *          Flags: Frame Ptr Present
 * 
 * (000158) S_END
 * 
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
 * 
 * (0001D4) S_GPROC32: [0001:0001A0A7], Cb: 000000B1, Type:             0x1408, RC_Destroy
 *          Parent: 00000000, End: 00000230, Next: 00000234
 *          Debug start: 00000004, Debug end: 000000AD
 *          Flags: Frame Ptr Present
 * 
 * (000208)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (000218)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000230) S_END
 * 
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
 * 
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
 * 
 * (00036C) S_GPROC32: [0001:0001A31E], Cb: 00000079, Type:             0x1B48, DoesTrackExist
 *          Parent: 00000000, End: 000003CC, Next: 000003D0
 *          Debug start: 00000004, Debug end: 00000075
 *          Flags: Frame Ptr Present
 * 
 * (0003A4)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), trackname
 * (0003BC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0003CC) S_END
 * 
 * (0003D0) S_GPROC32: [0001:0001A397], Cb: 00000078, Type:             0x1B5B, RC_SelectVenue
 *          Parent: 00000000, End: 00000438, Next: 0000043C
 *          Debug start: 00000004, Debug end: 00000074
 *          Flags: Frame Ptr Present
 * 
 * (000408)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), TrackName
 * (000420)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000438) S_END
 * 
 * (00043C) S_LPROC32: [0001:0001A40F], Cb: 00000058, Type:             0x1C12, FindTrackId
 *          Parent: 00000000, End: 00000498, Next: 0000049C
 *          Debug start: 00000006, Debug end: 00000054
 *          Flags: Frame Ptr Present
 * 
 * (000470)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (000480)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000498) S_END
 * 
 * (00049C) S_GPROC32: [0001:0001A467], Cb: 00000013, Type:             0x16A1, RC_EnterCar
 *          Parent: 00000000, End: 000004E4, Next: 000004E8
 *          Debug start: 00000003, Debug end: 00000011
 *          Flags: Frame Ptr Present
 * 
 * (0004D0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), driver
 * 
 * (0004E4) S_END
 * 
 * (0004E8) S_GPROC32: [0001:0001A47A], Cb: 000000AA, Type:             0x1001, RC_Load
 *          Parent: 00000000, End: 00000548, Next: 0000054C
 *          Debug start: 00000006, Debug end: 000000A6
 *          Flags: Frame Ptr Present
 * 
 * (000518)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (000530)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000548) S_END
 * 
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
 * 
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
 * 
 * (00069C) S_GPROC32: [0001:0001A9FB], Cb: 00000014, Type:             0x1408, FPS_Draw
 *          Parent: 00000000, End: 000006DC, Next: 000006E0
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (0006CC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0006DC) S_END
 * 
 * (0006E0) S_GPROC32: [0001:0001AA0F], Cb: 00000071, Type:             0x1408, FPS_Handle
 *          Parent: 00000000, End: 00000724, Next: 00000728
 *          Debug start: 00000003, Debug end: 0000006F
 *          Flags: Frame Ptr Present
 * 
 * (000714)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000724) S_END
 * 
 * (000728) S_GPROC32: [0001:0001AA80], Cb: 00000081, Type:             0x1001, FPS_Install
 *          Parent: 00000000, End: 0000075C, Next: 00000760
 *          Debug start: 00000003, Debug end: 0000007F
 *          Flags: Frame Ptr Present
 * 
 * (00075C) S_END
 * 
 * (000760) S_GPROC32: [0001:0001AB01], Cb: 00000026, Type:             0x1001, FPS_Remove
 *          Parent: 00000000, End: 00000794, Next: 00000798
 *          Debug start: 00000003, Debug end: 00000024
 *          Flags: Frame Ptr Present
 * 
 * (000794) S_END
 * 
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
 * 
 * (000860) S_GPROC32: [0001:0001AC88], Cb: 00000014, Type:             0x1001, OpRC_Quit
 *          Parent: 00000000, End: 00000894, Next: 00000898
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (000894) S_END
 * 
 * (000898) S_GPROC32: [0001:0001AC9C], Cb: 00000031, Type:             0x1001, OpRC_RaceOver
 *          Parent: 00000000, End: 000008D0, Next: 000008D4
 *          Debug start: 00000003, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (0008D0) S_END
 * 
 * (0008D4) S_GPROC32: [0001:0001ACCD], Cb: 0000000F, Type:             0x1001, RC_Quit
 *          Parent: 00000000, End: 00000904, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000000D
 *          Flags: Frame Ptr Present
 * 
 * (000904) S_END
 * 
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
 * 
 * ModName: .\Debug\Pitboard.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\Pitboard.obj
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
 * (00008C) S_GPROC32: [0001:00018D60], Cb: 000000A5, Type:             0x1001, PITBOARD_Allocate
 *          Parent: 00000000, End: 000000EC, Next: 000000F0
 *          Debug start: 00000006, Debug end: 000000A1
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (0000D8)  S_BPREL32: [FFFFFFFC], Type:             0x1413, prim
 * 
 * (0000EC) S_END
 * 
 * (0000F0) S_LPROC32: [0001:00018E05], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000174, Next: 00000178
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (000124)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (000134)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (000144)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (000154)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (000164)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000174) S_END
 * 
 * (000178) S_GPROC32: [0001:00018E7F], Cb: 00000028, Type:             0x1C7E, PITBOARD_MakeString
 *          Parent: 00000000, End: 000001D8, Next: 000001DC
 *          Debug start: 00000003, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (0001B4)  S_BPREL32: [00000008], Type:       T_LONG(0012), time
 * (0001C8)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), str
 * 
 * (0001D8) S_END
 * 
 * (0001DC) S_GPROC32: [0001:00018EA7], Cb: 00000487, Type:             0x1CA1, PITBOARD_Draw
 *          Parent: 00000000, End: 0000041C, Next: 00000420
 *          Debug start: 00000007, Debug end: 00000482
 *          Flags: Frame Ptr Present
 * 
 * (000214)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000224)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000234)  S_BPREL32: [00000010], Type:             0x1404, obj
 * (000244)  S_BPREL32: [00000014], Type:             0x1C9C, HudSprite
 * (00025C)  S_BPREL32: [00000018], Type:             0x1C9F, HudFont
 * (000270)  S_BPREL32: [FFFFFFE4], Type:             0x1A86, CarManager
 * (000288)  S_BPREL32: [FFFFFFE8], Type:             0x1A9D, ThisCar
 * (00029C)  S_BPREL32: [FFFFFFEC], Type:             0x1AA2, RaceControl
 * (0002B4)  S_BPREL32: [FFFFFFF0], Type:             0x1004, str
 * 
 * (0002C4)  S_BLOCK32: [0001:00018FB4], Cb: 00000154, (none)
 *           Parent: 000001DC, End: 0000036C
 * 
 * (0002DC)   S_BPREL32: [FFFFFFDC], Type:             0x1A9D, CarAhead
 * (0002F4)   S_BPREL32: [FFFFFFE0], Type:             0x1404, ObjAhead
 * 
 * (00030C)   S_BLOCK32: [0001:00019015], Cb: 00000090, (none)
 *            Parent: 000002C4, End: 0000033C
 * 
 * (000324)    S_BPREL32: [FFFFFFD8], Type:      T_ULONG(0022), lapsahead
 * 
 * (00033C)   S_END
 * 
 * (000340)   S_BLOCK32: [0001:000190A7], Cb: 00000061, (none)
 *            Parent: 000002C4, End: 00000368
 * 
 * (000358)    S_BPREL32: [FFFFFFD4], Type:       T_LONG(0012), gap
 * 
 * (000368)   S_END
 * 
 * (00036C)  S_END
 * 
 * (000370)  S_BLOCK32: [0001:00019118], Cb: 00000165, (none)
 *           Parent: 000001DC, End: 00000418
 * 
 * (000388)   S_BPREL32: [FFFFFFCC], Type:             0x1A9D, CarBehind
 * (0003A0)   S_BPREL32: [FFFFFFD0], Type:             0x1404, ObjBehind
 * 
 * (0003B8)   S_BLOCK32: [0001:00019175], Cb: 00000061, (none)
 *            Parent: 00000370, End: 000003E0
 * 
 * (0003D0)    S_BPREL32: [FFFFFFC8], Type:       T_LONG(0012), gap
 * 
 * (0003E0)   S_END
 * 
 * (0003E4)   S_BLOCK32: [0001:000191DB], Cb: 000000A2, (none)
 *            Parent: 00000370, End: 00000414
 * 
 * (0003FC)    S_BPREL32: [FFFFFFC4], Type:      T_ULONG(0022), lapsbehind
 * 
 * (000414)   S_END
 * 
 * (000418)  S_END
 * 
 * (00041C) S_END
 * 
 * (000420) S_GPROC32: [0001:0001932E], Cb: 0000003F, Type:             0x1001, PITBOARD_Release
 *          Parent: 00000000, End: 00000458, Next: 0000045C
 *          Debug start: 00000003, Debug end: 0000003D
 *          Flags: Frame Ptr Present
 * 
 * (000458) S_END
 * 
 * (00045C) S_LPROC32: [0001:0001936D], Cb: 0000039A, Type:             0x1001, PITBOARD_DrawBack
 *          Parent: 00000000, End: 000004D4, Next: 000004D8
 *          Debug start: 00000006, Debug end: 00000396
 *          Flags: Frame Ptr Present
 * 
 * (000498)  S_BPREL32: [FFFFFFF4], Type:             0x1766, tdtf
 * (0004AC)  S_BPREL32: [FFFFFFF8], Type:             0x1C9C, info
 * (0004C0)  S_BPREL32: [FFFFFFFC], Type:             0x1413, prim
 * 
 * (0004D4) S_END
 * 
 * (0004D8) S_LPROC32: [0001:00019707], Cb: 00000023, Type:             0x1001, PITBOARD_ResetStrings
 *          Parent: 00000000, End: 00000518, Next: 0000051C
 *          Debug start: 00000003, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (000518) S_END
 * 
 * (00051C) S_LPROC32: [0001:0001972A], Cb: 00000071, Type:             0x1001, PITBOARD_DrawStrings
 *          Parent: 00000000, End: 00000558, Next: 0000055C
 *          Debug start: 00000003, Debug end: 0000006F
 *          Flags: Frame Ptr Present
 * 
 * (000558) S_END
 * 
 * (00055C) S_LPROC32: [0001:0001979B], Cb: 000002CE, Type:             0x1CA3, PITBOARD_AddString
 *          Parent: 00000000, End: 00000744, Next: 00000748
 *          Debug start: 00000009, Debug end: 000002CA
 *          Flags: Frame Ptr Present
 * 
 * (000598)  S_BPREL32: [00000008], Type:             0x1C9F, HudFont
 * (0005AC)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (0005BC)  S_BPREL32: [00000010], Type:      T_ULONG(0022), iy
 * (0005CC)  S_BPREL32: [00000014], Type:     T_REAL32(0040), sx
 * (0005DC)  S_BPREL32: [00000018], Type:     T_REAL32(0040), sy
 * (0005EC)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), panel
 * (000600)  S_BPREL32: [00000020], Type:             0x16EA, FormatString
 * (00061C)  S_BPREL32: [FFFFFED8], Type:     T_REAL32(0040), panelw
 * (000630)  S_BPREL32: [FFFFFEDC], Type:     T_REAL32(0040), panely
 * (000644)  S_BPREL32: [FFFFFEE0], Type:   T_32PRCHAR(0470), arglist
 * (000658)  S_BPREL32: [FFFFFEE4], Type:     T_REAL32(0040), panelx
 * (00066C)  S_BPREL32: [FFFFFEE8], Type:     T_REAL32(0040), panelh
 * (000680)  S_BPREL32: [FFFFFEEC], Type:             0x1A12, buffer
 * (000694)  S_BPREL32: [FFFFFFEC], Type:      T_UCHAR(0020), ch
 * (0006A4)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), Color
 * (0006B8)  S_BPREL32: [FFFFFFF4], Type:   T_32PRCHAR(0470), c
 * (0006C8)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), ycur
 * (0006DC)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), xcur
 * 
 * (0006F0)  S_BLOCK32: [0001:00019864], Cb: 00000175, (none)
 *           Parent: 0000055C, End: 00000740
 * 
 * (000708)   S_BPREL32: [FFFFFECC], Type:             0x13A0, tex
 * (000718)   S_BPREL32: [FFFFFED0], Type:             0x1766, tdtf
 * (00072C)   S_BPREL32: [FFFFFED4], Type:             0x1413, prim
 * 
 * (000740)  S_END
 * 
 * (000744) S_END
 * 
 * (000748) S_LPROC32: [0001:00019A69], Cb: 00000139, Type:             0x1CA5, PITBOARD_AddPanel
 *          Parent: 00000000, End: 00000814, Next: 00000818
 *          Debug start: 00000006, Debug end: 00000135
 *          Flags: Frame Ptr Present
 * 
 * (000784)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000794)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (0007A4)  S_BPREL32: [00000010], Type:     T_REAL32(0040), w
 * (0007B4)  S_BPREL32: [00000014], Type:     T_REAL32(0040), h
 * (0007C4)  S_BPREL32: [00000018], Type:      T_ULONG(0022), panel
 * (0007D8)  S_BPREL32: [FFFFFFF4], Type:             0x1766, tdtf
 * (0007EC)  S_BPREL32: [FFFFFFF8], Type:             0x1C9C, info
 * (000800)  S_BPREL32: [FFFFFFFC], Type:             0x1413, prim
 * 
 * (000814) S_END
 * 
 * (000818) S_LPROC32: [0001:00019BA2], Cb: 00000120, Type:             0x1CA6, PITBOARD_AddHighlight
 *          Parent: 00000000, End: 000008D4, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000011C
 *          Flags: Frame Ptr Present
 * 
 * (000858)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000868)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000878)  S_BPREL32: [00000010], Type:     T_REAL32(0040), w
 * (000888)  S_BPREL32: [00000014], Type:     T_REAL32(0040), h
 * (000898)  S_BPREL32: [FFFFFFF4], Type:             0x1766, tdtf
 * (0008AC)  S_BPREL32: [FFFFFFF8], Type:             0x1C9C, info
 * (0008C0)  S_BPREL32: [FFFFFFFC], Type:             0x1413, prim
 * 
 * (0008D4) S_END
 * 
 * (0008D8) S_GDATA32: [0003:0097F280], Type:             0x1C41, GAMETEXT
 * (0008F0) S_GDATA32: [0003:0097F180], Type:             0x1CA8, PitBoard
 * (000908) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * 
 */

