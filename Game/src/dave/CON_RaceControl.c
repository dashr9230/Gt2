
// File: C:\CodePrj\Gt2\Game\src\dave\CON_RaceControl.c

/*
 * ModName: .\Debug\CON_RaceControl.obj
 * (000004) Start search for segment 0x1 at symbol 0x94(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\CON_RaceControl.obj
 * 
 * (000048) S_COMPILE:
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
 * (000BC8) S_GDATA32: [0003:01249500], Type:             0x1C0B, UsedObjectsHead
 * (000BE8) S_GDATA32: [0003:00992AC0], Type:             0x1820, Drivers
 * (000C00) S_GDATA32: [0003:000088F8], Type:             0x1838, MESH_PATH
 * (000C18) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000C30) S_GDATA32: [0003:000082D8], Type:             0x1823, TrackInfo
 * (000C48) S_GDATA32: [0003:0000BF00], Type:             0x1A3E, Vehicle_Filenames
 * (000C68) S_GDATA32: [0003:0000C080], Type:             0x1A16, Vehicle_SkinFilenames
 * (000C8C) S_GDATA32: [0003:00003DB8], Type:             0x16CB, DefaultJoyMapping
 */

/*
 * (000094) S_GPROC32: [0001:0000AEE0], Cb: 000000DF, Type:             0x1001, RC_Console_Install
 *          Parent: 00000000, End: 000000D0, Next: 000000D4
 *          Debug start: 00000003, Debug end: 000000DD
 *          Flags: Frame Ptr Present
 * 
 * (0000D0) S_END
 */

/*
 * (0000D4) S_GPROC32: [0001:0000AFBF], Cb: 00000005, Type:             0x1001, RC_Console_Remove
 *          Parent: 00000000, End: 00000110, Next: 00000114
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (000110) S_END
 */

/*
 * (000114) S_GPROC32: [0001:0000AFC4], Cb: 00000094, Type:             0x17C9, CON_RCCreate
 *          Parent: 00000000, End: 00000170, Next: 00000174
 *          Debug start: 00000003, Debug end: 00000092
 *          Flags: Frame Ptr Present
 * 
 * (000148)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (00015C)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * 
 * (000170) S_END
 */

/*
 * (000174) S_GPROC32: [0001:0000B058], Cb: 00000169, Type:             0x17C9, CON_RCSelectVenue
 *          Parent: 00000000, End: 00000220, Next: 00000224
 *          Debug start: 00000006, Debug end: 00000165
 *          Flags: Frame Ptr Present
 * 
 * (0001B0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0001C4)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (0001D8)  S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), num
 * (0001E8)  S_BPREL32: [FFFFFFB8], Type:      T_RCHAR(0070), ch
 * (0001F8)  S_BPREL32: [FFFFFFBC], Type:             0x1AA2, RaceControl
 * (000210)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (000220) S_END
 */

/*
 * (000224) S_GPROC32: [0001:0000B1C1], Cb: 00000103, Type:             0x17C9, CON_RCEnterCar
 *          Parent: 00000000, End: 000002AC, Next: 000002B0
 *          Debug start: 00000006, Debug end: 000000FF
 *          Flags: Frame Ptr Present
 * 
 * (00025C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000270)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (000284)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), num
 * (000294)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (0002AC) S_END
 */

/*
 * (0002B0) S_GPROC32: [0001:0000B2C4], Cb: 000000CB, Type:             0x17C9, CON_RCStart
 *          Parent: 00000000, End: 0000033C, Next: 00000340
 *          Debug start: 00000006, Debug end: 000000C7
 *          Flags: Frame Ptr Present
 * 
 * (0002E4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0002F8)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (00030C)  S_BPREL32: [FFFFFFF8], Type:             0x1A86, CarManager
 * (000324)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (00033C) S_END
 */

/*
 * (000340) S_GPROC32: [0001:0000B38F], Cb: 000000AF, Type:             0x1001, DumpObjectList
 *          Parent: 00000000, End: 0000039C, Next: 000003A0
 *          Debug start: 00000006, Debug end: 000000AB
 *          Flags: Frame Ptr Present
 * 
 * (000378)  S_BPREL32: [FFFFFFF8], Type:             0x1C0D, ObjList
 * (00038C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (00039C) S_END
 */

