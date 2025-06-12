
// File: C:\CodePrj\Gt2\Game\src\Scavenger\multiplayer.c

/*
 * ModName: .\Debug\multiplayer.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\multiplayer.obj
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
 * (0025CC) S_GDATA32: [0003:00931D60], Type:      T_ULONG(0022), re
 * (0025E0) S_GDATA32: [0003:0007A0B8], Type:             0x1404, MenuObject
 * (0025FC) S_GDATA32: [0003:00012DA8], Type:             0x1428, MenuFileList
 * (002618) S_GDATA32: [0003:00C28AE0], Type:             0x1A11, NetInfo
 * (002630) S_GDATA32: [0003:00947E80], Type:             0x1811, Tracks
 * (002648) S_GDATA32: [0003:0097C104], Type:             0x1418, Op
 * (00265C) S_GDATA32: [0003:00949C00], Type:             0x1814, Cars
 * (002670) S_GDATA32: [0003:00931D80], Type:             0x142A, MenuText
 * (002688) S_GDATA32: [0003:00992AC0], Type:             0x1820, Drivers
 * (0026A0) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (0026B8) S_GDATA32: [0003:000082D8], Type:             0x1823, TrackInfo
 * (0026D0) S_GDATA32: [0003:00000030], Type:             0x17FB, AI_LineWeight
 * (0026EC) S_GDATA32: [0003:0007A0AC], Type:             0x1404, GameWorldObject
 * (00270C) S_GDATA32: [0003:000672D0], Type:   T_32PRCHAR(0470), KeyFocus
 * (002724) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * (002740) S_GDATA32: [0003:0007A0CC], Type:             0x1404, st
 * (002754) S_GDATA32: [0003:00947D20], Type:             0x1A12, KeyBuffer
 * (00276C) S_GDATA32: [0003:00947E68], Type:       T_LONG(0012), KeyMaxLen
 * (002784) S_GDATA32: [0003:0091E08C], Type:      T_ULONG(0022), DI_JoysticksConnected
 * (0027A8) S_GDATA32: [0002:000017F8], Type:             0x1011, DPSPGUID_IPX
 * (0027C4) S_GDATA32: [0002:00001808], Type:             0x1011, DPSPGUID_TCPIP
 * (0027E4) S_GDATA32: [0002:00001818], Type:             0x1011, DPSPGUID_SERIAL
 * (002804) S_GDATA32: [0002:00001828], Type:             0x1011, DPSPGUID_MODEM
 */

/*
 * (000090) S_GPROC32: [0001:0005D110], Cb: 00000243, Type:             0x141A, BtStartMultiPlayer
 *          Parent: 00000000, End: 000001A8, Next: 000001AC
 *          Debug start: 00000007, Debug end: 00000219
 *          Flags: Frame Ptr Present
 * 
 * (0000CC)  S_LDATA32: [0001:0005D346], Type:     T_NOTYPE(0000), (none)
 * (0000DC)  S_LDATA32: [0001:0005D32E], Type:     T_NOTYPE(0000), (none)
 * (0000EC)  S_LABEL32: [0001:0005D16A], $L81976
 * (000100)  S_LABEL32: [0001:0005D29A], $L82000
 * (000114)  S_LABEL32: [0001:0005D2BB], $L82003
 * (000128)  S_LABEL32: [0001:0005D2D7], $L82006
 * (00013C)  S_LABEL32: [0001:0005D2F3], $L82009
 * (000150)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000160)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (000170)  S_BPREL32: [FFFFFFF4], Type:             0x180B, Gw
 * (000180)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), c
 * (000190)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0001A8) S_END
 */

/*
 * (0001AC) S_GPROC32: [0001:0005D353], Cb: 000001C7, Type:             0x1001, MultiOP_SetSettings
 *          Parent: 00000000, End: 000001F8, Next: 000001FC
 *          Debug start: 00000004, Debug end: 000001C3
 *          Flags: Frame Ptr Present
 * 
 * (0001E8)  S_BPREL32: [FFFFFFFC], Type:             0x180B, Gw
 * 
 * (0001F8) S_END
 */

/*
 * (0001FC) S_GPROC32: [0001:0005D51A], Cb: 0000008D, Type:             0x1001, OpGotoMultiPlayerNetworkTCPGame
 *          Parent: 00000000, End: 00000264, Next: 00000268
 *          Debug start: 00000006, Debug end: 00000089
 *          Flags: Frame Ptr Present
 * 
 * (000244)  S_BPREL32: [FFFFFFBC], Type:             0x180B, Gw
 * (000254)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (000264) S_END
 */

