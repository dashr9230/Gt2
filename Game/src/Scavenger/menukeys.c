
// File: C:\CodePrj\Gt2\Game\src\Scavenger\menukeys.c

/*
 * ModName: .\Debug\menukeys.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\menukeys.obj
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
 * (00008C) S_GPROC32: [0001:000543B0], Cb: 0000003F, Type:             0x16A1, MENU_StoreAxisData
 *          Parent: 00000000, End: 000000F0, Next: 000000F4
 *          Debug start: 00000004, Debug end: 0000003B
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), stickNum
 * (0000E0)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0000F0) S_END
 * 
 * (0000F4) S_GPROC32: [0001:000543EF], Cb: 00000074, Type:             0x1001, MENU_ResetString
 *          Parent: 00000000, End: 00000154, Next: 00000158
 *          Debug start: 00000006, Debug end: 00000070
 *          Flags: Frame Ptr Present
 * 
 * (00012C)  S_BPREL32: [FFFFFFF8], Type:             0x180B, set
 * (00013C)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000154) S_END
 * 
 * (000158) S_GPROC32: [0001:00054463], Cb: 0000008D, Type:             0x1A19, MENU_KeyStringEnable
 *          Parent: 00000000, End: 000001C0, Next: 000001C4
 *          Debug start: 00000004, Debug end: 00000089
 *          Flags: Frame Ptr Present
 * 
 * (000194)  S_BPREL32: [00000008], Type:       T_INT4(0074), State
 * (0001A8)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (0001C0) S_END
 * 
 * (0001C4) S_GPROC32: [0001:000544F0], Cb: 0000013D, Type:             0x1A1B, MENU_DrawKeyString
 *          Parent: 00000000, End: 00000278, Next: 0000027C
 *          Debug start: 00000006, Debug end: 00000139
 *          Flags: Frame Ptr Present
 * 
 * (000200)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000210)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000220)  S_BPREL32: [00000010], Type:      T_UCHAR(0020), r
 * (000230)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), g
 * (000240)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), b
 * (000250)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), w
 * (000260)  S_BPREL32: [FFFFFFFC], Type:             0x1420, MenuData
 * 
 * (000278) S_END
 * 
 * (00027C) S_GPROC32: [0001:0005462D], Cb: 0000026C, Type:             0x1001, MENU_MakeStrings
 *          Parent: 00000000, End: 00000338, Next: 0000033C
 *          Debug start: 00000006, Debug end: 00000196
 *          Flags: Frame Ptr Present
 * 
 * (0002B4)  S_LDATA32: [0001:000547D3], Type:     T_NOTYPE(0000), (none)
 * (0002C4)  S_LDATA32: [0001:000547C7], Type:     T_NOTYPE(0000), (none)
 * (0002D4)  S_LABEL32: [0001:00054741], $L80440
 * (0002E8)  S_LABEL32: [0001:0005476A], $L80442
 * (0002FC)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), ascii
 * (000310)  S_BPREL32: [FFFFFFF8], Type:             0x1420, MenuData
 * (000328)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000338) S_END
 * 
 * (00033C) S_GPROC32: [0001:00054899], Cb: 0000020B, Type:             0x1001, MENU_GetKey
 *          Parent: 00000000, End: 00000390, Next: 00000394
 *          Debug start: 00000006, Debug end: 00000207
 *          Flags: Frame Ptr Present
 * 
 * (000370)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (000380)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (000390) S_END
 * 
 * (000394) S_GPROC32: [0001:00054AA4], Cb: 00000685, Type:             0x1A1D, MENUSetControl
 *          Parent: 00000000, End: 0000055C, Next: 00000560
 *          Debug start: 00000006, Debug end: 00000641
 *          Flags: Frame Ptr Present
 * 
 * (0003CC)  S_LDATA32: [0001:000550E9], Type:     T_NOTYPE(0000), (none)
 * (0003DC)  S_LABEL32: [0001:00054EB9], $L80521
 * (0003F0)  S_LABEL32: [0001:00054EDC], $L80523
 * (000404)  S_LABEL32: [0001:00054F00], $L80525
 * (000418)  S_LABEL32: [0001:00054F24], $L80527
 * (00042C)  S_LABEL32: [0001:00054F47], $L80529
 * (000440)  S_LABEL32: [0001:00054F6B], $L80531
 * (000454)  S_LABEL32: [0001:00054F8F], $L80533
 * (000468)  S_LABEL32: [0001:00054FB2], $L80535
 * (00047C)  S_LABEL32: [0001:00054FD6], $L80537
 * (000490)  S_LABEL32: [0001:00054FFA], $L80539
 * (0004A4)  S_LABEL32: [0001:0005501D], $L80541
 * (0004B8)  S_LABEL32: [0001:00055041], $L80543
 * (0004CC)  S_LABEL32: [0001:00055065], $L80545
 * (0004E0)  S_LABEL32: [0001:00055085], $L80547
 * (0004F4)  S_LABEL32: [0001:000550A6], $L80549
 * (000508)  S_LABEL32: [0001:000550C7], $L80551
 * (00051C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Val
 * (00052C)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Key
 * (00053C)  S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), i
 * (00054C)  S_BPREL32: [FFFFFFFC], Type:             0x180B, set
 * 
 * (00055C) S_END
 * 
 * (000560) S_GPROC32: [0001:00055129], Cb: 00000C6D, Type:             0x1A1D, MENUSetJoyControl
 *          Parent: 00000000, End: 000007E4, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000C19
 *          Flags: Frame Ptr Present
 * 
 * (00059C)  S_LDATA32: [0001:00055D56], Type:     T_NOTYPE(0000), (none)
 * (0005AC)  S_LDATA32: [0001:00055D46], Type:     T_NOTYPE(0000), (none)
 * (0005BC)  S_LABEL32: [0001:000552C6], $L80586
 * (0005D0)  S_LABEL32: [0001:00055323], $L80588
 * (0005E4)  S_LABEL32: [0001:00055381], $L80590
 * (0005F8)  S_LABEL32: [0001:000553DC], $L80592
 * (00060C)  S_LABEL32: [0001:000557E6], $L80616
 * (000620)  S_LABEL32: [0001:0005583B], $L80617
 * (000634)  S_LABEL32: [0001:00055892], $L80618
 * (000648)  S_LABEL32: [0001:000558E9], $L80619
 * (00065C)  S_LABEL32: [0001:0005593E], $L80620
 * (000670)  S_LABEL32: [0001:00055995], $L80621
 * (000684)  S_LABEL32: [0001:000559EC], $L80622
 * (000698)  S_LABEL32: [0001:00055A41], $L80623
 * (0006AC)  S_LABEL32: [0001:00055A98], $L80624
 * (0006C0)  S_LABEL32: [0001:00055AEF], $L80625
 * (0006D4)  S_LABEL32: [0001:00055B44], $L80626
 * (0006E8)  S_LABEL32: [0001:00055B9B], $L80627
 * (0006FC)  S_LABEL32: [0001:00055BF2], $L80628
 * (000710)  S_LABEL32: [0001:00055C47], $L80629
 * (000724)  S_LABEL32: [0001:00055C9E], $L80630
 * (000738)  S_LABEL32: [0001:00055CF2], $L80631
 * (00074C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Val
 * (00075C)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Key
 * (00076C)  S_BPREL32: [FFFFFFAC], Type:      T_ULONG(0022), cmt
 * (00077C)  S_BPREL32: [FFFFFFB0], Type:      T_ULONG(0022), i
 * (00078C)  S_BPREL32: [FFFFFFB4], Type:             0x180B, set
 * (00079C)  S_BPREL32: [FFFFFFB8], Type:       T_LONG(0012), cmt_val
 * (0007B0)  S_BPREL32: [FFFFFFBC], Type:     T_USHORT(0021), w2r
 * (0007C0)  S_BPREL32: [FFFFFFC0], Type:             0x184C, change
 * (0007D4)  S_BPREL32: [FFFFFFE0], Type:             0x184C, val
 * 
 * (0007E4) S_END
 * 
 * (0007E8) S_GDATA32: [0003:0007A0AC], Type:             0x1404, GameWorldObject
 * (000808) S_GDATA32: [0003:00C31A60], Type:             0x1A1E, Jstk
 * (00081C) S_GDATA32: [0003:00C440E0], Type:             0x1A20, Key
 * (000830) S_GDATA32: [0003:0007A0C8], Type:       T_INT4(0074), KeyStringActive
 * (000850) S_GDATA32: [0003:0007A0D0], Type:       T_LONG(0012), CapsState
 * (000868) S_GDATA32: [0003:000672D4], Type:             0x189B, InvalidKeys
 * (000884) S_GDATA32: [0003:00947E40], Type:             0x184C, RawJoyAxisData
 * (0008A4) S_GDATA32: [0003:0007A0B8], Type:             0x1404, MenuObject
 * (0008C0) S_GDATA32: [0003:00012DA8], Type:             0x1428, MenuFileList
 * (0008DC) S_GDATA32: [0003:000672D0], Type:   T_32PRCHAR(0470), KeyFocus
 * (0008F4) S_GDATA32: [0003:00947E6C], Type:      T_RCHAR(0070), LastKeyPress
 * (000910) S_GDATA32: [0003:00947E64], Type:      T_RCHAR(0070), LastJoyPress
 * (00092C) S_GDATA32: [0003:00947E28], Type:       T_INT4(0074), waitforkey
 * (000948) S_GDATA32: [0003:00947E60], Type:       T_INT4(0074), getkeycontrol
 * (000964) S_GDATA32: [0003:00947E20], Type:       T_INT4(0074), getjoycontrol
 * (000980) S_GDATA32: [0003:00947E24], Type:       T_LONG(0012), KC_SetVal
 * (000998) S_GDATA32: [0003:0007A0C4], Type:       T_LONG(0012), KeyPosition
 * (0009B4) S_GDATA32: [0003:0007A0CC], Type:             0x1404, st
 * (0009C8) S_GDATA32: [0003:00947D20], Type:             0x1A12, KeyBuffer
 * (0009E0) S_GDATA32: [0003:00947E68], Type:       T_LONG(0012), KeyMaxLen
 * 
 */