/*
 * (0003A0) S_GPROC32: [0001:0000B43E], Cb: 000000AF, Type:             0x17C9, CON_RCDestroy
 *          Parent: 00000000, End: 00000400, Next: 00000404
 *          Debug start: 00000003, Debug end: 000000AD
 *          Flags: Frame Ptr Present
 * 
 * (0003D8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0003EC)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * 
 * (000400) S_END
 */

/*
 * (000404) S_GPROC32: [0001:0000B4ED], Cb: 00000014, Type:             0x17C9, CON_RCHelp
 *          Parent: 00000000, End: 00000460, Next: 00000464
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (000438)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (00044C)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * 
 * (000460) S_END
 */

/*
 * (000464) S_GPROC32: [0001:0000B501], Cb: 0000011E, Type:             0x17C9, CON_RCQuickStart
 *          Parent: 00000000, End: 000004D4, Next: 000004D8
 *          Debug start: 00000004, Debug end: 0000011A
 *          Flags: Frame Ptr Present
 * 
 * (00049C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0004B0)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (0004C4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0004D4) S_END
 */

/*
 * (0004D8) S_LPROC32: [0001:0000B61F], Cb: 00000267, Type:             0x1D30, ParseCars
 *          Parent: 00000000, End: 00000654, Next: 00000658
 *          Debug start: 00000006, Debug end: 00000233
 *          Flags: Frame Ptr Present
 * 
 * (00050C)  S_LDATA32: [0001:0000B862], Type:     T_NOTYPE(0000), (none)
 * (00051C)  S_LDATA32: [0001:0000B856], Type:     T_NOTYPE(0000), (none)
 * (00052C)  S_LABEL32: [0001:0000B7E9], $L79761
 * (000540)  S_LABEL32: [0001:0000B804], $L79762
 * (000554)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000568)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (00057C)  S_BPREL32: [00000010], Type:      T_ULONG(0022), command
 * 
 * (000590)  S_BLOCK32: [0001:0000B668], Cb: 000001EA, (none)
 *           Parent: 000004D8, End: 00000650
 * 
 * (0005A8)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), numcars
 * 
 * (0005BC)   S_BLOCK32: [0001:0000B688], Cb: 000001C5, (none)
 *            Parent: 00000590, End: 0000064C
 * 
 * (0005D4)    S_BPREL32: [FFFFFFE4], Type:      T_RCHAR(0070), cskin
 * (0005E8)    S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), skin
 * (0005FC)    S_BPREL32: [FFFFFFEC], Type:             0x1D31, Index
 * (000610)    S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), driver
 * (000624)    S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), model
 * (000638)    S_BPREL32: [FFFFFFF8], Type:      T_RCHAR(0070), control
 * 
 * (00064C)   S_END
 * 
 * (000650)  S_END
 * 
 * (000654) S_END
 */

/*
 * (000658) S_LPROC32: [0001:0000B886], Cb: 0000000F, Type:             0x1D32, GetDriver
 *          Parent: 00000000, End: 000006B4, Next: 000006B8
 *          Debug start: 00000003, Debug end: 0000000D
 *          Flags: Frame Ptr Present
 * 
 * (00068C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), model
 * (0006A0)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), skin
 * 
 * (0006B4) S_END
 */

/*
 * (0006B8) S_LPROC32: [0001:0000B895], Cb: 00000191, Type:             0x1D30, ParseTracks
 *          Parent: 00000000, End: 00000758, Next: 0000075C
 *          Debug start: 00000006, Debug end: 0000018D
 *          Flags: Frame Ptr Present
 * 
 * (0006EC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000700)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (000714)  S_BPREL32: [00000010], Type:      T_ULONG(0022), command
 * (000728)  S_BPREL32: [FFFFFFB8], Type:      T_ULONG(0022), num
 * (000738)  S_BPREL32: [FFFFFFBC], Type:      T_RCHAR(0070), ch
 * (000748)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (000758) S_END
 */

/*
 * (00075C) S_GPROC32: [0001:0000BA26], Cb: 000000A7, Type:             0x17C9, CON_ECTS_Demo
 *          Parent: 00000000, End: 000007D0, Next: 000007D4
 *          Debug start: 00000006, Debug end: 000000A3
 *          Flags: Frame Ptr Present
 * 
 * (000794)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0007A8)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (0007BC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), demo_id
 * 
 * (0007D0) S_END
 */