/*
 * (000268) S_GPROC32: [0001:0005D5A7], Cb: 000002CF, Type:             0x1001, OpGotoMultiPlayerSplitScreen
 *          Parent: 00000000, End: 000002DC, Next: 000002E0
 *          Debug start: 00000007, Debug end: 000002CA
 *          Flags: Frame Ptr Present
 * 
 * (0002AC)  S_BPREL32: [FFFFFFB8], Type:      T_ULONG(0022), i
 * (0002BC)  S_BPREL32: [FFFFFFBC], Type:             0x180B, Gw
 * (0002CC)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (0002DC) S_END
 */

/*
 * (0002E0) S_GPROC32: [0001:0005D876], Cb: 000002F6, Type:             0x141A, BtMultiCarChange
 *          Parent: 00000000, End: 00000414, Next: 00000418
 *          Debug start: 00000006, Debug end: 000002E2
 *          Flags: Frame Ptr Present
 * 
 * (000318)  S_LDATA32: [0001:0005DB5C], Type:     T_NOTYPE(0000), (none)
 * (000328)  S_LABEL32: [0001:0005D9AB], $L82077
 * (00033C)  S_LABEL32: [0001:0005D9F3], $L82085
 * (000350)  S_LABEL32: [0001:0005DA3D], $L82094
 * (000364)  S_LABEL32: [0001:0005DA55], $L82096
 * (000378)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000388)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), car
 * (000398)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), dir
 * (0003A8)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), tex
 * (0003B8)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), i
 * (0003C8)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), miss
 * (0003DC)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (0003EC)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), c
 * (0003FC)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000414) S_END
 */

/*
 * (000418) S_GPROC32: [0001:0005DB6C], Cb: 00000063, Type:             0x141A, BtChangeAM
 *          Parent: 00000000, End: 0000046C, Next: 00000470
 *          Debug start: 00000004, Debug end: 0000005F
 *          Flags: Frame Ptr Present
 * 
 * (00044C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00045C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, Gw
 * 
 * (00046C) S_END
 */

/*
 * (000470) S_GPROC32: [0001:0005DBCF], Cb: 000000D3, Type:             0x141A, BtChangeControlUp
 *          Parent: 00000000, End: 000004CC, Next: 000004D0
 *          Debug start: 00000004, Debug end: 000000CF
 *          Flags: Frame Ptr Present
 * 
 * (0004AC)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (0004BC)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0004CC) S_END
 */

/*
 * (0004D0) S_GPROC32: [0001:0005DCA2], Cb: 0000007D, Type:             0x141A, BtChangeControlDown
 *          Parent: 00000000, End: 0000052C, Next: 00000530
 *          Debug start: 00000004, Debug end: 00000079
 *          Flags: Frame Ptr Present
 * 
 * (00050C)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (00051C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (00052C) S_END
 */

/*
 * (000530) S_GPROC32: [0001:0005DD1F], Cb: 000000CF, Type:             0x141A, BtMultiSetupController
 *          Parent: 00000000, End: 00000590, Next: 00000594
 *          Debug start: 00000004, Debug end: 000000CB
 *          Flags: Frame Ptr Present
 * 
 * (000570)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (000580)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000590) S_END
 */

/*
 * (000594) S_GPROC32: [0001:0005DDEE], Cb: 0000005C, Type:             0x141A, BtMultiChangeCamUp
 *          Parent: 00000000, End: 000005F0, Next: 000005F4
 *          Debug start: 00000004, Debug end: 00000058
 *          Flags: Frame Ptr Present
 * 
 * (0005D0)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (0005E0)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (0005F0) S_END
 */

/*
 * (0005F4) S_GPROC32: [0001:0005DE4A], Cb: 0000005C, Type:             0x141A, BtMultiChangeCamDown
 *          Parent: 00000000, End: 00000650, Next: 00000654
 *          Debug start: 00000004, Debug end: 00000058
 *          Flags: Frame Ptr Present
 * 
 * (000630)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (000640)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000650) S_END
 */

