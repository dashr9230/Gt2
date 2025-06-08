
// Original file: C:\CodePrj\Gt2\Game\src\Scavenger\menufont.c

/*
 * ModName: .\Debug\menufont.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\menufont.obj
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
 * (00008C) S_GPROC32: [0001:00053900], Cb: 00000005, Type:             0x1408, TextManager_Release
 *          Parent: 00000000, End: 000000D8, Next: 000000DC
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0000D8) S_END
 * 
 * (0000DC) S_GPROC32: [0001:00053905], Cb: 00000037, Type:             0x1408, TextManager_DestroyAllText
 *          Parent: 00000000, End: 00000140, Next: 00000144
 *          Debug start: 00000004, Debug end: 00000033
 *          Flags: Frame Ptr Present
 * 
 * (000120)  S_BPREL32: [00000008], Type:             0x1404, man
 * (000130)  S_BPREL32: [FFFFFFFC], Type:             0x1404, ptr
 * 
 * (000140) S_END
 * 
 * (000144) S_GPROC32: [0001:0005393C], Cb: 0000002E, Type:             0x1408, TextManager_DrawText
 *          Parent: 00000000, End: 000001A0, Next: 000001A4
 *          Debug start: 00000004, Debug end: 0000002A
 *          Flags: Frame Ptr Present
 * 
 * (000180)  S_BPREL32: [00000008], Type:             0x1404, BMo
 * (000190)  S_BPREL32: [FFFFFFFC], Type:             0x1404, ptr
 * 
 * (0001A0) S_END
 * 
 * (0001A4) S_GPROC32: [0001:0005396A], Cb: 00000076, Type:             0x1824, TextManager_Create
 *          Parent: 00000000, End: 00000200, Next: 00000204
 *          Debug start: 00000004, Debug end: 00000072
 *          Flags: Frame Ptr Present
 * 
 * (0001E0)  S_BPREL32: [FFFFFFFC], Type:             0x1404, TextManagerObject
 * 
 * (000200) S_END
 * 
 * (000204) S_GPROC32: [0001:000539E0], Cb: 0000002B, Type:             0x1408, Text_Draw
 *          Parent: 00000000, End: 0000025C, Next: 00000260
 *          Debug start: 00000004, Debug end: 00000027
 *          Flags: Frame Ptr Present
 * 
 * (000238)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000248)  S_BPREL32: [FFFFFFFC], Type:             0x1A23, tptr
 * 
 * (00025C) S_END
 * 
 * (000260) S_GPROC32: [0001:00053A0B], Cb: 00000034, Type:             0x1408, Text_Release
 *          Parent: 00000000, End: 000002B8, Next: 000002BC
 *          Debug start: 00000004, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (000294)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (0002A4)  S_BPREL32: [FFFFFFFC], Type:             0x1A23, tptr
 * 
 * (0002B8) S_END
 * 
 * (0002BC) S_GPROC32: [0001:00053A3F], Cb: 00000749, Type:             0x1A26, TextWrite
 *          Parent: 00000000, End: 00000448, Next: 0000044C
 *          Debug start: 00000009, Debug end: 00000745
 *          Flags: Frame Ptr Present
 * 
 * (0002F0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000300)  S_BPREL32: [0000000C], Type:             0x1A24, file
 * (000314)  S_BPREL32: [00000010], Type:     T_REAL32(0040), x
 * (000324)  S_BPREL32: [00000014], Type:     T_REAL32(0040), y
 * (000334)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), r
 * (000344)  S_BPREL32: [0000001C], Type:      T_UCHAR(0020), g
 * (000354)  S_BPREL32: [00000020], Type:      T_UCHAR(0020), b
 * (000364)  S_BPREL32: [00000024], Type:             0x16EA, Message
 * (000378)  S_BPREL32: [FFFFFF0C], Type:      T_ULONG(0022), m
 * (000388)  S_BPREL32: [FFFFFF10], Type:             0x1766, t2
 * (000398)  S_BPREL32: [FFFFFF14], Type:      T_RCHAR(0070), chr
 * (0003A8)  S_BPREL32: [FFFFFF18], Type:             0x1766, t1
 * (0003B8)  S_BPREL32: [FFFFFF1C], Type:             0x1413, temp
 * (0003CC)  S_BPREL32: [FFFFFF20], Type:             0x1404, TextObj
 * (0003E0)  S_BPREL32: [FFFFFF24], Type:             0x1A23, Text
 * (0003F4)  S_BPREL32: [FFFFFF28], Type:     T_REAL32(0040), inc
 * (000404)  S_BPREL32: [FFFFFF2C], Type:             0x1766, tdt
 * (000414)  S_BPREL32: [FFFFFF30], Type:             0x1413, last
 * (000428)  S_BPREL32: [FFFFFF34], Type:             0x1A27, str
 * (000438)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), p
 * 
 * (000448) S_END
 * 
 * (00044C) S_LPROC32: [0001:00054188], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 000004D0, Next: 000004D4
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (000480)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (000490)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (0004A0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (0004B0)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (0004C0)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0004D0) S_END
 * 
 * (0004D4) S_GPROC32: [0001:00054202], Cb: 000001AC, Type:             0x1A29, TextCalcLen
 *          Parent: 00000000, End: 000005D0, Next: 00000000
 *          Debug start: 00000009, Debug end: 000001A8
 *          Flags: Frame Ptr Present
 * 
 * (000508)  S_BPREL32: [00000008], Type:             0x1A24, file
 * (00051C)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), FormatString
 * (000538)  S_BPREL32: [FFFFFEE0], Type:      T_ULONG(0022), m
 * (000548)  S_BPREL32: [FFFFFEE4], Type:   T_32PRCHAR(0470), arglist
 * (00055C)  S_BPREL32: [FFFFFEE8], Type:             0x1766, t2
 * (00056C)  S_BPREL32: [FFFFFEEC], Type:      T_RCHAR(0070), chr
 * (00057C)  S_BPREL32: [FFFFFEF0], Type:             0x1766, t1
 * (00058C)  S_BPREL32: [FFFFFEF4], Type:     T_REAL32(0040), x
 * (00059C)  S_BPREL32: [FFFFFEF8], Type:             0x1766, tdt
 * (0005AC)  S_BPREL32: [FFFFFEFC], Type:             0x1A12, Message
 * (0005C0)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), p
 * 
 * (0005D0) S_END
 * 
 * (0005D4) S_GDATA32: [0003:00012DA8], Type:             0x1428, MenuFileList
 * (0005F0) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * 
 * ModName: .\Debug\menucontrol.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\menucontrol.obj
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
 * (000090) S_GPROC32: [0001:000535B0], Cb: 00000102, Type:             0x1001, MenuStartMouse
 *          Parent: 00000000, End: 000000F0, Next: 000000F4
 *          Debug start: 00000006, Debug end: 000000FE
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [FFFFFFF8], Type:             0x1766, tdt
 * (0000D8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0000F0) S_END
 * 
 * (0000F4) S_LPROC32: [0001:000536B2], Cb: 0000007A, Type:             0x182A, redistAlpha
 *          Parent: 00000000, End: 00000178, Next: 0000017C
 *          Debug start: 00000006, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (000128)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (000138)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), g
 * (000148)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), r
 * (000158)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (000168)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000178) S_END
 * 
 * (00017C) S_GPROC32: [0001:0005372C], Cb: 000001C8, Type:             0x1001, SetNewMousePos
 *          Parent: 00000000, End: 00000214, Next: 00000000
 *          Debug start: 00000006, Debug end: 000001C4
 *          Flags: Frame Ptr Present
 * 
 * (0001B4)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), i
 * (0001C4)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), mousey
 * (0001D8)  S_BPREL32: [FFFFFFF4], Type:             0x1766, tdt
 * (0001E8)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), mousex
 * (0001FC)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000214) S_END
 * 
 * (000218) S_GDATA32: [0003:0007A0B8], Type:             0x1404, MenuObject
 * (000234) S_GDATA32: [0003:00012DA8], Type:             0x1428, MenuFileList
 * (000250) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000268) S_GDATA32: [0003:0121EFC0], Type:             0x1A2B, Mouse
 * 
 */

