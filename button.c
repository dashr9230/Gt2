
// Original file: C:\CodePrj\Gt2\Game\src\Scavenger\button.c

/*
 * ModName: .\Debug\button.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\button.obj
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
 * (00008C) S_GPROC32: [0001:00041D20], Cb: 00000005, Type:             0x1408, ButtonManager_Release
 *          Parent: 00000000, End: 000000DC, Next: 000000E0
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000CC)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0000DC) S_END
 * 
 * (0000E0) S_GPROC32: [0001:00041D25], Cb: 00000037, Type:             0x1408, ButtonManager_DestroyAllButtons
 *          Parent: 00000000, End: 00000148, Next: 0000014C
 *          Debug start: 00000004, Debug end: 00000033
 *          Flags: Frame Ptr Present
 * 
 * (000128)  S_BPREL32: [00000008], Type:             0x1404, man
 * (000138)  S_BPREL32: [FFFFFFFC], Type:             0x1404, ptr
 * 
 * (000148) S_END
 * 
 * (00014C) S_GPROC32: [0001:00041D5C], Cb: 0000002E, Type:             0x1408, ButtonManager_DrawButtons
 *          Parent: 00000000, End: 000001B0, Next: 000001B4
 *          Debug start: 00000004, Debug end: 0000002A
 *          Flags: Frame Ptr Present
 * 
 * (000190)  S_BPREL32: [00000008], Type:             0x1404, BMo
 * (0001A0)  S_BPREL32: [FFFFFFFC], Type:             0x1404, ptr
 * 
 * (0001B0) S_END
 * 
 * (0001B4) S_GPROC32: [0001:00041D8A], Cb: 00000076, Type:             0x1824, ButtonManager_Create
 *          Parent: 00000000, End: 00000210, Next: 00000214
 *          Debug start: 00000004, Debug end: 00000072
 *          Flags: Frame Ptr Present
 * 
 * (0001F0)  S_BPREL32: [FFFFFFFC], Type:             0x1404, ButtonManagerObject
 * 
 * (000210) S_END
 * 
 * (000214) S_GPROC32: [0001:00041E00], Cb: 00000005, Type:             0x1A6A, ButtonManager_ChangeButtonFocus
 *          Parent: 00000000, End: 00000288, Next: 0000028C
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (00025C)  S_BPREL32: [00000008], Type:             0x1404, objman
 * (000270)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), Direction
 * 
 * (000288) S_END
 * 
 * (00028C) S_GPROC32: [0001:00041E05], Cb: 00000082, Type:             0x1A5F, ButtonManager_CheckPointerOver
 *          Parent: 00000000, End: 00000314, Next: 00000318
 *          Debug start: 00000004, Debug end: 0000007E
 *          Flags: Frame Ptr Present
 * 
 * (0002D4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0002E4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), mx
 * (0002F4)  S_BPREL32: [00000010], Type:     T_REAL32(0040), my
 * (000304)  S_BPREL32: [FFFFFFFC], Type:             0x1A6F, btn
 * 
 * (000314) S_END
 * 
 * (000318) S_GPROC32: [0001:00041E87], Cb: 000000A4, Type:             0x1A33, ButtonManager_CheckClick
 *          Parent: 00000000, End: 00000398, Next: 0000039C
 *          Debug start: 00000004, Debug end: 000000A0
 *          Flags: Frame Ptr Present
 * 
 * (000358)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000368)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), mx
 * (000378)  S_BPREL32: [00000010], Type:     T_REAL32(0040), my
 * (000388)  S_BPREL32: [FFFFFFFC], Type:             0x1A6F, btn
 * 
 * (000398) S_END
 * 
 * (00039C) S_GPROC32: [0001:00041F2B], Cb: 00000065, Type:             0x1408, Button_Release
 *          Parent: 00000000, End: 000003E4, Next: 000003E8
 *          Debug start: 00000003, Debug end: 00000063
 *          Flags: Frame Ptr Present
 * 
 * (0003D4)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0003E4) S_END
 * 
 * (0003E8) S_GPROC32: [0001:00041F90], Cb: 00000041, Type:             0x1408, Button_Draw
 *          Parent: 00000000, End: 0000042C, Next: 00000430
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (00041C)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (00042C) S_END
 * 
 * (000430) S_GPROC32: [0001:00041FD1], Cb: 000002A2, Type:             0x1A71, Button_Create
 *          Parent: 00000000, End: 000005A8, Next: 000005AC
 *          Debug start: 00000007, Debug end: 0000029D
 *          Flags: Frame Ptr Present
 * 
 * (000468)  S_BPREL32: [00000008], Type:             0x1404, objman
 * (00047C)  S_BPREL32: [0000000C], Type:             0x1404, objtex
 * (000490)  S_BPREL32: [00000010], Type:             0x1A24, file
 * (0004A4)  S_BPREL32: [00000014], Type:     T_REAL32(0040), TLx
 * (0004B4)  S_BPREL32: [00000018], Type:     T_REAL32(0040), TLy
 * (0004C4)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), BRx
 * (0004D4)  S_BPREL32: [00000020], Type:     T_REAL32(0040), BRy
 * (0004E4)  S_BPREL32: [00000024], Type:   T_32PRCHAR(0470), text
 * (0004F8)  S_BPREL32: [00000028], Type:             0x141B, Func
 * (00050C)  S_BPREL32: [0000002C], Type:      T_ULONG(0022), ButtonType
 * (000524)  S_BPREL32: [00000030], Type:      T_ULONG(0022), Value
 * (000538)  S_BPREL32: [00000034], Type:       T_INT4(0074), State
 * (00054C)  S_BPREL32: [FFFFFFEC], Type:             0x1404, ButObj
 * (000560)  S_BPREL32: [FFFFFFF0], Type:             0x1A6F, Button
 * (000574)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), c
 * (000584)  S_BPREL32: [FFFFFFF8], Type:             0x1766, tdt
 * (000594)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), width
 * 
 * (0005A8) S_END
 * 
 * (0005AC) S_LPROC32: [0001:00042273], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000630, Next: 00000634
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (0005E0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (0005F0)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (000600)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (000610)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (000620)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000630) S_END
 * 
 * (000634) S_GPROC32: [0001:000422ED], Cb: 00000017, Type:             0x1A73, Button_SetKeyPointable
 *          Parent: 00000000, End: 00000694, Next: 00000698
 *          Debug start: 00000003, Debug end: 00000015
 *          Flags: Frame Ptr Present
 * 
 * (000674)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000684)  S_BPREL32: [0000000C], Type:       T_INT4(0074), p
 * 
 * (000694) S_END
 * 
 * (000698) S_GPROC32: [0001:00042304], Cb: 000000DA, Type:             0x1A56, Button_SetSelected
 *          Parent: 00000000, End: 00000708, Next: 0000070C
 *          Debug start: 00000004, Debug end: 000000D6
 *          Flags: Frame Ptr Present
 * 
 * (0006D4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0006E4)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), state
 * (0006F8)  S_BPREL32: [FFFFFFFC], Type:             0x1766, tdt
 * 
 * (000708) S_END
 * 
 * (00070C) S_GPROC32: [0001:000423DE], Cb: 00000050, Type:             0x1A75, Button_SetColour
 *          Parent: 00000000, End: 00000794, Next: 00000798
 *          Debug start: 00000003, Debug end: 0000004E
 *          Flags: Frame Ptr Present
 * 
 * (000744)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000754)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), r
 * (000764)  S_BPREL32: [00000010], Type:      T_UCHAR(0020), g
 * (000774)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), b
 * (000784)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), a
 * 
 * (000794) S_END
 * 
 * (000798) S_GPROC32: [0001:0004242E], Cb: 00000212, Type:             0x1A5A, Button_CreateIcon
 *          Parent: 00000000, End: 000008A8, Next: 000008AC
 *          Debug start: 00000006, Debug end: 0000020E
 *          Flags: Frame Ptr Present
 * 
 * (0007D4)  S_BPREL32: [00000008], Type:             0x1404, objman
 * (0007E8)  S_BPREL32: [0000000C], Type:             0x1A24, file
 * (0007FC)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLx
 * (00080C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), TLy
 * (00081C)  S_BPREL32: [00000018], Type:             0x141B, Func
 * (000830)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), ButtonType
 * (000848)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Value
 * (00085C)  S_BPREL32: [00000024], Type:       T_INT4(0074), State
 * (000870)  S_BPREL32: [FFFFFFF4], Type:             0x1404, ButObj
 * (000884)  S_BPREL32: [FFFFFFF8], Type:             0x1A6F, Button
 * (000898)  S_BPREL32: [FFFFFFFC], Type:             0x1766, tdt
 * 
 * (0008A8) S_END
 * 
 * (0008AC) S_GPROC32: [0001:00042640], Cb: 0000010B, Type:             0x1A5C, Button_CreateArea
 *          Parent: 00000000, End: 000009A0, Next: 000009D8
 *          Debug start: 00000006, Debug end: 00000107
 *          Flags: Frame Ptr Present
 * 
 * (0008E8)  S_BPREL32: [00000008], Type:             0x1404, objman
 * (0008FC)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), TLx
 * (00090C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLy
 * (00091C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), BRx
 * (00092C)  S_BPREL32: [00000018], Type:     T_REAL32(0040), BRy
 * (00093C)  S_BPREL32: [0000001C], Type:             0x141B, Func
 * (000950)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Value
 * (000964)  S_BPREL32: [00000024], Type:       T_INT4(0074), State
 * (000978)  S_BPREL32: [FFFFFFF8], Type:             0x1404, ButObj
 * (00098C)  S_BPREL32: [FFFFFFFC], Type:             0x1A6F, Button
 * 
 * (0009A0) S_END
 * 
 * (0009A4) S_GDATA32: [0003:00012DA8], Type:             0x1428, MenuFileList
 * (0009C0) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * 
 * (0009D8) S_GPROC32: [0001:00042750], Cb: 000000C7, Type:             0x1A77, P2D_SetUVUV
 *          Parent: 00000000, End: 00000A60, Next: 00000000
 *          Debug start: 00000003, Debug end: 000000C5
 *          Flags: Frame Ptr Present
 * 
 * (000A0C)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * (000A20)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), u0
 * (000A30)  S_BPREL32: [00000010], Type:     T_REAL32(0040), v0
 * (000A40)  S_BPREL32: [00000014], Type:     T_REAL32(0040), u1
 * (000A50)  S_BPREL32: [00000018], Type:     T_REAL32(0040), v1
 * 
 * (000A60) S_END
 * 
 * ModName: .\Debug\bt.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\bt.obj
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
 * 
 * (000088) S_GPROC32: [0001:00040C30], Cb: 00000032, Type:             0x141A, dBtBomb
 *          Parent: 00000000, End: 000000E0, Next: 000000E4
 *          Debug start: 00000004, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (0000B8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0000C8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0000E0) S_END
 * 
 * (0000E4) S_GPROC32: [0001:00040C62], Cb: 00000032, Type:             0x141A, dBtCancel
 *          Parent: 00000000, End: 00000140, Next: 00000144
 *          Debug start: 00000004, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (000118)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000128)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000140) S_END
 * 
 * (000144) S_GPROC32: [0001:00040C94], Cb: 0000003E, Type:             0x141A, BtQUITTOWINDOWS
 *          Parent: 00000000, End: 000001A4, Next: 000001A8
 *          Debug start: 00000004, Debug end: 0000003A
 *          Flags: Frame Ptr Present
 * 
 * (00017C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00018C)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0001A4) S_END
 * 
 * (0001A8) S_GPROC32: [0001:00040CD2], Cb: 0000000A, Type:             0x141A, BtQUICKRACE
 *          Parent: 00000000, End: 000001EC, Next: 000001F0
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (0001DC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * 
 * (0001EC) S_END
 * 
 * (0001F0) S_GPROC32: [0001:00040CDC], Cb: 0000004B, Type:             0x141A, BtMULTIPLAYER
 *          Parent: 00000000, End: 00000250, Next: 00000254
 *          Debug start: 00000004, Debug end: 00000047
 *          Flags: Frame Ptr Present
 * 
 * (000228)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000238)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000250) S_END
 * 
 * (000254) S_GPROC32: [0001:00040D27], Cb: 0000000F, Type:             0x141A, BtCAREER
 *          Parent: 00000000, End: 00000294, Next: 00000298
 *          Debug start: 00000003, Debug end: 0000000D
 *          Flags: Frame Ptr Present
 * 
 * (000284)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * 
 * (000294) S_END
 * 
 * (000298) S_GPROC32: [0001:00040D36], Cb: 0000000A, Type:             0x141A, BtROOTMENU
 *          Parent: 00000000, End: 000002DC, Next: 000002E0
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (0002CC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * 
 * (0002DC) S_END
 * 
 * (0002E0) S_GPROC32: [0001:00040D40], Cb: 0000000A, Type:             0x141A, BtREPLAY
 *          Parent: 00000000, End: 00000320, Next: 00000324
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (000310)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * 
 * (000320) S_END
 * 
 * (000324) S_GPROC32: [0001:00040D4A], Cb: 0000003E, Type:             0x141A, BtQuitCareer
 *          Parent: 00000000, End: 00000380, Next: 00000384
 *          Debug start: 00000004, Debug end: 0000003A
 *          Flags: Frame Ptr Present
 * 
 * (000358)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000368)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000380) S_END
 * 
 * (000384) S_GPROC32: [0001:00040D88], Cb: 0000002D, Type:             0x141A, BtHandRace
 *          Parent: 00000000, End: 000003D8, Next: 000003DC
 *          Debug start: 00000004, Debug end: 00000029
 *          Flags: Frame Ptr Present
 * 
 * (0003B8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0003C8)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0003D8) S_END
 * 
 * (0003DC) S_GPROC32: [0001:00040DB5], Cb: 0000002D, Type:             0x141A, BtHandDrift
 *          Parent: 00000000, End: 00000430, Next: 00000434
 *          Debug start: 00000004, Debug end: 00000029
 *          Flags: Frame Ptr Present
 * 
 * (000410)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000420)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000430) S_END
 * 
 * (000434) S_GPROC32: [0001:00040DE2], Cb: 0000002D, Type:             0x141A, BtCareerHandRace
 *          Parent: 00000000, End: 0000048C, Next: 00000490
 *          Debug start: 00000004, Debug end: 00000029
 *          Flags: Frame Ptr Present
 * 
 * (00046C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00047C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (00048C) S_END
 * 
 * (000490) S_GPROC32: [0001:00040E0F], Cb: 0000002D, Type:             0x141A, BtCareerHandDrift
 *          Parent: 00000000, End: 000004EC, Next: 000004F0
 *          Debug start: 00000004, Debug end: 00000029
 *          Flags: Frame Ptr Present
 * 
 * (0004CC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0004DC)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0004EC) S_END
 * 
 * (0004F0) S_GPROC32: [0001:00040E3C], Cb: 0000006C, Type:             0x141A, BtGfxOther
 *          Parent: 00000000, End: 00000544, Next: 00000548
 *          Debug start: 00000004, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000524)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000534)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000544) S_END
 * 
 * (000548) S_GPROC32: [0001:00040EA8], Cb: 0000006C, Type:             0x141A, BtGfxCpu
 *          Parent: 00000000, End: 00000598, Next: 0000059C
 *          Debug start: 00000004, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000578)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000588)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000598) S_END
 * 
 * (00059C) S_GPROC32: [0001:00040F14], Cb: 0000006C, Type:             0x141A, BtGfxPlayer
 *          Parent: 00000000, End: 000005F0, Next: 000005F4
 *          Debug start: 00000004, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (0005D0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0005E0)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0005F0) S_END
 * 
 * (0005F4) S_GPROC32: [0001:00040F80], Cb: 0000006C, Type:             0x141A, BtGfxTrack
 *          Parent: 00000000, End: 00000648, Next: 0000064C
 *          Debug start: 00000004, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000628)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000638)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000648) S_END
 * 
 * (00064C) S_GPROC32: [0001:00040FEC], Cb: 00000072, Type:             0x141A, BtGfxOtherClick
 *          Parent: 00000000, End: 000006CC, Next: 000006D0
 *          Debug start: 00000006, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (000684)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000694)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (0006A4)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0006B4)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0006CC) S_END
 * 
 * (0006D0) S_GPROC32: [0001:0004105E], Cb: 00000072, Type:             0x141A, BtGfxCpuClick
 *          Parent: 00000000, End: 00000750, Next: 00000754
 *          Debug start: 00000006, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (000708)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000718)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000728)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000738)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000750) S_END
 * 
 * (000754) S_GPROC32: [0001:000410D0], Cb: 00000072, Type:             0x141A, BtGfxPlayerClick
 *          Parent: 00000000, End: 000007D4, Next: 000007D8
 *          Debug start: 00000006, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (00078C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00079C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (0007AC)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0007BC)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0007D4) S_END
 * 
 * (0007D8) S_GPROC32: [0001:00041142], Cb: 00000072, Type:             0x141A, BtGfxTrackClick
 *          Parent: 00000000, End: 00000858, Next: 0000085C
 *          Debug start: 00000006, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (000810)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000820)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000830)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000840)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000858) S_END
 * 
 * (00085C) S_GPROC32: [0001:000411B4], Cb: 00000069, Type:             0x141A, BtMusicChange
 *          Parent: 00000000, End: 000008B4, Next: 000008B8
 *          Debug start: 00000004, Debug end: 00000065
 *          Flags: Frame Ptr Present
 * 
 * (000894)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0008A4)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0008B4) S_END
 * 
 * (0008B8) S_GPROC32: [0001:0004121D], Cb: 0000006D, Type:             0x141A, BtMusicChangeClick
 *          Parent: 00000000, End: 0000093C, Next: 00000940
 *          Debug start: 00000006, Debug end: 00000069
 *          Flags: Frame Ptr Present
 * 
 * (0008F4)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000904)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000914)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000924)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (00093C) S_END
 * 
 * (000940) S_GPROC32: [0001:0004128A], Cb: 00000069, Type:             0x141A, BtCommentaryChange
 *          Parent: 00000000, End: 0000099C, Next: 000009A0
 *          Debug start: 00000004, Debug end: 00000065
 *          Flags: Frame Ptr Present
 * 
 * (00097C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00098C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (00099C) S_END
 * 
 * (0009A0) S_GPROC32: [0001:000412F3], Cb: 00000069, Type:             0x141A, BtEngineChange
 *          Parent: 00000000, End: 000009F8, Next: 000009FC
 *          Debug start: 00000004, Debug end: 00000065
 *          Flags: Frame Ptr Present
 * 
 * (0009D8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0009E8)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0009F8) S_END
 * 
 * (0009FC) S_GPROC32: [0001:0004135C], Cb: 0000006D, Type:             0x141A, BtEngineChangeClick
 *          Parent: 00000000, End: 00000A80, Next: 00000A84
 *          Debug start: 00000006, Debug end: 00000069
 *          Flags: Frame Ptr Present
 * 
 * (000A38)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000A48)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000A58)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000A68)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000A80) S_END
 * 
 * (000A84) S_GPROC32: [0001:000413C9], Cb: 00000069, Type:             0x141A, BtSpecialChange
 *          Parent: 00000000, End: 00000ADC, Next: 00000AE0
 *          Debug start: 00000004, Debug end: 00000065
 *          Flags: Frame Ptr Present
 * 
 * (000ABC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000ACC)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000ADC) S_END
 * 
 * (000AE0) S_GPROC32: [0001:00041432], Cb: 0000006D, Type:             0x141A, BtSpecialChangeClick
 *          Parent: 00000000, End: 00000B64, Next: 00000B68
 *          Debug start: 00000006, Debug end: 00000069
 *          Flags: Frame Ptr Present
 * 
 * (000B1C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000B2C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000B3C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000B4C)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000B64) S_END
 * 
 * (000B68) S_GPROC32: [0001:0004149F], Cb: 00000086, Type:             0x141A, Bt3DSoundChange
 *          Parent: 00000000, End: 00000BC0, Next: 00000BC4
 *          Debug start: 00000004, Debug end: 00000082
 *          Flags: Frame Ptr Present
 * 
 * (000BA0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000BB0)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000BC0) S_END
 * 
 * (000BC4) S_GPROC32: [0001:00041525], Cb: 0000006C, Type:             0x141A, Bt3DSoundChangeClick
 *          Parent: 00000000, End: 00000C48, Next: 00000C4C
 *          Debug start: 00000006, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000C00)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000C10)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000C20)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000C30)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000C48) S_END
 * 
 * (000C4C) S_GPROC32: [0001:00041591], Cb: 0000007F, Type:             0x141A, BtPlayerDetail
 *          Parent: 00000000, End: 00000CA4, Next: 00000CA8
 *          Debug start: 00000004, Debug end: 0000007B
 *          Flags: Frame Ptr Present
 * 
 * (000C84)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000C94)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000CA4) S_END
 * 
 * (000CA8) S_GPROC32: [0001:00041610], Cb: 0000007F, Type:             0x141A, BtCPUDetail
 *          Parent: 00000000, End: 00000CFC, Next: 00000D00
 *          Debug start: 00000004, Debug end: 0000007B
 *          Flags: Frame Ptr Present
 * 
 * (000CDC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000CEC)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000CFC) S_END
 * 
 * (000D00) S_GPROC32: [0001:0004168F], Cb: 00000080, Type:             0x141A, BtPlayerDetailClick
 *          Parent: 00000000, End: 00000D84, Next: 00000D88
 *          Debug start: 00000006, Debug end: 0000007C
 *          Flags: Frame Ptr Present
 * 
 * (000D3C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000D4C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000D5C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000D6C)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000D84) S_END
 * 
 * (000D88) S_GPROC32: [0001:0004170F], Cb: 00000080, Type:             0x141A, BtCPUDetailClick
 *          Parent: 00000000, End: 00000E08, Next: 00000E0C
 *          Debug start: 00000006, Debug end: 0000007C
 *          Flags: Frame Ptr Present
 * 
 * (000DC0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000DD0)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x
 * (000DE0)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000DF0)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000E08) S_END
 * 
 * (000E0C) S_GPROC32: [0001:0004178F], Cb: 00000029, Type:             0x141A, BtENV
 *          Parent: 00000000, End: 00000E5C, Next: 00000E60
 *          Debug start: 00000004, Debug end: 00000025
 *          Flags: Frame Ptr Present
 * 
 * (000E3C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000E4C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000E5C) S_END
 * 
 * (000E60) S_GPROC32: [0001:000417B8], Cb: 0000005E, Type:             0x141A, BtSKIDS
 *          Parent: 00000000, End: 00000EB0, Next: 00000EB4
 *          Debug start: 00000004, Debug end: 0000005A
 *          Flags: Frame Ptr Present
 * 
 * (000E90)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000EA0)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000EB0) S_END
 * 
 * (000EB4) S_GPROC32: [0001:00041816], Cb: 0000005E, Type:             0x141A, BtLIGHTS
 *          Parent: 00000000, End: 00000F04, Next: 00000F08
 *          Debug start: 00000004, Debug end: 0000005A
 *          Flags: Frame Ptr Present
 * 
 * (000EE4)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000EF4)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000F04) S_END
 * 
 * (000F08) S_GPROC32: [0001:00041874], Cb: 0000005E, Type:             0x141A, BtPARTICLES
 *          Parent: 00000000, End: 00000F5C, Next: 00000F60
 *          Debug start: 00000004, Debug end: 0000005A
 *          Flags: Frame Ptr Present
 * 
 * (000F3C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000F4C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000F5C) S_END
 * 
 * (000F60) S_GPROC32: [0001:000418D2], Cb: 0000005E, Type:             0x141A, BtSHADOWS
 *          Parent: 00000000, End: 00000FB4, Next: 00000FB8
 *          Debug start: 00000004, Debug end: 0000005A
 *          Flags: Frame Ptr Present
 * 
 * (000F94)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000FA4)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000FB4) S_END
 * 
 * (000FB8) S_GPROC32: [0001:00041930], Cb: 00000029, Type:             0x141A, BtALPHA
 *          Parent: 00000000, End: 00001008, Next: 0000100C
 *          Debug start: 00000004, Debug end: 00000025
 *          Flags: Frame Ptr Present
 * 
 * (000FE8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000FF8)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (001008) S_END
 * 
 * (00100C) S_GPROC32: [0001:00041959], Cb: 00000029, Type:             0x141A, BtMIP
 *          Parent: 00000000, End: 0000105C, Next: 00001060
 *          Debug start: 00000004, Debug end: 00000025
 *          Flags: Frame Ptr Present
 * 
 * (00103C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00104C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (00105C) S_END
 * 
 * (001060) S_GPROC32: [0001:00041982], Cb: 00000066, Type:             0x141A, BtHUD
 *          Parent: 00000000, End: 000010C8, Next: 000010CC
 *          Debug start: 00000006, Debug end: 00000062
 *          Flags: Frame Ptr Present
 * 
 * (001090)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0010A0)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0010B0)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0010C8) S_END
 * 
 * (0010CC) S_GPROC32: [0001:000419E8], Cb: 00000087, Type:             0x141A, BtTV
 *          Parent: 00000000, End: 00001130, Next: 00001134
 *          Debug start: 00000006, Debug end: 00000083
 *          Flags: Frame Ptr Present
 * 
 * (0010F8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001108)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001118)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001130) S_END
 * 
 * (001134) S_GPROC32: [0001:00041A6F], Cb: 00000029, Type:             0x141A, BtCareerHUD
 *          Parent: 00000000, End: 00001188, Next: 0000118C
 *          Debug start: 00000004, Debug end: 00000025
 *          Flags: Frame Ptr Present
 * 
 * (001168)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001178)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (001188) S_END
 * 
 * (00118C) S_GPROC32: [0001:00041A98], Cb: 00000062, Type:             0x141A, BtCareerTV
 *          Parent: 00000000, End: 000011E0, Next: 000011E4
 *          Debug start: 00000004, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (0011C0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0011D0)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0011E0) S_END
 * 
 * (0011E4) S_GPROC32: [0001:00041AFA], Cb: 0000005E, Type:             0x141A, BtSKY
 *          Parent: 00000000, End: 00001234, Next: 00001238
 *          Debug start: 00000004, Debug end: 0000005A
 *          Flags: Frame Ptr Present
 * 
 * (001214)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001224)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (001234) S_END
 * 
 * (001238) S_GPROC32: [0001:00041B58], Cb: 00000070, Type:             0x141A, BtSetKeyControl
 *          Parent: 00000000, End: 00001298, Next: 0000129C
 *          Debug start: 00000004, Debug end: 0000006C
 *          Flags: Frame Ptr Present
 * 
 * (001270)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001280)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001298) S_END
 * 
 * (00129C) S_GPROC32: [0001:00041BC8], Cb: 00000070, Type:             0x141A, BtSetJoyControl
 *          Parent: 00000000, End: 000012FC, Next: 00001300
 *          Debug start: 00000004, Debug end: 0000006C
 *          Flags: Frame Ptr Present
 * 
 * (0012D4)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0012E4)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0012FC) S_END
 * 
 * (001300) S_GPROC32: [0001:00041C38], Cb: 00000053, Type:             0x141A, BtCancelToRoot
 *          Parent: 00000000, End: 00001360, Next: 00001364
 *          Debug start: 00000004, Debug end: 0000004F
 *          Flags: Frame Ptr Present
 * 
 * (001338)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001348)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001360) S_END
 * 
 * (001364) S_GPROC32: [0001:00041C8B], Cb: 0000008F, Type:             0x141A, BtChangeCam
 *          Parent: 00000000, End: 000013D0, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000008B
 *          Flags: Frame Ptr Present
 * 
 * (001398)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0013A8)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0013B8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0013D0) S_END
 * 
 * (0013D4) S_GDATA32: [0003:0007A0B8], Type:             0x1404, MenuObject
 * (0013F0) S_GDATA32: [0003:00931D80], Type:             0x142A, MenuText
 * (001408) S_GDATA32: [0003:0007A0AC], Type:             0x1404, GameWorldObject
 * (001428) S_GDATA32: [0003:0097C104], Type:             0x1418, Op
 * (00143C) S_GDATA32: [0003:0007A0E4], Type:      T_ULONG(0022), anawheel
 * (001454) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (001470) S_GDATA32: [0003:00947E6C], Type:      T_RCHAR(0070), LastKeyPress
 * (00148C) S_GDATA32: [0003:00947E64], Type:      T_RCHAR(0070), LastJoyPress
 * (0014A8) S_GDATA32: [0003:00947E28], Type:       T_INT4(0074), waitforkey
 * (0014C4) S_GDATA32: [0003:00947E60], Type:       T_INT4(0074), getkeycontrol
 * (0014E0) S_GDATA32: [0003:00947E20], Type:       T_INT4(0074), getjoycontrol
 * (0014FC) S_GDATA32: [0003:00947E24], Type:       T_LONG(0012), KC_SetVal
 * (001514) S_GDATA32: [0003:0091E08C], Type:      T_ULONG(0022), DI_JoysticksConnected
 * 
 */