/*
 * (000654) S_GPROC32: [0001:0005DEA6], Cb: 00001134, Type:             0x141A, SetupMultiplayerFrame_Car
 *          Parent: 00000000, End: 000009E8, Next: 000009EC
 *          Debug start: 00000006, Debug end: 000010B0
 *          Flags: Frame Ptr Present
 * 
 * (000698)  S_LDATA32: [0001:0005EFAA], Type:     T_NOTYPE(0000), (none)
 * (0006A8)  S_LDATA32: [0001:0005EF9A], Type:     T_NOTYPE(0000), (none)
 * (0006B8)  S_LDATA32: [0001:0005EF7A], Type:     T_NOTYPE(0000), (none)
 * (0006C8)  S_LDATA32: [0001:0005EF6A], Type:     T_NOTYPE(0000), (none)
 * (0006D8)  S_LDATA32: [0001:0005EF5A], Type:     T_NOTYPE(0000), (none)
 * (0006E8)  S_LABEL32: [0001:0005DEFF], $L82183
 * (0006FC)  S_LABEL32: [0001:0005DF17], $L82185
 * (000710)  S_LABEL32: [0001:0005DF2F], $L82187
 * (000724)  S_LABEL32: [0001:0005DF47], $L82189
 * (000738)  S_LABEL32: [0001:0005E049], $L82205
 * (00074C)  S_LABEL32: [0001:0005E05A], $L82206
 * (000760)  S_LABEL32: [0001:0005E06B], $L82207
 * (000774)  S_LABEL32: [0001:0005E07C], $L82208
 * (000788)  S_LABEL32: [0001:0005E120], $L82216
 * (00079C)  S_LABEL32: [0001:0005E144], $L82217
 * (0007B0)  S_LABEL32: [0001:0005E168], $L82218
 * (0007C4)  S_LABEL32: [0001:0005E18C], $L82219
 * (0007D8)  S_LABEL32: [0001:0005E1B0], $L82220
 * (0007EC)  S_LABEL32: [0001:0005E1D1], $L82221
 * (000800)  S_LABEL32: [0001:0005E1F2], $L82222
 * (000814)  S_LABEL32: [0001:0005E213], $L82223
 * (000828)  S_LABEL32: [0001:0005E273], $L82228
 * (00083C)  S_LABEL32: [0001:0005E2AA], $L82229
 * (000850)  S_LABEL32: [0001:0005E2DE], $L82230
 * (000864)  S_LABEL32: [0001:0005E312], $L82231
 * (000878)  S_LABEL32: [0001:0005E432], $L82237
 * (00088C)  S_LABEL32: [0001:0005E499], $L82238
 * (0008A0)  S_LABEL32: [0001:0005E513], $L82239
 * (0008B4)  S_LABEL32: [0001:0005E58D], $L82240
 * (0008C8)  S_LABEL32: [0001:0005E5F3], $L82241
 * (0008DC)  S_LABEL32: [0001:0005E65B], $L82242
 * (0008F0)  S_LABEL32: [0001:0005E6C2], $L82243
 * (000904)  S_LABEL32: [0001:0005E729], $L82244
 * (000918)  S_LABEL32: [0001:0005E7A3], $L82245
 * (00092C)  S_LABEL32: [0001:0005E817], $L82246
 * (000940)  S_LABEL32: [0001:0005E88A], $L82247
 * (000954)  S_LABEL32: [0001:0005E901], $L82248
 * (000968)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (000978)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), k
 * (000988)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), tNum
 * (00099C)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (0009AC)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (0009BC)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (0009D4)  S_BPREL32: [FFFFFFFC], Type:             0x1766, LogoTDT
 * 
 * (0009E8) S_END
 */

/*
 * (0009EC) S_GPROC32: [0001:0005EFDA], Cb: 0000011F, Type:             0x141A, BtMultiTrackChange
 *          Parent: 00000000, End: 00000A60, Next: 00000A64
 *          Debug start: 00000006, Debug end: 0000011B
 *          Flags: Frame Ptr Present
 * 
 * (000A28)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000A38)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000A48)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000A60) S_END
 */

/*
 * (000A64) S_GPROC32: [0001:0005F0F9], Cb: 00000457, Type:             0x141A, SetupMultiplayerFrame_Track
 *          Parent: 00000000, End: 00000B30, Next: 00000B34
 *          Debug start: 00000006, Debug end: 00000453
 *          Flags: Frame Ptr Present
 * 
 * (000AA8)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (000AB8)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), m
 * (000AC8)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), i
 * (000AD8)  S_BPREL32: [FFFFFFEC], Type:             0x180B, set
 * (000AE8)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), t
 * (000AF8)  S_BPREL32: [FFFFFFF4], Type:             0x1766, tdt
 * (000B08)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), s
 * (000B18)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000B30) S_END
 */

/*
 * (000B34) S_GPROC32: [0001:0005F550], Cb: 000004D9, Type:             0x141A, BtPlayerSplit
 *          Parent: 00000000, End: 00000C48, Next: 00000C4C
 *          Debug start: 00000009, Debug end: 000004C5
 *          Flags: Frame Ptr Present
 * 
 * (000B6C)  S_LDATA32: [0001:0005FA19], Type:     T_NOTYPE(0000), (none)
 * (000B7C)  S_LABEL32: [0001:0005F5E3], $L82328
 * (000B90)  S_LABEL32: [0001:0005F61E], $L82329
 * (000BA4)  S_LABEL32: [0001:0005F659], $L82330
 * (000BB8)  S_LABEL32: [0001:0005F694], $L82331
 * (000BCC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000BDC)  S_BPREL32: [FFFFFF88], Type:      T_ULONG(0022), i
 * (000BEC)  S_BPREL32: [FFFFFF8C], Type:     T_REAL32(0040), h
 * (000BFC)  S_BPREL32: [FFFFFF90], Type:             0x180B, set
 * (000C0C)  S_BPREL32: [FFFFFF94], Type:             0x1429, str
 * (000C1C)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), width
 * (000C30)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000C48) S_END
 */

