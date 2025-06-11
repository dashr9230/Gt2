
// File: C:\CodePrj\Gt2\Game\src\dave\Teams.c

/*
 * ModName: .\Debug\Teams.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\Teams.obj
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
 * (000088) S_GPROC32: [0001:00027170], Cb: 000000D6, Type:             0x1001, Team_Init
 *          Parent: 00000000, End: 000000E4, Next: 000000E8
 *          Debug start: 00000006, Debug end: 000000D2
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [FFFFFFF8], Type:             0x181B, ThisTeam
 * (0000D4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0000E4) S_END
 * 
 * (0000E8) S_GPROC32: [0001:00027246], Cb: 00000057, Type:             0x1A66, Team_Join
 *          Parent: 00000000, End: 00000184, Next: 00000188
 *          Debug start: 00000006, Debug end: 00000053
 *          Flags: Frame Ptr Present
 * 
 * (00011C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Team
 * (000130)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Num
 * (000140)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Driver
 * (000154)  S_BPREL32: [FFFFFFF8], Type:             0x181B, ThisTeam
 * (00016C)  S_BPREL32: [FFFFFFFC], Type:             0x181F, ThisDriver
 * 
 * (000184) S_END
 * 
 * (000188) S_GPROC32: [0001:0002729D], Cb: 0000004C, Type:             0x16A1, Team_Leave
 *          Parent: 00000000, End: 00000200, Next: 00000204
 *          Debug start: 00000006, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (0001BC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Driver
 * (0001D0)  S_BPREL32: [FFFFFFF8], Type:             0x181B, ThisTeam
 * (0001E8)  S_BPREL32: [FFFFFFFC], Type:             0x181F, ThisDriver
 * 
 * (000200) S_END
 * 
 * (000204) S_GPROC32: [0001:000272E9], Cb: 0000009F, Type:             0x1BFD, Team_Swap
 *          Parent: 00000000, End: 00000318, Next: 0000031C
 *          Debug start: 00000006, Debug end: 0000009B
 *          Flags: Frame Ptr Present
 * 
 * (000238)  S_BPREL32: [00000008], Type:      T_ULONG(0022), DriverA
 * (00024C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), DriverB
 * (000260)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), ThisPosB
 * (000278)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), ThisPosA
 * (000290)  S_BPREL32: [FFFFFFE8], Type:             0x181F, ThisDriverA
 * (0002A8)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), TeamAID
 * (0002BC)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), TeamBID
 * (0002D0)  S_BPREL32: [FFFFFFF4], Type:             0x181F, ThisDriverB
 * (0002E8)  S_BPREL32: [FFFFFFF8], Type:             0x181B, ThisTeamB
 * (000300)  S_BPREL32: [FFFFFFFC], Type:             0x181B, ThisTeamA
 * 
 * (000318) S_END
 * 
 * (00031C) S_GPROC32: [0001:00027388], Cb: 0000006C, Type:             0x1BFF, Team_BuyVehicle
 *          Parent: 00000000, End: 000003D4, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000354)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Team
 * (000368)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), CarId
 * (00037C)  S_BPREL32: [00000010], Type:       T_INT4(0074), Make
 * (000390)  S_BPREL32: [00000014], Type:       T_INT4(0074), Skin
 * (0003A4)  S_BPREL32: [FFFFFFF8], Type:             0x181B, ThisTeam
 * (0003BC)  S_BPREL32: [FFFFFFFC], Type:             0x1BE6, ThisVehicle
 * 
 * (0003D4) S_END
 * 
 * (0003D8) S_GDATA32: [0003:00992AC0], Type:             0x1820, Drivers
 * (0003F0) S_GDATA32: [0003:0099D1C0], Type:             0x1836, Default_VehicleSetups
 * (000414) S_GDATA32: [0003:00990BE0], Type:             0x1837, Teams
 * (000428) S_GDATA32: [0003:00005FEC], Type:             0x1C00, TeamNames
 * 
 */

