
// Original file: C:\CodePrj\Gt2\Engine\src\dave\FontManager.c

/*
 * ModName: .\Debug\FontManager.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\FontManager.obj
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
 * (000090) S_GPROC32: [0001:000912F0], Cb: 000000D9, Type:             0x1EEA, FONT_Allocate
 *          Parent: 00000000, End: 000000F0, Next: 000000F4
 *          Debug start: 00000006, Debug end: 000000D5
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), size
 * (0000DC)  S_BPREL32: [FFFFFFFC], Type:             0x1773, lpFont
 * 
 * (0000F0) S_END
 * 
 * (0000F4) S_GPROC32: [0001:000913C9], Cb: 0000014D, Type:             0x1EEC, FONT_Load
 *          Parent: 00000000, End: 000001E0, Next: 000001E4
 *          Debug start: 00000006, Debug end: 00000149
 *          Flags: Frame Ptr Present
 * 
 * (000128)  S_BPREL32: [00000008], Type:             0x1773, lpFont
 * (00013C)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), path
 * (000150)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), name
 * (000164)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), start
 * (000178)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), end
 * (000188)  S_BPREL32: [0000001C], Type:       T_INT4(0074), deferred
 * (0001A0)  S_BPREL32: [FFFFFFFC], Type:             0x1EED, lpPage
 * 
 * (0001B4)  S_BLOCK32: [0001:00091496], Cb: 0000002F, (none)
 *           Parent: 000000F4, End: 000001DC
 * 
 * (0001CC)   S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), fi
 * 
 * (0001DC)  S_END
 * 
 * (0001E0) S_END
 * 
 * (0001E4) S_GPROC32: [0001:00091516], Cb: 0000005F, Type:             0x1EEF, FONT_Release
 *          Parent: 00000000, End: 00000240, Next: 00000244
 *          Debug start: 00000004, Debug end: 0000005B
 *          Flags: Frame Ptr Present
 * 
 * (000218)  S_BPREL32: [00000008], Type:             0x1773, lpFont
 * (00022C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), page
 * 
 * (000240) S_END
 * 
 * (000244) S_GPROC32: [0001:00091575], Cb: 00000069, Type:             0x1EF1, FONT_FindPage
 *          Parent: 00000000, End: 000002B0, Next: 000002B4
 *          Debug start: 00000005, Debug end: 00000064
 *          Flags: Frame Ptr Present
 * 
 * (00027C)  S_BPREL32: [00000008], Type:             0x1773, lpFont
 * (000290)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), ch
 * (0002A0)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0002B0) S_END
 * 
 * (0002B4) S_GPROC32: [0001:000915DE], Cb: 000000B0, Type:             0x1EF3, FONT_Len
 *          Parent: 00000000, End: 00000378, Next: 0000037C
 *          Debug start: 00000006, Debug end: 000000AC
 *          Flags: Frame Ptr Present
 * 
 * (0002E4)  S_BPREL32: [00000008], Type:             0x1773, lpFont
 * (0002F8)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), str
 * (000308)  S_BPREL32: [FFFFFFE8], Type:   T_32PRCHAR(0470), lpch
 * (00031C)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), len
 * (00032C)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), page
 * (000340)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), ch
 * (000350)  S_BPREL32: [FFFFFFF8], Type:             0x1766, tdtf
 * (000364)  S_BPREL32: [FFFFFFFC], Type:             0x1EED, lpPage
 * 
 * (000378) S_END
 * 
 * (00037C) S_GPROC32: [0001:0009168E], Cb: 00000055, Type:             0x1EF5, FONT_Printf
 *          Parent: 00000000, End: 00000428, Next: 0000042C
 *          Debug start: 00000009, Debug end: 00000051
 *          Flags: Frame Ptr Present
 * 
 * (0003B0)  S_BPREL32: [00000008], Type:             0x1773, lpFont
 * (0003C4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (0003D4)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (0003E4)  S_BPREL32: [00000014], Type:             0x16EA, FormatString
 * (000400)  S_BPREL32: [FFFFFEFC], Type:   T_32PRCHAR(0470), arglist
 * (000414)  S_BPREL32: [FFFFFF00], Type:             0x1A12, buffer
 * 
 * (000428) S_END
 * 
 * (00042C) S_GPROC32: [0001:000916E3], Cb: 0000027F, Type:             0x1EF7, FONT_Print
 *          Parent: 00000000, End: 00000560, Next: 00000564
 *          Debug start: 00000006, Debug end: 0000027B
 *          Flags: Frame Ptr Present
 * 
 * (000460)  S_BPREL32: [00000008], Type:             0x1773, lpFont
 * (000474)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000484)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000494)  S_BPREL32: [00000014], Type:   T_32PRCHAR(0470), str
 * (0004A4)  S_BPREL32: [FFFFFFD8], Type:   T_32PRCHAR(0470), lpch
 * (0004B8)  S_BPREL32: [FFFFFFDC], Type:      T_ULONG(0022), page
 * (0004CC)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), len
 * (0004DC)  S_BPREL32: [FFFFFFE4], Type:             0x13A0, tex
 * (0004EC)  S_BPREL32: [FFFFFFE8], Type:      T_UCHAR(0020), ch
 * (0004FC)  S_BPREL32: [FFFFFFEC], Type:             0x1766, tdtf
 * (000510)  S_BPREL32: [FFFFFFF0], Type:             0x1EED, lpPage
 * (000524)  S_BPREL32: [FFFFFFF4], Type:             0x1413, prim
 * (000538)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), ypos
 * (00054C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), xpos
 * 
 * (000560) S_END
 * 
 * (000564) S_GPROC32: [0001:00091962], Cb: 00000082, Type:             0x1EEF, FONT_Flush
 *          Parent: 00000000, End: 000005BC, Next: 000005C0
 *          Debug start: 00000004, Debug end: 0000007E
 *          Flags: Frame Ptr Present
 * 
 * (000598)  S_BPREL32: [00000008], Type:             0x1773, lpFont
 * (0005AC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0005BC) S_END
 * 
 * (0005C0) S_LPROC32: [0001:000919E4], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000644, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (0005F4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (000604)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (000614)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (000624)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (000634)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000644) S_END
 * 
 * (000648) S_GDATA32: [0003:0099D280], Type:             0x1A44, Filez
 * (00065C) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * 
 * ModName: .\Debug\video.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\video.obj
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
 * (00008C) S_GPROC32: [0001:0008E3E0], Cb: 00000202, Type:             0x16D8, AdvancedDlg
 *          Parent: 00000000, End: 00000140, Next: 00000144
 *          Debug start: 00000006, Debug end: 000001FC
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x102A, thWnd
 * (0000D4)  S_BPREL32: [0000000C], Type:      T_UINT4(0075), message
 * (0000E8)  S_BPREL32: [00000010], Type:      T_UINT4(0075), wParam
 * (0000FC)  S_BPREL32: [00000014], Type:       T_LONG(0012), lParam
 * (000110)  S_LDATA32: [0003:00931774], Type:             0x1A51, Selection
 * (000128)  S_LDATA32: [0003:00931770], Type:             0x1EB9, VProfile
 * 
 * (000140) S_END
 * 
 * (000144) S_GPROC32: [0001:0008E5E2], Cb: 0000051C, Type:             0x16D8, SelectDlg
 *          Parent: 00000000, End: 00000278, Next: 0000027C
 *          Debug start: 00000006, Debug end: 00000516
 *          Flags: Frame Ptr Present
 * 
 * (000178)  S_BPREL32: [00000008], Type:             0x102A, thWnd
 * (00018C)  S_BPREL32: [0000000C], Type:      T_UINT4(0075), message
 * (0001A0)  S_BPREL32: [00000010], Type:      T_UINT4(0075), wParam
 * (0001B4)  S_BPREL32: [00000014], Type:       T_LONG(0012), lParam
 * (0001C8)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), Mode
 * (0001DC)  S_LDATA32: [0003:0093177C], Type:             0x1A51, Selection
 * (0001F4)  S_LDATA32: [0003:00931778], Type:             0x1EB9, VProfile
 * (00020C)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), ypos
 * (000220)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), xpos
 * (000234)  S_BPREL32: [FFFFFFF0], Type:             0x1016, mainarea
 * 
 * (00024C)  S_BLOCK32: [0001:0008E62B], Cb: 00000136, (none)
 *           Parent: 00000144, End: 00000274
 * 
 * (000264)   S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), a
 * 
 * (000274)  S_END
 * 
 * (000278) S_END
 * 
 * (00027C) S_LPROC32: [0001:0008EAFE], Cb: 00000045, Type:             0x1EF9, StoreDetail
 *          Parent: 00000000, End: 000002EC, Next: 000002F0
 *          Debug start: 00000004, Debug end: 00000041
 *          Flags: Frame Ptr Present
 * 
 * (0002B0)  S_BPREL32: [00000008], Type:             0x102A, thWnd
 * (0002C4)  S_BPREL32: [0000000C], Type:             0x1A51, Selection
 * (0002DC)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Sel
 * 
 * (0002EC) S_END
 * 
 * (0002F0) S_LPROC32: [0001:0008EB43], Cb: 000002B0, Type:             0x1EFB, SetComboResList
 *          Parent: 00000000, End: 000003F8, Next: 000003FC
 *          Debug start: 00000009, Debug end: 000002AC
 *          Flags: Frame Ptr Present
 * 
 * (000328)  S_BPREL32: [00000008], Type:             0x102A, thWnd
 * (00033C)  S_BPREL32: [0000000C], Type:             0x1EB9, VProfile
 * (000354)  S_BPREL32: [00000010], Type:             0x1A51, Selection
 * (00036C)  S_BPREL32: [FFFFFEE8], Type:             0x1EC4, lpVidMode
 * (000384)  S_BPREL32: [FFFFFEEC], Type:   T_32PRCHAR(0470), Name
 * (000398)  S_BPREL32: [FFFFFEF0], Type:      T_ULONG(0022), Num
 * (0003A8)  S_BPREL32: [FFFFFEF4], Type:             0x1EC7, lpCard
 * (0003BC)  S_BPREL32: [FFFFFEF8], Type:      T_ULONG(0022), UserMode
 * (0003D4)  S_BPREL32: [FFFFFEFC], Type:      T_ULONG(0022), a
 * (0003E4)  S_BPREL32: [FFFFFF00], Type:             0x1A12, Buffer
 * 
 * (0003F8) S_END
 * 
 * (0003FC) S_GPROC32: [0001:0008EDF3], Cb: 00000250, Type:             0x1EFD, VIDEO_SelectDriver
 *          Parent: 00000000, End: 000004B0, Next: 000004B4
 *          Debug start: 0000000D, Debug end: 0000024C
 *          Flags: Frame Ptr Present
 * 
 * (000438)  S_BPREL32: [00000008], Type:             0x15C5, hInstance
 * (000450)  S_BPREL32: [FFFFD648], Type:             0x1EB8, CurVProfile
 * (000468)  S_BPREL32: [FFFFFFF0], Type:       T_INT4(0074), skip
 * (00047C)  S_BPREL32: [FFFFFFF4], Type:             0x1834, fh
 * (00048C)  S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), RetVal
 * (0004A0)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Err
 * 
 * (0004B0) S_END
 * 
 * (0004B4) S_LPROC32: [0001:0008F043], Cb: 0000008B, Type:             0x1F03, VIDEO_Initialise
 *          Parent: 00000000, End: 00000500, Next: 00000504
 *          Debug start: 00000003, Debug end: 00000089
 *          Flags: Frame Ptr Present
 * 
 * (0004EC)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000500) S_END
 * 
 * (000504) S_LPROC32: [0001:0008F0CE], Cb: 0000018F, Type:             0x17B2, enumCurVProfileCB
 *          Parent: 00000000, End: 00000670, Next: 00000674
 *          Debug start: 00000009, Debug end: 00000189
 *          Flags: Frame Ptr Present
 * 
 * (000540)  S_BPREL32: [00000008], Type:             0x1044, lpGUID
 * (000554)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), lpDriverDesc
 * (000570)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), lpDriverName
 * (00058C)  S_BPREL32: [00000014], Type:    T_32PVOID(0403), lpProfileInfo
 * (0005A8)  S_BPREL32: [FFFFFFEC], Type:             0x160C, lpDD4
 * (0005BC)  S_BPREL32: [FFFFFFF0], Type:             0x1EC7, lpCard
 * (0005D0)  S_BPREL32: [FFFFFFF4], Type:             0x109D, lpDD
 * (0005E4)  S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), Res
 * (0005F4)  S_BPREL32: [FFFFFFFC], Type:             0x1EB9, lpProfile
 * 
 * (00060C)  S_BLOCK32: [0001:0008F144], Cb: 00000102, (none)
 *           Parent: 00000504, End: 0000066C
 * 
 * (000624)   S_BPREL32: [FFFFFE70], Type:             0x1042, DDCaps
 * 
 * (000638)   S_BLOCK32: [0001:0008F197], Cb: 000000A3, (none)
 *            Parent: 0000060C, End: 00000668
 * 
 * (000650)    S_BPREL32: [FFFFFA48], Type:             0x1541, DeviceInfo
 * 
 * (000668)   S_END
 * 
 * (00066C)  S_END
 * 
 * (000670) S_END
 * 
 * (000674) S_GPROC32: [0001:0008F25D], Cb: 00000C2B, Type:             0x1F04, VIDEO_Create3dScreen
 *          Parent: 00000000, End: 000007B4, Next: 000007B8
 *          Debug start: 00000006, Debug end: 00000C27
 *          Flags: Frame Ptr Present
 * 
 * (0006B0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Width
 * (0006C4)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Height
 * (0006D8)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), GStep
 * (0006EC)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), G
 * (0006FC)  S_BPREL32: [FFFFFFE8], Type:       T_INT4(0074), Res
 * (00070C)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), RStep
 * (000720)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), R
 * (000730)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), B
 * (000740)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), BStep
 * (000754)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000764)  S_BLOCK32: [0001:0008F309], Cb: 000000A6, (none)
 *           Parent: 00000674, End: 000007B0
 * 
 * (00077C)   S_BPREL32: [FFFFFFC8], Type:             0x1016, WinArea
 * (000790)   S_BPREL32: [FFFFFFD8], Type:       T_LONG(0012), cy
 * (0007A0)   S_BPREL32: [FFFFFFDC], Type:       T_LONG(0012), cx
 * 
 * (0007B0)  S_END
 * 
 * (0007B4) S_END
 * 
 * (0007B8) S_LPROC32: [0001:0008FE88], Cb: 00000177, Type:             0x1F06, VIDEO_CreateDirectDraw
 *          Parent: 00000000, End: 0000084C, Next: 00000850
 *          Debug start: 00000004, Debug end: 00000173
 *          Flags: Frame Ptr Present
 * 
 * (0007F8)  S_BPREL32: [00000008], Type:             0x1044, Guid
 * (00080C)  S_BPREL32: [0000000C], Type:             0x1F01, Screen
 * 
 * (000820)  S_BLOCK32: [0001:0008FEAB], Cb: 0000002E, (none)
 *           Parent: 000007B8, End: 00000848
 * 
 * (000838)   S_BPREL32: [FFFFFFFC], Type:   T_32PULONG(0422), Ptr
 * 
 * (000848)  S_END
 * 
 * (00084C) S_END
 * 
 * (000850) S_LPROC32: [0001:0008FFFF], Cb: 000000CA, Type:             0x1F07, VIDEO_SetCooperativeLevel
 *          Parent: 00000000, End: 000008C0, Next: 000008C4
 *          Debug start: 00000004, Debug end: 000000C6
 *          Flags: Frame Ptr Present
 * 
 * (000894)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * (0008A8)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), dwCoopFlags
 * 
 * (0008C0) S_END
 * 
 * (0008C4) S_LPROC32: [0001:000900C9], Cb: 00000079, Type:             0x1F07, VIDEO_CreateDirect3D
 *          Parent: 00000000, End: 00000914, Next: 00000918
 *          Debug start: 00000003, Debug end: 00000077
 *          Flags: Frame Ptr Present
 * 
 * (000900)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000914) S_END
 * 
 * (000918) S_LPROC32: [0001:00090142], Cb: 00000086, Type:             0x1F07, VIDEO_SetResolution
 *          Parent: 00000000, End: 00000968, Next: 0000096C
 *          Debug start: 00000003, Debug end: 00000084
 *          Flags: Frame Ptr Present
 * 
 * (000954)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000968) S_END
 * 
 * (00096C) S_LPROC32: [0001:000901C8], Cb: 000001E9, Type:             0x1F07, VIDEO_CreateDisplaySurfaces
 *          Parent: 00000000, End: 00000A20, Next: 00000A24
 *          Debug start: 00000009, Debug end: 000001E5
 *          Flags: Frame Ptr Present
 * 
 * (0009B0)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * (0009C4)  S_BPREL32: [FFFFFF20], Type:             0x112A, ddsd
 * (0009D8)  S_BPREL32: [FFFFFF9C], Type:             0x104B, ddbfx
 * 
 * (0009EC)  S_BLOCK32: [0001:000902B2], Cb: 000000A5, (none)
 *           Parent: 0000096C, End: 00000A1C
 * 
 * (000A04)   S_BPREL32: [FFFFFF1C], Type:             0x1088, lpClipper
 * 
 * (000A1C)  S_END
 * 
 * (000A20) S_END
 * 
 * (000A24) S_LPROC32: [0001:000903B1], Cb: 000001A1, Type:             0x1F07, VIDEO_CreateBackBuffer
 *          Parent: 00000000, End: 00000AD0, Next: 00000AD4
 *          Debug start: 00000009, Debug end: 0000019D
 *          Flags: Frame Ptr Present
 * 
 * (000A64)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * (000A78)  S_BPREL32: [FFFFFF8C], Type:             0x1040, ddscaps
 * (000A8C)  S_BPREL32: [FFFFFF9C], Type:             0x104B, ddbfx
 * 
 * (000AA0)  S_BLOCK32: [0001:000903D7], Cb: 000000AE, (none)
 *           Parent: 00000A24, End: 00000ACC
 * 
 * (000AB8)   S_BPREL32: [FFFFFF10], Type:             0x112A, ddsd
 * 
 * (000ACC)  S_END
 * 
 * (000AD0) S_END
 * 
 * (000AD4) S_LPROC32: [0001:00090552], Cb: 000000DE, Type:             0x1F07, VIDEO_GetZBufferFormat
 *          Parent: 00000000, End: 00000B54, Next: 00000B58
 *          Debug start: 00000004, Debug end: 000000DA
 *          Flags: Frame Ptr Present
 * 
 * (000B14)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000B28)  S_BLOCK32: [0001:000905ED], Cb: 0000003A, (none)
 *           Parent: 00000AD4, End: 00000B50
 * 
 * (000B40)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000B50)  S_END
 * 
 * (000B54) S_END
 * 
 * (000B58) S_LPROC32: [0001:00090630], Cb: 00000069, Type:             0x146D, enumZBufferFormatsCB
 *          Parent: 00000000, End: 00000BD4, Next: 00000BD8
 *          Debug start: 00000004, Debug end: 00000063
 *          Flags: Frame Ptr Present
 * 
 * (000B94)  S_BPREL32: [00000008], Type:             0x1049, pddpf
 * (000BA8)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), lpScreen
 * (000BC0)  S_BPREL32: [FFFFFFFC], Type:             0x1F01, Screen
 * 
 * (000BD4) S_END
 * 
 * (000BD8) S_LPROC32: [0001:00090699], Cb: 0000026B, Type:             0x1F07, VIDEO_CreateZBuffer
 *          Parent: 00000000, End: 00000C98, Next: 00000C9C
 *          Debug start: 00000009, Debug end: 00000267
 *          Flags: Frame Ptr Present
 * 
 * (000C14)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * (000C28)  S_BPREL32: [FFFFFF84], Type:             0x112A, ddsd
 * 
 * (000C3C)  S_BLOCK32: [0001:0009070E], Cb: 00000048, (none)
 *           Parent: 00000BD8, End: 00000C68
 * 
 * (000C54)   S_BPREL32: [FFFFFF08], Type:             0x112A, sddsd
 * 
 * (000C68)  S_END
 * 
 * (000C6C)  S_BLOCK32: [0001:00090793], Cb: 00000162, (none)
 *           Parent: 00000BD8, End: 00000C94
 * 
 * (000C84)   S_BPREL32: [FFFFFF04], Type:      T_ULONG(0022), a
 * 
 * (000C94)  S_END
 * 
 * (000C98) S_END
 * 
 * (000C9C) S_LPROC32: [0001:00090904], Cb: 000000CA, Type:             0x1F07, VIDEO_CreateD3Device
 *          Parent: 00000000, End: 00000CEC, Next: 00000CF0
 *          Debug start: 00000003, Debug end: 000000C8
 *          Flags: Frame Ptr Present
 * 
 * (000CD8)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000CEC) S_END
 * 
 * (000CF0) S_LPROC32: [0001:000909CE], Cb: 000000CF, Type:             0x1F07, VIDEO_GetD3DeviceInfo
 *          Parent: 00000000, End: 00000D58, Next: 00000D5C
 *          Debug start: 00000009, Debug end: 000000CB
 *          Flags: Frame Ptr Present
 * 
 * (000D30)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * (000D44)  S_BPREL32: [FFFFFF04], Type:             0x11A6, Soft
 * 
 * (000D58) S_END
 * 
 * (000D5C) S_LPROC32: [0001:00090A9D], Cb: 00000146, Type:             0x1F07, VIDEO_GetTextureFormat
 *          Parent: 00000000, End: 00000DDC, Next: 00000DE0
 *          Debug start: 00000004, Debug end: 00000142
 *          Flags: Frame Ptr Present
 * 
 * (000D9C)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000DB0)  S_BLOCK32: [0001:00090B2E], Cb: 000000AC, (none)
 *           Parent: 00000D5C, End: 00000DD8
 * 
 * (000DC8)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000DD8)  S_END
 * 
 * (000DDC) S_END
 * 
 * (000DE0) S_LPROC32: [0001:00090BE3], Cb: 000002D3, Type:             0x146D, enumTextureFormatsCB
 *          Parent: 00000000, End: 00000E94, Next: 00000E98
 *          Debug start: 00000006, Debug end: 000002CD
 *          Flags: Frame Ptr Present
 * 
 * (000E1C)  S_BPREL32: [00000008], Type:             0x1049, lpDDPixFmt
 * (000E34)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), lpScreen
 * (000E4C)  S_BPREL32: [FFFFFFFC], Type:             0x1F01, Screen
 * 
 * (000E60)  S_BLOCK32: [0001:00090E9B], Cb: 00000010, (none)
 *           Parent: 00000DE0, End: 00000E90
 * 
 * (000E78)   S_BPREL32: [FFFFFFF8], Type:       T_INT4(0074), Prefer32Bit
 * 
 * (000E90)  S_END
 * 
 * (000E94) S_END
 * 
 * (000E98) S_GPROC32: [0001:00090EB6], Cb: 000000E3, Type:             0x1001, VIDEO_Close3dScreen
 *          Parent: 00000000, End: 00000ED4, Next: 00000ED8
 *          Debug start: 00000003, Debug end: 000000E1
 *          Flags: Frame Ptr Present
 * 
 * (000ED4) S_END
 * 
 * (000ED8) S_LPROC32: [0001:00090F99], Cb: 000000B8, Type:             0x1F07, VIDEO_DestroyDirectDraw
 *          Parent: 00000000, End: 00000F2C, Next: 00000F30
 *          Debug start: 00000003, Debug end: 000000B6
 *          Flags: Frame Ptr Present
 * 
 * (000F18)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000F2C) S_END
 * 
 * (000F30) S_LPROC32: [0001:00091051], Cb: 00000049, Type:             0x1F07, VIDEO_DestroyDirect3D
 *          Parent: 00000000, End: 00000F84, Next: 00000F88
 *          Debug start: 00000003, Debug end: 00000047
 *          Flags: Frame Ptr Present
 * 
 * (000F70)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000F84) S_END
 * 
 * (000F88) S_LPROC32: [0001:0009109A], Cb: 0000006C, Type:             0x1F07, VIDEO_RestoreDefaultResolution
 *          Parent: 00000000, End: 00000FE4, Next: 00000FE8
 *          Debug start: 00000003, Debug end: 0000006A
 *          Flags: Frame Ptr Present
 * 
 * (000FD0)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (000FE4) S_END
 * 
 * (000FE8) S_LPROC32: [0001:00091106], Cb: 00000049, Type:             0x1F07, VIDEO_DestroyDisplaySurfaces
 *          Parent: 00000000, End: 00001040, Next: 00001044
 *          Debug start: 00000003, Debug end: 00000047
 *          Flags: Frame Ptr Present
 * 
 * (00102C)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (001040) S_END
 * 
 * (001044) S_LPROC32: [0001:0009114F], Cb: 00000037, Type:             0x1F07, VIDEO_DestroyBackBuffer
 *          Parent: 00000000, End: 00001098, Next: 0000109C
 *          Debug start: 00000003, Debug end: 00000035
 *          Flags: Frame Ptr Present
 * 
 * (001084)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (001098) S_END
 * 
 * (00109C) S_LPROC32: [0001:00091186], Cb: 00000064, Type:             0x1F07, VIDEO_DestroyZBuffer
 *          Parent: 00000000, End: 000010EC, Next: 000010F0
 *          Debug start: 00000003, Debug end: 00000062
 *          Flags: Frame Ptr Present
 * 
 * (0010D8)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (0010EC) S_END
 * 
 * (0010F0) S_LPROC32: [0001:000911EA], Cb: 00000049, Type:             0x1F07, VIDEO_DestroyD3Device
 *          Parent: 00000000, End: 00001144, Next: 00001148
 *          Debug start: 00000003, Debug end: 00000047
 *          Flags: Frame Ptr Present
 * 
 * (001130)  S_BPREL32: [00000008], Type:             0x1F01, Screen
 * 
 * (001144) S_END
 * 
 * (001148) S_GPROC32: [0001:00091233], Cb: 0000004C, Type:             0x1F08, VIDEO_Restore
 *          Parent: 00000000, End: 00001180, Next: 00001184
 *          Debug start: 00000003, Debug end: 0000004A
 *          Flags: Frame Ptr Present
 * 
 * (001180) S_END
 * 
 * (001184) S_GPROC32: [0001:0009127F], Cb: 0000000A, Type:             0x1F04, VIDEO_ChangeResolution
 *          Parent: 00000000, End: 000011F4, Next: 000011F8
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (0011C4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), NewWidth
 * (0011DC)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), NewHeight
 * 
 * (0011F4) S_END
 * 
 * (0011F8) S_GPROC32: [0001:00091289], Cb: 0000004D, Type:             0x1001, VIDEO_ClrScreen
 *          Parent: 00000000, End: 00001244, Next: 00001248
 *          Debug start: 00000006, Debug end: 00000049
 *          Flags: Frame Ptr Present
 * 
 * (001230)  S_BPREL32: [FFFFFF9C], Type:             0x104B, ddbfx
 * 
 * (001244) S_END
 * 
 * (001248) S_GPROC32: [0001:000912D6], Cb: 00000014, Type:             0x1001, VIDEO_ClrAllScreens
 *          Parent: 00000000, End: 00001284, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (001284) S_END
 * 
 * (001288) S_GDATA32: [0003:00C30FBC], Type:             0x15C5, hInstMain
 * (0012A0) S_GDATA32: [0003:00C30FB8], Type:             0x102A, hWndMain
 * (0012B8) S_GDATA32: [0003:00931780], Type:      T_ULONG(0022), SystemActive
 * (0012D4) S_GDATA32: [0002:00000818], Type:             0x1011, IID_IDirectDraw4
 * (0012F4) S_GDATA32: [0003:00931A00], Type:       T_INT4(0074), __argc
 * (00130C) S_GDATA32: [0003:00931A04], Type:             0x171D, __argv
 * (001324) S_GDATA32: [0003:00C30DE0], Type:             0x1A4F, SysConfig
 * (00133C) S_GDATA32: [0003:00C2E420], Type:             0x1EB8, VideoProfile
 * (001358) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (001370) S_GDATA32: [0002:00000B38], Type:             0x1011, IID_IDirect3D3
 * (001390) S_GDATA32: [0002:00000B58], Type:             0x1011, IID_IDirect3DRGBDevice
 * (0013B8) S_GDATA32: [0002:00000B68], Type:             0x1011, IID_IDirect3DHALDevice
 * (0013E0) S_GDATA32: [0002:00000B78], Type:             0x1011, IID_IDirect3DMMXDevice
 * (001408) S_LDATA32: [0003:0093176C], Type:       T_INT4(0074), CustomSettings
 * (001428) S_GDATA32: [0003:00C30FE0], Type:             0x1F00, Screen
 * (001440) S_LDATA32: [0002:00002128], Type:             0x1F09, VideoDriver
 * 
 */