/*
 * (000C4C) S_GPROC32: [0001:0005FA29], Cb: 00000153, Type:             0x141A, BtIPXScanLan
 *          Parent: 00000000, End: 00000CDC, Next: 00000CE0
 *          Debug start: 00000006, Debug end: 0000014F
 *          Flags: Frame Ptr Present
 * 
 * (000C80)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000C90)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (000CA0)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (000CB0)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (000CC8)  S_BPREL32: [FFFFFFFC], Type:             0x1902, session
 * 
 * (000CDC) S_END
 */

/*
 * (000CE0) S_GPROC32: [0001:0005FB7C], Cb: 00000175, Type:             0x141A, BtTCPScanLAN
 *          Parent: 00000000, End: 00000D70, Next: 00000D74
 *          Debug start: 00000006, Debug end: 00000171
 *          Flags: Frame Ptr Present
 * 
 * (000D14)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000D24)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (000D34)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (000D44)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (000D5C)  S_BPREL32: [FFFFFFFC], Type:             0x1902, session
 * 
 * (000D70) S_END
 */

/*
 * (000D74) S_GPROC32: [0001:0005FCF1], Cb: 00000065, Type:             0x141A, BtNewName
 *          Parent: 00000000, End: 00000DE0, Next: 00000DE4
 *          Debug start: 00000006, Debug end: 00000061
 *          Flags: Frame Ptr Present
 * 
 * (000DA8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000DB8)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000DC8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000DE0) S_END
 */

/*
 * (000DE4) S_GPROC32: [0001:0005FD56], Cb: 00000070, Type:             0x141A, BtEnterServerName
 *          Parent: 00000000, End: 00000E58, Next: 00000E5C
 *          Debug start: 00000006, Debug end: 0000006C
 *          Flags: Frame Ptr Present
 * 
 * (000E20)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000E30)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (000E40)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000E58) S_END
 */

/*
 * (000E5C) S_GPROC32: [0001:0005FDC6], Cb: 0000002C, Type:             0x141A, BtChangeNetSelect
 *          Parent: 00000000, End: 00000EB8, Next: 00000EBC
 *          Debug start: 00000004, Debug end: 00000028
 *          Flags: Frame Ptr Present
 * 
 * (000E98)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000EA8)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000EB8) S_END
 */

/*
 * (000EBC) S_GPROC32: [0001:0005FDF2], Cb: 0000011C, Type:             0x141A, BtServerListScroll
 *          Parent: 00000000, End: 00000F74, Next: 00000F78
 *          Debug start: 00000006, Debug end: 00000103
 *          Flags: Frame Ptr Present
 * 
 * (000EF8)  S_LDATA32: [0001:0005FF05], Type:     T_NOTYPE(0000), (none)
 * (000F08)  S_LDATA32: [0001:0005FEF9], Type:     T_NOTYPE(0000), (none)
 * (000F18)  S_LABEL32: [0001:0005FE63], $L82432
 * (000F2C)  S_LABEL32: [0001:0005FE91], $L82434
 * (000F40)  S_LABEL32: [0001:0005FEBF], $L82436
 * (000F54)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (000F64)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000F74) S_END
 */

/*
 * (000F78) S_GPROC32: [0001:0005FF0E], Cb: 00000280, Type:             0x1001, MENU_DrawIPXServerList
 *          Parent: 00000000, End: 00001000, Next: 00001004
 *          Debug start: 00000006, Debug end: 0000027C
 *          Flags: Frame Ptr Present
 * 
 * (000FB8)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (000FC8)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (000FD8)  S_BPREL32: [FFFFFFF8], Type:             0x1404, a
 * (000FE8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001000) S_END
 */

/*
 * (001004) S_GPROC32: [0001:0006018E], Cb: 000003FD, Type:             0x1001, MENU_DrawTCPServerInformation
 *          Parent: 00000000, End: 00001098, Next: 0000109C
 *          Debug start: 00000006, Debug end: 000003F9
 *          Flags: Frame Ptr Present
 * 
 * (00104C)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (00105C)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (00106C)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (001084)  S_BPREL32: [FFFFFFFC], Type:             0x1902, session
 * 
 * (001098) S_END
 */

/*
 * (00109C) S_GPROC32: [0001:0006058B], Cb: 00000287, Type:             0x1001, MENU_DrawIPXServerInformation
 *          Parent: 00000000, End: 00001130, Next: 00001134
 *          Debug start: 00000006, Debug end: 00000283
 *          Flags: Frame Ptr Present
 * 
 * (0010E4)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (0010F4)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (001104)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (00111C)  S_BPREL32: [FFFFFFFC], Type:             0x1902, session
 * 
 * (001130) S_END
 */