/*
 * (0007D4) S_GPROC32: [0001:0000BACD], Cb: 0000015D, Type:             0x16A1, RC_ECTS_Demo
 *          Parent: 00000000, End: 0000082C, Next: 00000830
 *          Debug start: 00000006, Debug end: 00000159
 *          Flags: Frame Ptr Present
 * 
 * (000808)  S_BPREL32: [00000008], Type:      T_ULONG(0022), demo_id
 * (00081C)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (00082C) S_END
 */

/*
 * (000830) S_GPROC32: [0001:0000BC2A], Cb: 000002F5, Type:             0x17C9, CON_Gary
 *          Parent: 00000000, End: 00000928, Next: 0000092C
 *          Debug start: 00000006, Debug end: 000002E1
 *          Flags: Frame Ptr Present
 * 
 * (000860)  S_LDATA32: [0001:0000BF0F], Type:     T_NOTYPE(0000), (none)
 * (000870)  S_LABEL32: [0001:0000BE0B], $L79916
 * (000884)  S_LABEL32: [0001:0000BE21], $L79918
 * (000898)  S_LABEL32: [0001:0000BE37], $L79920
 * (0008AC)  S_LABEL32: [0001:0000BE40], $L79921
 * (0008C0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0008D4)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (0008E8)  S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), num
 * (0008F8)  S_BPREL32: [FFFFFFB8], Type:      T_RCHAR(0070), ch
 * (000908)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), i
 * (000918)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (000928) S_END
 */

/*
 * (00092C) S_GPROC32: [0001:0000BF1F], Cb: 000002D2, Type:             0x17C9, CON_Justin
 *          Parent: 00000000, End: 000009C8, Next: 000009CC
 *          Debug start: 00000006, Debug end: 000002CE
 *          Flags: Frame Ptr Present
 * 
 * (000960)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000974)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (000988)  S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), num
 * (000998)  S_BPREL32: [FFFFFFB8], Type:      T_RCHAR(0070), ch
 * (0009A8)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), i
 * (0009B8)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (0009C8) S_END
 */

/*
 * (0009CC) S_GPROC32: [0001:0000C1F1], Cb: 000002F5, Type:             0x17C9, CON_John
 *          Parent: 00000000, End: 00000AC4, Next: 00000AC8
 *          Debug start: 00000006, Debug end: 000002E1
 *          Flags: Frame Ptr Present
 * 
 * (0009FC)  S_LDATA32: [0001:0000C4D6], Type:     T_NOTYPE(0000), (none)
 * (000A0C)  S_LABEL32: [0001:0000C3D2], $L80036
 * (000A20)  S_LABEL32: [0001:0000C3E8], $L80038
 * (000A34)  S_LABEL32: [0001:0000C3FE], $L80040
 * (000A48)  S_LABEL32: [0001:0000C407], $L80041
 * (000A5C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000A70)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (000A84)  S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), num
 * (000A94)  S_BPREL32: [FFFFFFB8], Type:      T_RCHAR(0070), ch
 * (000AA4)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), i
 * (000AB4)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (000AC4) S_END
 */

/*
 * (000AC8) S_GPROC32: [0001:0000C4E6], Cb: 000002D8, Type:             0x17C9, CON_Herbert
 *          Parent: 00000000, End: 00000BC4, Next: 00000000
 *          Debug start: 00000006, Debug end: 000002C4
 *          Flags: Frame Ptr Present
 * 
 * (000AFC)  S_LDATA32: [0001:0000C7AE], Type:     T_NOTYPE(0000), (none)
 * (000B0C)  S_LABEL32: [0001:0000C6AA], $L80095
 * (000B20)  S_LABEL32: [0001:0000C6C0], $L80097
 * (000B34)  S_LABEL32: [0001:0000C6D6], $L80099
 * (000B48)  S_LABEL32: [0001:0000C6DF], $L80100
 * (000B5C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000B70)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (000B84)  S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), num
 * (000B94)  S_BPREL32: [FFFFFFB8], Type:      T_RCHAR(0070), ch
 * (000BA4)  S_BPREL32: [FFFFFFBC], Type:      T_ULONG(0022), i
 * (000BB4)  S_BPREL32: [FFFFFFC0], Type:             0x180C, str
 * 
 * (000BC4) S_END
 */

