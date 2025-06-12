
// File: C:\CodePrj\Gt2\Game\src\dave\raceovermenu.c

/*
 * ModName: .\Debug\raceovermenu.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\raceovermenu.obj
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
 * (0003F8) S_GDATA32: [0003:00C440E0], Type:             0x1A20, Key
 * (00040C) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000424) S_GDATA32: [0003:0097F280], Type:             0x1C41, GAMETEXT
 * (00043C) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (000458) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 */

/*
 * (000090) S_GPROC32: [0001:0001F570], Cb: 0000017C, Type:             0x1824, RACEOVERMENU_Allocate
 *          Parent: 00000000, End: 0000010C, Next: 00000110
 *          Debug start: 00000006, Debug end: 00000178
 *          Flags: Frame Ptr Present
 * 
 * (0000D0)  S_BPREL32: [FFFFFFF4], Type:             0x1404, obj
 * (0000E0)  S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * (0000F8)  S_BPREL32: [FFFFFFFC], Type:             0x1C3E, Menu
 * 
 * (00010C) S_END
 */

/*
 * (000110) S_LPROC32: [0001:0001F6EC], Cb: 00000062, Type:             0x1C40, RACEOVERMENU_AddItem
 *          Parent: 00000000, End: 00000198, Next: 0000019C
 *          Debug start: 00000004, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (00014C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00015C)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), text
 * (000170)  S_BPREL32: [00000010], Type:             0x1407, func
 * (000184)  S_BPREL32: [FFFFFFFC], Type:             0x1C3E, Menu
 * 
 * (000198) S_END
 */

/*
 * (00019C) S_LPROC32: [0001:0001F74E], Cb: 00000026, Type:             0x1408, RACEOVERMENU_Destroy
 *          Parent: 00000000, End: 000001FC, Next: 00000200
 *          Debug start: 00000004, Debug end: 00000022
 *          Flags: Frame Ptr Present
 * 
 * (0001D8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0001E8)  S_BPREL32: [FFFFFFFC], Type:             0x1C3E, Menu
 * 
 * (0001FC) S_END
 */

/*
 * (000200) S_LPROC32: [0001:0001F774], Cb: 0000059D, Type:             0x1408, RACEOVERMENU_Handler
 *          Parent: 00000000, End: 00000280, Next: 00000284
 *          Debug start: 00000006, Debug end: 00000599
 *          Flags: Frame Ptr Present
 * 
 * (00023C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00024C)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (00025C)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), c
 * (00026C)  S_BPREL32: [FFFFFFFC], Type:             0x1C3E, Menu
 * 
 * (000280) S_END
 */

/*
 * (000284) S_LPROC32: [0001:0001FD11], Cb: 0000004C, Type:             0x1408, RACEOVERMENU_Replay
 *          Parent: 00000000, End: 00000310, Next: 00000314
 *          Debug start: 00000006, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (0002C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0002D0)  S_BPREL32: [FFFFFFF4], Type:             0x1A83, Time
 * (0002E4)  S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * (0002FC)  S_BPREL32: [FFFFFFFC], Type:             0x1C3E, Menu
 * 
 * (000310) S_END
 */

/*
 * (000314) S_LPROC32: [0001:0001FD5D], Cb: 0000002E, Type:             0x1408, RACEOVERMENU_SaveReplay
 *          Parent: 00000000, End: 00000378, Next: 0000037C
 *          Debug start: 00000004, Debug end: 0000002A
 *          Flags: Frame Ptr Present
 * 
 * (000354)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000364)  S_BPREL32: [FFFFFFFC], Type:             0x1C3E, Menu
 * 
 * (000378) S_END
 */

/*
 * (00037C) S_LPROC32: [0001:0001FD8B], Cb: 00000034, Type:             0x1408, RACEOVERMENU_Leave
 *          Parent: 00000000, End: 000003F4, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (0003B8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0003C8)  S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * (0003E0)  S_BPREL32: [FFFFFFFC], Type:             0x1C3E, Menu
 * 
 * (0003F4) S_END
 */