/*
 * (001134) S_GPROC32: [0001:00060812], Cb: 00000299, Type:             0x1001, MENU_DrawTCPServerList
 *          Parent: 00000000, End: 000011CC, Next: 000011D0
 *          Debug start: 00000006, Debug end: 00000295
 *          Flags: Frame Ptr Present
 * 
 * (001174)  S_BPREL32: [FFFFFFD0], Type:      T_ULONG(0022), i
 * (001184)  S_BPREL32: [FFFFFFD4], Type:             0x180B, set
 * (001194)  S_BPREL32: [FFFFFFD8], Type:             0x17D6, str
 * (0011A4)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (0011BC)  S_BPREL32: [FFFFFFFC], Type:             0x1404, a
 * 
 * (0011CC) S_END
 */

/*
 * (0011D0) S_GPROC32: [0001:00060AAB], Cb: 00000299, Type:             0x1001, MENU_DrawMODEMServerList
 *          Parent: 00000000, End: 00001268, Next: 0000126C
 *          Debug start: 00000006, Debug end: 00000295
 *          Flags: Frame Ptr Present
 * 
 * (001210)  S_BPREL32: [FFFFFFD0], Type:      T_ULONG(0022), i
 * (001220)  S_BPREL32: [FFFFFFD4], Type:             0x180B, set
 * (001230)  S_BPREL32: [FFFFFFD8], Type:             0x17D6, str
 * (001240)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (001258)  S_BPREL32: [FFFFFFFC], Type:             0x1404, a
 * 
 * (001268) S_END
 */

/*
 * (00126C) S_GPROC32: [0001:00060D44], Cb: 00000086, Type:             0x141A, BtTCPAddEntryDone
 *          Parent: 00000000, End: 000012E0, Next: 000012E4
 *          Debug start: 00000006, Debug end: 00000082
 *          Flags: Frame Ptr Present
 * 
 * (0012A8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0012B8)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0012C8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0012E0) S_END
 */

/*
 * (0012E4) S_GPROC32: [0001:00060DCA], Cb: 000000AC, Type:             0x141A, BtTCPAddIP
 *          Parent: 00000000, End: 00001350, Next: 00001354
 *          Debug start: 00000006, Debug end: 000000A8
 *          Flags: Frame Ptr Present
 * 
 * (001318)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001328)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001338)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001350) S_END
 */

/*
 * (001354) S_GPROC32: [0001:00060E76], Cb: 0000006B, Type:             0x141A, BtTCPAddEntry
 *          Parent: 00000000, End: 000013C4, Next: 000013C8
 *          Debug start: 00000006, Debug end: 00000067
 *          Flags: Frame Ptr Present
 * 
 * (00138C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00139C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0013AC)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0013C4) S_END
 */

/*
 * (0013C8) S_GPROC32: [0001:00060EE1], Cb: 00000071, Type:             0x141A, BtTCPEditEntryDone
 *          Parent: 00000000, End: 0000143C, Next: 00001440
 *          Debug start: 00000006, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (001404)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001414)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001424)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (00143C) S_END
 */

/*
 * (001440) S_GPROC32: [0001:00060F52], Cb: 000000C3, Type:             0x141A, BtTCPEditIP
 *          Parent: 00000000, End: 000014AC, Next: 000014B0
 *          Debug start: 00000006, Debug end: 000000BF
 *          Flags: Frame Ptr Present
 * 
 * (001474)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001484)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001494)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0014AC) S_END
 */

/*
 * (0014B0) S_GPROC32: [0001:00061015], Cb: 00000093, Type:             0x141A, BtTCPEditEntry
 *          Parent: 00000000, End: 00001520, Next: 00001524
 *          Debug start: 00000006, Debug end: 0000008F
 *          Flags: Frame Ptr Present
 * 
 * (0014E8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0014F8)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001508)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001520) S_END
 */

/*
 * (001524) S_GPROC32: [0001:000610A8], Cb: 000000D8, Type:             0x141A, BtTCPDeleteEntry
 *          Parent: 00000000, End: 0000157C, Next: 00001580
 *          Debug start: 00000004, Debug end: 000000D4
 *          Flags: Frame Ptr Present
 * 
 * (00155C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00156C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (00157C) S_END
 */

/*
 * (001580) S_GPROC32: [0001:00061180], Cb: 00000087, Type:             0x141A, BtMODEMAddEntryDone
 *          Parent: 00000000, End: 000015F4, Next: 000015F8
 *          Debug start: 00000006, Debug end: 00000083
 *          Flags: Frame Ptr Present
 * 
 * (0015BC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0015CC)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0015DC)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0015F4) S_END
 */

/*
 * (0015F8) S_GPROC32: [0001:00061207], Cb: 000000AC, Type:             0x141A, BtMODEMAddIP
 *          Parent: 00000000, End: 00001664, Next: 00001668
 *          Debug start: 00000006, Debug end: 000000A8
 *          Flags: Frame Ptr Present
 * 
 * (00162C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00163C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (00164C)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001664) S_END
 */

