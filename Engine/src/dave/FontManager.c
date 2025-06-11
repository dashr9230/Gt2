
// File: C:\CodePrj\Gt2\Engine\src\dave\FontManager.c

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
 */

