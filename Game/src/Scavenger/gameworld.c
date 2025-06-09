
// Original file: C:\CodePrj\Gt2\Game\src\Scavenger\gameworld.c

/*
 * ModName: .\Debug\gameworld.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\gameworld.obj
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
 * (00008C) S_GPROC32: [0001:0004E130], Cb: 000000BE, Type:             0x1408, GameWorld_Release
 *          Parent: 00000000, End: 000000F8, Next: 000000FC
 *          Debug start: 00000006, Debug end: 000000BA
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (0000D8)  S_BPREL32: [FFFFFFF8], Type:             0x180B, GwD
 * (0000E8)  S_BPREL32: [FFFFFFFC], Type:             0x1834, f
 * 
 * (0000F8) S_END
 * 
 * (0000FC) S_GPROC32: [0001:0004E1EE], Cb: 0000114D, Type:             0x1001, GameWorld_Create
 *          Parent: 00000000, End: 00000208, Next: 0000020C
 *          Debug start: 00000006, Debug end: 00001139
 *          Flags: Frame Ptr Present
 * 
 * (000134)  S_LDATA32: [0001:0004F32B], Type:     T_NOTYPE(0000), (none)
 * (000144)  S_LABEL32: [0001:0004ECE7], $L84374
 * (000158)  S_LABEL32: [0001:0004ED8D], $L84375
 * (00016C)  S_LABEL32: [0001:0004EE33], $L84376
 * (000180)  S_LABEL32: [0001:0004EED9], $L84377
 * (000194)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), k
 * (0001A4)  S_BPREL32: [FFFFFFF4], Type:             0x180B, GwD
 * (0001B4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (0001C4)  S_BPREL32: [FFFFFFFC], Type:             0x1834, f
 * 
 * (0001D4)  S_BLOCK32: [0001:0004F166], Cb: 000000D7, (none)
 *           Parent: 000000FC, End: 00000204
 * 
 * (0001EC)   S_BPREL32: [FFFFFFEC], Type:             0x1A4B, lpDefaults
 * 
 * (000204)  S_END
 * 
 * (000208) S_END
 * 
 * (00020C) S_GPROC32: [0001:0004F33B], Cb: 000003BD, Type:             0x1001, GameWorld_SetVariables
 *          Parent: 00000000, End: 0000027C, Next: 00000280
 *          Debug start: 00000007, Debug end: 000003B8
 *          Flags: Frame Ptr Present
 * 
 * (00024C)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), j
 * (00025C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, GwD
 * (00026C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (00027C) S_END
 * 
 * (000280) S_GPROC32: [0001:0004F6F8], Cb: 0000001D, Type:             0x1001, GameWorld_Destroy
 *          Parent: 00000000, End: 000002BC, Next: 000002C0
 *          Debug start: 00000003, Debug end: 0000001B
 *          Flags: Frame Ptr Present
 * 
 * (0002BC) S_END
 * 
 * (0002C0) S_GPROC32: [0001:0004F715], Cb: 0000006A, Type:             0x1001, GameWorld_ResetCompetitionsToDefault
 *          Parent: 00000000, End: 0000032C, Next: 00000330
 *          Debug start: 00000006, Debug end: 00000066
 *          Flags: Frame Ptr Present
 * 
 * (00030C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, GwD
 * (00031C)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), i
 * 
 * (00032C) S_END
 * 
 * (000330) S_GPROC32: [0001:0004F77F], Cb: 000000F7, Type:             0x16A1, GameWorld_CompetitionDump
 *          Parent: 00000000, End: 00000394, Next: 00000398
 *          Debug start: 00000004, Debug end: 000000F3
 *          Flags: Frame Ptr Present
 * 
 * (000374)  S_BPREL32: [00000008], Type:      T_ULONG(0022), i
 * (000384)  S_BPREL32: [FFFFFFFC], Type:             0x180B, GwD
 * 
 * (000394) S_END
 * 
 * (000398) S_GPROC32: [0001:0004F876], Cb: 00000211, Type:             0x1A4D, GameWorld_CreateCompetition
 *          Parent: 00000000, End: 000004DC, Next: 000004E0
 *          Debug start: 00000007, Debug end: 0000020C
 *          Flags: Frame Ptr Present
 * 
 * (0003DC)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), name
 * (0003F0)  S_BPREL32: [0000000C], Type:       T_INT4(0074), stage
 * (000404)  S_BPREL32: [00000010], Type:       T_INT4(0074), numCarTypes
 * (00041C)  S_BPREL32: [00000014], Type:   T_32PULONG(0422), CarTypes
 * (000434)  S_BPREL32: [00000018], Type:       T_INT4(0074), numTracks
 * (00044C)  S_BPREL32: [0000001C], Type:   T_32PULONG(0422), trackNums
 * (000464)  S_BPREL32: [00000020], Type:   T_32PULONG(0422), trackLaps
 * (00047C)  S_BPREL32: [00000024], Type:      T_ULONG(0022), CompType
 * (000494)  S_BPREL32: [00000028], Type:      T_ULONG(0022), TexPage
 * (0004A8)  S_BPREL32: [0000002C], Type:      T_ULONG(0022), TexID
 * (0004BC)  S_BPREL32: [FFFFFFF8], Type:             0x180B, GwD
 * (0004CC)  S_BPREL32: [FFFFFFFC], Type:       T_INT4(0074), c
 * 
 * (0004DC) S_END
 * 
 * (0004E0) S_GPROC32: [0001:0004FA87], Cb: 000000BB, Type:             0x16A1, GameWorld_CreateEmptySlot
 *          Parent: 00000000, End: 00000564, Next: 00000568
 *          Debug start: 00000006, Debug end: 000000B7
 *          Flags: Frame Ptr Present
 * 
 * (000524)  S_BPREL32: [00000008], Type:      T_ULONG(0022), num
 * (000534)  S_BPREL32: [FFFFFF94], Type:             0x180B, GwD
 * (000544)  S_BPREL32: [FFFFFF98], Type:             0x1834, s
 * (000554)  S_BPREL32: [FFFFFF9C], Type:             0x1429, str
 * 
 * (000564) S_END
 * 
 * (000568) S_GPROC32: [0001:0004FB42], Cb: 000000C2, Type:             0x1001, GameWorld_RetrieveSlots
 *          Parent: 00000000, End: 000005E8, Next: 00000000
 *          Debug start: 00000006, Debug end: 000000BE
 *          Flags: Frame Ptr Present
 * 
 * (0005A8)  S_BPREL32: [FFFFFF90], Type:             0x180B, GwD
 * (0005B8)  S_BPREL32: [FFFFFF94], Type:             0x1834, f
 * (0005C8)  S_BPREL32: [FFFFFF98], Type:      T_ULONG(0022), c
 * (0005D8)  S_BPREL32: [FFFFFF9C], Type:             0x1429, str
 * 
 * (0005E8) S_END
 * 
 * (0005EC) S_GDATA32: [0003:00C30DE0], Type:             0x1A4F, SysConfig
 * (000604) S_GDATA32: [0003:00012B78], Type:             0x1A50, SLOTLOCATION
 * (000620) S_GDATA32: [0003:00992AC0], Type:             0x1820, Drivers
 * (000638) S_GDATA32: [0003:0007A0AC], Type:             0x1404, GameWorldObject
 * (000658) S_GDATA32: [0003:00931D80], Type:             0x142A, MenuText
 * (000670) S_GDATA32: [0003:0006E9F8], Type:             0x183B, MSS_SfxVolumes
 * (000690) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * (0006B0) S_GDATA32: [0003:0091E08C], Type:      T_ULONG(0022), DI_JoysticksConnected
 * 
 * ModName: .\Debug\frame.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\frame.obj
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
 * (000088) S_GPROC32: [0001:0004DC80], Cb: 00000091, Type:             0x1408, Frame_Release
 *          Parent: 00000000, End: 000000E8, Next: 000000EC
 *          Debug start: 00000004, Debug end: 0000008D
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (0000D0)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (0000E8) S_END
 * 
 * (0000EC) S_GPROC32: [0001:0004DD11], Cb: 000000D7, Type:             0x1824, Frame_Create
 *          Parent: 00000000, End: 00000150, Next: 00000154
 *          Debug start: 00000006, Debug end: 000000D3
 *          Flags: Frame Ptr Present
 * 
 * (000120)  S_BPREL32: [FFFFFFF8], Type:             0x1A54, FrameData
 * (000138)  S_BPREL32: [FFFFFFFC], Type:             0x1404, FrameObject
 * 
 * (000150) S_END
 * 
 * (000154) S_GPROC32: [0001:0004DDE8], Cb: 0000001D, Type:             0x1A56, Frame_SetDrawOrder
 *          Parent: 00000000, End: 000001CC, Next: 000001D0
 *          Debug start: 00000004, Debug end: 00000019
 *          Flags: Frame Ptr Present
 * 
 * (000190)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0001A0)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), State
 * (0001B4)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (0001CC) S_END
 * 
 * (0001D0) S_GPROC32: [0001:0004DE05], Cb: 00000080, Type:             0x1408, Frame_Draw
 *          Parent: 00000000, End: 0000022C, Next: 00000230
 *          Debug start: 00000004, Debug end: 0000007C
 *          Flags: Frame Ptr Present
 * 
 * (000204)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000214)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (00022C) S_END
 * 
 * (000230) S_GPROC32: [0001:0004DE85], Cb: 00000047, Type:             0x1826, Frame_CreatePoly
 *          Parent: 00000000, End: 00000324, Next: 00000328
 *          Debug start: 00000004, Debug end: 00000043
 *          Flags: Frame Ptr Present
 * 
 * (000268)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (00027C)  S_BPREL32: [0000000C], Type:             0x13A0, tex
 * (00028C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLx
 * (00029C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), TLy
 * (0002AC)  S_BPREL32: [00000018], Type:     T_REAL32(0040), BRx
 * (0002BC)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), BRy
 * (0002CC)  S_BPREL32: [00000020], Type:     T_REAL32(0040), x0
 * (0002DC)  S_BPREL32: [00000024], Type:     T_REAL32(0040), y0
 * (0002EC)  S_BPREL32: [00000028], Type:     T_REAL32(0040), x2
 * (0002FC)  S_BPREL32: [0000002C], Type:     T_REAL32(0040), y2
 * (00030C)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000324) S_END
 * 
 * (000328) S_GPROC32: [0001:0004DECC], Cb: 00000043, Type:             0x182C, Frame_CreateFlatPoly
 *          Parent: 00000000, End: 00000410, Next: 00000414
 *          Debug start: 00000004, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000364)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (000378)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), TLx
 * (000388)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLy
 * (000398)  S_BPREL32: [00000014], Type:     T_REAL32(0040), BRx
 * (0003A8)  S_BPREL32: [00000018], Type:     T_REAL32(0040), BRy
 * (0003B8)  S_BPREL32: [0000001C], Type:      T_UCHAR(0020), r
 * (0003C8)  S_BPREL32: [00000020], Type:      T_UCHAR(0020), g
 * (0003D8)  S_BPREL32: [00000024], Type:      T_UCHAR(0020), b
 * (0003E8)  S_BPREL32: [00000028], Type:      T_UCHAR(0020), a
 * (0003F8)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000410) S_END
 * 
 * (000414) S_GPROC32: [0001:0004DF0F], Cb: 00000043, Type:             0x182E, Frame_CreateGouraudPoly
 *          Parent: 00000000, End: 00000500, Next: 00000504
 *          Debug start: 00000004, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000454)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (000468)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), TLx
 * (000478)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLy
 * (000488)  S_BPREL32: [00000014], Type:     T_REAL32(0040), BRx
 * (000498)  S_BPREL32: [00000018], Type:     T_REAL32(0040), BRy
 * (0004A8)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), c0
 * (0004B8)  S_BPREL32: [00000020], Type:      T_ULONG(0022), c1
 * (0004C8)  S_BPREL32: [00000024], Type:      T_ULONG(0022), c2
 * (0004D8)  S_BPREL32: [00000028], Type:      T_ULONG(0022), c3
 * (0004E8)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000500) S_END
 * 
 * (000504) S_GPROC32: [0001:0004DF52], Cb: 00000051, Type:             0x1A58, Frame_Createbutton
 *          Parent: 00000000, End: 00000628, Next: 0000062C
 *          Debug start: 00000004, Debug end: 0000004D
 *          Flags: Frame Ptr Present
 * 
 * (000540)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (000554)  S_BPREL32: [0000000C], Type:             0x1A24, file
 * (000568)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLx
 * (000578)  S_BPREL32: [00000014], Type:     T_REAL32(0040), TLy
 * (000588)  S_BPREL32: [00000018], Type:     T_REAL32(0040), BRx
 * (000598)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), BRy
 * (0005A8)  S_BPREL32: [00000020], Type:   T_32PRCHAR(0470), text
 * (0005BC)  S_BPREL32: [00000024], Type:             0x141B, Func
 * (0005D0)  S_BPREL32: [00000028], Type:      T_ULONG(0022), ButtonType
 * (0005E8)  S_BPREL32: [0000002C], Type:      T_ULONG(0022), Value
 * (0005FC)  S_BPREL32: [00000030], Type:       T_INT4(0074), State
 * (000610)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000628) S_END
 * 
 * (00062C) S_GPROC32: [0001:0004DFA3], Cb: 0000003E, Type:             0x1A5A, Frame_CreateIcon
 *          Parent: 00000000, End: 00000718, Next: 0000071C
 *          Debug start: 00000004, Debug end: 0000003A
 *          Flags: Frame Ptr Present
 * 
 * (000664)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (000678)  S_BPREL32: [0000000C], Type:             0x1A24, file
 * (00068C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLx
 * (00069C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), TLy
 * (0006AC)  S_BPREL32: [00000018], Type:             0x141B, Func
 * (0006C0)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), ButtonType
 * (0006D8)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Value
 * (0006EC)  S_BPREL32: [00000024], Type:       T_INT4(0074), Status
 * (000700)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000718) S_END
 * 
 * (00071C) S_GPROC32: [0001:0004DFE1], Cb: 0000003E, Type:             0x1A5C, Frame_CreateArea
 *          Parent: 00000000, End: 000007FC, Next: 00000800
 *          Debug start: 00000004, Debug end: 0000003A
 *          Flags: Frame Ptr Present
 * 
 * (000754)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (000768)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), TLx
 * (000778)  S_BPREL32: [00000010], Type:     T_REAL32(0040), TLy
 * (000788)  S_BPREL32: [00000014], Type:     T_REAL32(0040), BRx
 * (000798)  S_BPREL32: [00000018], Type:     T_REAL32(0040), BRy
 * (0007A8)  S_BPREL32: [0000001C], Type:             0x141B, Func
 * (0007BC)  S_BPREL32: [00000020], Type:      T_ULONG(0022), Value
 * (0007D0)  S_BPREL32: [00000024], Type:       T_INT4(0074), State
 * (0007E4)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (0007FC) S_END
 * 
 * (000800) S_GPROC32: [0001:0004E01F], Cb: 00000080, Type:             0x1A5E, Frame_TextWrite
 *          Parent: 00000000, End: 00000908, Next: 0000090C
 *          Debug start: 00000009, Debug end: 0000007C
 *          Flags: Frame Ptr Present
 * 
 * (000838)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000848)  S_BPREL32: [0000000C], Type:             0x1A24, file
 * (00085C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), x
 * (00086C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), y
 * (00087C)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), r
 * (00088C)  S_BPREL32: [0000001C], Type:      T_UCHAR(0020), g
 * (00089C)  S_BPREL32: [00000020], Type:      T_UCHAR(0020), b
 * (0008AC)  S_BPREL32: [00000024], Type:             0x16EA, FormatString
 * (0008C8)  S_BPREL32: [FFFFFEF8], Type:   T_32PRCHAR(0470), arglist
 * (0008DC)  S_BPREL32: [FFFFFEFC], Type:             0x1A54, FrameData
 * (0008F4)  S_BPREL32: [FFFFFF00], Type:             0x1A12, Message
 * 
 * (000908) S_END
 * 
 * (00090C) S_GPROC32: [0001:0004E09F], Cb: 00000037, Type:             0x1A5F, Frame_CheckPointerOver
 *          Parent: 00000000, End: 00000998, Next: 0000099C
 *          Debug start: 00000004, Debug end: 00000033
 *          Flags: Frame Ptr Present
 * 
 * (00094C)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (000960)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000970)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000980)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000998) S_END
 * 
 * (00099C) S_GPROC32: [0001:0004E0D6], Cb: 00000035, Type:             0x1A33, Frame_CheckClick
 *          Parent: 00000000, End: 00000A20, Next: 00000A24
 *          Debug start: 00000004, Debug end: 00000031
 *          Flags: Frame Ptr Present
 * 
 * (0009D4)  S_BPREL32: [00000008], Type:             0x1404, fobj
 * (0009E8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), mx
 * (0009F8)  S_BPREL32: [00000010], Type:     T_REAL32(0040), my
 * (000A08)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000A20) S_END
 * 
 * (000A24) S_GPROC32: [0001:0004E10B], Cb: 00000023, Type:             0x1A56, Frame_SetState
 *          Parent: 00000000, End: 00000A98, Next: 00000000
 *          Debug start: 00000004, Debug end: 0000001F
 *          Flags: Frame Ptr Present
 * 
 * (000A5C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000A6C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), State
 * (000A80)  S_BPREL32: [FFFFFFFC], Type:             0x1A54, FrameData
 * 
 * (000A98) S_END
 * 
 * (000A9C) S_GDATA32: [0003:0007A0B8], Type:             0x1404, MenuObject
 * 
 */