/*
 * (001668) S_GPROC32: [0001:000612B3], Cb: 0000006B, Type:             0x141A, BtMODEMAddEntry
 *          Parent: 00000000, End: 000016D8, Next: 000016DC
 *          Debug start: 00000006, Debug end: 00000067
 *          Flags: Frame Ptr Present
 * 
 * (0016A0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0016B0)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0016C0)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0016D8) S_END
 */

/*
 * (0016DC) S_GPROC32: [0001:0006131E], Cb: 00000072, Type:             0x141A, BtMODEMEditEntryDone
 *          Parent: 00000000, End: 00001750, Next: 00001754
 *          Debug start: 00000006, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (001718)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001728)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001738)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001750) S_END
 */

/*
 * (001754) S_GPROC32: [0001:00061390], Cb: 000000C3, Type:             0x141A, BtMODEMEditIP
 *          Parent: 00000000, End: 000017C4, Next: 000017C8
 *          Debug start: 00000006, Debug end: 000000BF
 *          Flags: Frame Ptr Present
 * 
 * (00178C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00179C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0017AC)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0017C4) S_END
 */

/*
 * (0017C8) S_GPROC32: [0001:00061453], Cb: 00000093, Type:             0x141A, BtMODEMEditEntry
 *          Parent: 00000000, End: 00001838, Next: 0000183C
 *          Debug start: 00000006, Debug end: 0000008F
 *          Flags: Frame Ptr Present
 * 
 * (001800)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001810)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001820)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001838) S_END
 */

/*
 * (00183C) S_GPROC32: [0001:000614E6], Cb: 000000D8, Type:             0x141A, BtMODEMDeleteEntry
 *          Parent: 00000000, End: 00001898, Next: 0000189C
 *          Debug start: 00000004, Debug end: 000000D4
 *          Flags: Frame Ptr Present
 * 
 * (001878)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001888)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (001898) S_END
 */

/*
 * (00189C) S_GPROC32: [0001:000615BE], Cb: 00000225, Type:             0x141A, BtTCPJoin
 *          Parent: 00000000, End: 00001918, Next: 0000191C
 *          Debug start: 00000006, Debug end: 00000221
 *          Flags: Frame Ptr Present
 * 
 * (0018D0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0018E0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (0018F0)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001900)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001918) S_END
 */

/*
 * (00191C) S_GPROC32: [0001:000617E3], Cb: 00000128, Type:             0x141A, BtTCPCreate
 *          Parent: 00000000, End: 00001988, Next: 0000198C
 *          Debug start: 00000006, Debug end: 00000124
 *          Flags: Frame Ptr Present
 * 
 * (001950)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001960)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001970)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001988) S_END
 */

/*
 * (00198C) S_GPROC32: [0001:0006190B], Cb: 000000A8, Type:             0x141A, BtTCPDisconnect
 *          Parent: 00000000, End: 000019FC, Next: 00001A00
 *          Debug start: 00000006, Debug end: 000000A4
 *          Flags: Frame Ptr Present
 * 
 * (0019C4)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0019D4)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0019E4)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0019FC) S_END
 */

/*
 * (001A00) S_GPROC32: [0001:000619B3], Cb: 00000128, Type:             0x141A, BtIPXJoin
 *          Parent: 00000000, End: 00001A7C, Next: 00001A80
 *          Debug start: 00000006, Debug end: 00000124
 *          Flags: Frame Ptr Present
 * 
 * (001A34)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001A44)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (001A54)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001A64)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001A7C) S_END
 */

/*
 * (001A80) S_GPROC32: [0001:00061ADB], Cb: 000000DC, Type:             0x141A, BtIPXCreate
 *          Parent: 00000000, End: 00001AEC, Next: 00001AF0
 *          Debug start: 00000006, Debug end: 000000D8
 *          Flags: Frame Ptr Present
 * 
 * (001AB4)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001AC4)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001AD4)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001AEC) S_END
 */

/*
 * (001AF0) S_GPROC32: [0001:00061BB7], Cb: 000000A8, Type:             0x141A, BtIPXDisconnect
 *          Parent: 00000000, End: 00001B60, Next: 00001B64
 *          Debug start: 00000006, Debug end: 000000A4
 *          Flags: Frame Ptr Present
 * 
 * (001B28)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001B38)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001B48)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001B60) S_END
 */

/*
 * (001B64) S_GPROC32: [0001:00061C5F], Cb: 00000722, Type:             0x141A, SetupNetworkGameFrame_Server
 *          Parent: 00000000, End: 00001C90, Next: 00001C94
 *          Debug start: 00000006, Debug end: 000006EE
 *          Flags: Frame Ptr Present
 * 
 * (001BA8)  S_LDATA32: [0001:00062351], Type:     T_NOTYPE(0000), (none)
 * (001BB8)  S_LABEL32: [0001:00061DE8], $L82815
 * (001BCC)  S_LABEL32: [0001:00061E25], $L82816
 * (001BE0)  S_LABEL32: [0001:00061FBC], $L82817
 * (001BF4)  S_LABEL32: [0001:00061FF9], $L82818
 * (001C08)  S_LABEL32: [0001:000620E8], $L82819
 * (001C1C)  S_LABEL32: [0001:0006211D], $L82821
 * (001C30)  S_LABEL32: [0001:00062239], $L82824
 * (001C44)  S_LABEL32: [0001:0006226E], $L82826
 * (001C58)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (001C68)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001C78)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001C90) S_END
 */

/*
 * (001C94) S_GPROC32: [0001:00062381], Cb: 000000D0, Type:             0x1904, ChatDrawLine
 *          Parent: 00000000, End: 00001D28, Next: 00001D2C
 *          Debug start: 00000006, Debug end: 000000CC
 *          Flags: Frame Ptr Present
 * 
 * (001CC8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), loc
 * (001CD8)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), name
 * (001CEC)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), string
 * (001D00)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), y
 * (001D10)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001D28) S_END
 */

/*
 * (001D2C) S_GPROC32: [0001:00062451], Cb: 000001E0, Type:             0x141A, NetworkGame_ChatLineFinished
 *          Parent: 00000000, End: 00001DDC, Next: 00001DE0
 *          Debug start: 0000000A, Debug end: 000001DB
 *          Flags: Frame Ptr Present
 * 
 * (001D70)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001D80)  S_BPREL32: [FFFFFBF0], Type:      T_ULONG(0022), i
 * (001D90)  S_BPREL32: [FFFFFBF4], Type:             0x1905, message
 * (001DA4)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (001DB4)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (001DCC)  S_BPREL32: [FFFFFFFC], Type:   T_32PUCHAR(0420), ptr
 * 
 * (001DDC) S_END
 */

/*
 * (001DE0) S_GPROC32: [0001:00062631], Cb: 00000159, Type:             0x1907, NetworkGame_ChatLineRecieved
 *          Parent: 00000000, End: 00001E7C, Next: 00001E80
 *          Debug start: 00000007, Debug end: 00000154
 *          Flags: Frame Ptr Present
 * 
 * (001E24)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Src
 * (001E34)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Msg
 * (001E44)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (001E54)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (001E64)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001E7C) S_END
 */

/*
 * (001E80) S_GPROC32: [0001:0006278A], Cb: 00000432, Type:             0x141A, SetupNetworkGameFrame_Chat
 *          Parent: 00000000, End: 00001F30, Next: 00001F34
 *          Debug start: 00000006, Debug end: 0000042E
 *          Flags: Frame Ptr Present
 * 
 * (001EC4)  S_BPREL32: [00000008], Type:       T_LONG(0012), val
 * (001ED4)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), i
 * (001EE4)  S_BPREL32: [FFFFFFF0], Type:             0x180B, set
 * (001EF4)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), w
 * (001F04)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (001F1C)  S_BPREL32: [FFFFFFFC], Type:             0x1902, session
 * 
 * (001F30) S_END
 */

/*
 * (001F34) S_GPROC32: [0001:00062BBC], Cb: 00000040, Type:             0x141A, BtQueryTCPDisconnect
 *          Parent: 00000000, End: 00001F98, Next: 00001F9C
 *          Debug start: 00000004, Debug end: 0000003C
 *          Flags: Frame Ptr Present
 * 
 * (001F70)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001F80)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (001F98) S_END
 */

/*
 * (001F9C) S_GPROC32: [0001:00062BFC], Cb: 00000040, Type:             0x141A, BtQueryIPXDisconnect
 *          Parent: 00000000, End: 00002000, Next: 00002004
 *          Debug start: 00000004, Debug end: 0000003C
 *          Flags: Frame Ptr Present
 * 
 * (001FD8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (001FE8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (002000) S_END
 */

/*
 * (002004) S_GPROC32: [0001:00062C3C], Cb: 00000034, Type:             0x141A, BtQueryModemDisconnect
 *          Parent: 00000000, End: 0000206C, Next: 00002070
 *          Debug start: 00000004, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (002044)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (002054)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (00206C) S_END
 */

/*
 * (002070) S_GPROC32: [0001:00062C70], Cb: 00000034, Type:             0x141A, BtQuerySerialDisconnect
 *          Parent: 00000000, End: 000020D8, Next: 000020DC
 *          Debug start: 00000004, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (0020B0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (0020C0)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0020D8) S_END
 */

/*
 * (0020DC) S_GPROC32: [0001:00062CA4], Cb: 0000012E, Type:             0x141A, BtNetROOTMENU
 *          Parent: 00000000, End: 000021BC, Next: 000021C0
 *          Debug start: 00000006, Debug end: 0000010B
 *          Flags: Frame Ptr Present
 * 
 * (002114)  S_LDATA32: [0001:00062DC7], Type:     T_NOTYPE(0000), (none)
 * (002124)  S_LDATA32: [0001:00062DB3], Type:     T_NOTYPE(0000), (none)
 * (002134)  S_LABEL32: [0001:00062CF8], $L82941
 * (002148)  S_LABEL32: [0001:00062D25], $L82945
 * (00215C)  S_LABEL32: [0001:00062D4F], $L82949
 * (002170)  S_LABEL32: [0001:00062D79], $L82953
 * (002184)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (002194)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (0021A4)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0021BC) S_END
 */

/*
 * (0021C0) S_GPROC32: [0001:00062DD2], Cb: 000003CA, Type:             0x141A, BtNetwork
 *          Parent: 00000000, End: 000022B0, Next: 000022B4
 *          Debug start: 00000006, Debug end: 000003B6
 *          Flags: Frame Ptr Present
 * 
 * (0021F4)  S_LDATA32: [0001:0006318C], Type:     T_NOTYPE(0000), (none)
 * (002204)  S_LABEL32: [0001:00062E0B], $L82971
 * (002218)  S_LABEL32: [0001:00062E1A], $L82972
 * (00222C)  S_LABEL32: [0001:00062E29], $L82973
 * (002240)  S_LABEL32: [0001:00062E38], $L82974
 * (002254)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (002264)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), i
 * (002274)  S_BPREL32: [FFFFFFF4], Type:             0x180B, set
 * (002284)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), width
 * (002298)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0022B0) S_END
 */

/*
 * (0022B4) S_GPROC32: [0001:0006319C], Cb: 000003AE, Type:             0x1909, MultiFrameCreateButton
 *          Parent: 00000000, End: 0000236C, Next: 00002370
 *          Debug start: 00000006, Debug end: 000003AA
 *          Flags: Frame Ptr Present
 * 
 * (0022F4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c
 * (002304)  S_BPREL32: [0000000C], Type:             0x141B, a
 * (002314)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), txt
 * (002324)  S_BPREL32: [00000014], Type:       T_LONG(0012), Val
 * (002334)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), w
 * (002344)  S_BPREL32: [FFFFFFF8], Type:             0x1766, tdt
 * (002354)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (00236C) S_END
 */

/*
 * (002370) S_GPROC32: [0001:0006354A], Cb: 000001F5, Type:             0x141A, SetupMultiFrame_GameType
 *          Parent: 00000000, End: 00002434, Next: 00002438
 *          Debug start: 00000006, Debug end: 000001E1
 *          Flags: Frame Ptr Present
 * 
 * (0023B0)  S_LDATA32: [0001:0006372F], Type:     T_NOTYPE(0000), (none)
 * (0023C0)  S_LABEL32: [0001:000636C7], $L83027
 * (0023D4)  S_LABEL32: [0001:000636DD], $L83028
 * (0023E8)  S_LABEL32: [0001:000636F3], $L83029
 * (0023FC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Val
 * (00240C)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), w
 * (00241C)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (002434) S_END
 */

/*
 * (002438) S_GPROC32: [0001:0006373F], Cb: 000001CD, Type:             0x1001, MENU_EnumerateNetworkServices
 *          Parent: 00000000, End: 000024E0, Next: 000024E4
 *          Debug start: 00000006, Debug end: 000001C9
 *          Flags: Frame Ptr Present
 * 
 * (002480)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), i
 * (002490)  S_BPREL32: [FFFFFFE8], Type:             0x1011, guidServiceProvider
 * (0024B0)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (0024C8)  S_BPREL32: [FFFFFFFC], Type:             0x190C, provider
 * 
 * (0024E0) S_END
 */

/*
 * (0024E4) S_GPROC32: [0001:0006390C], Cb: 000000EA, Type:             0x1001, DestroyMultiPlayerMenu
 *          Parent: 00000000, End: 0000253C, Next: 00002540
 *          Debug start: 00000004, Debug end: 000000E6
 *          Flags: Frame Ptr Present
 * 
 * (002524)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (00253C) S_END
 */

/*
 * (002540) S_GPROC32: [0001:000639F6], Cb: 0000013E, Type:             0x1001, SetupMultiPlayerMenu
 *          Parent: 00000000, End: 000025C8, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000013A
 *          Flags: Frame Ptr Present
 * 
 * (00257C)  S_BPREL32: [FFFFFFF0], Type:             0x180B, set
 * (00258C)  S_BPREL32: [FFFFFFF4], Type:             0x1766, tdt
 * (00259C)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), width
 * (0025B0)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0025C8) S_END
 */

