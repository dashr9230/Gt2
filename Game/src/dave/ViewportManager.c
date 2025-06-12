
// File: C:\CodePrj\Gt2\Game\src\dave\ViewportManager.c

/*
 * ModName: .\Debug\ViewportManager.obj
 * (000004) Start search for segment 0x1 at symbol 0x94(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\ViewportManager.obj
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
 * (0014A0) S_GDATA32: [0003:0097BEE0], Type:             0x1BE3, VPM_GameScreen
 * (0014C0) S_GDATA32: [0003:0121E7A0], Type:             0x1BE5, CloseUpCameras
 * (0014E0) S_GDATA32: [0003:00C31A60], Type:             0x1A1E, Jstk
 * (0014F4) S_GDATA32: [0003:0097C0A0], Type:             0x1A7F, CamScreen
 * (00150C) S_GDATA32: [0003:0097C080], Type:      T_ULONG(0022), VPM_ScreenCount
 * (00152C) S_GDATA32: [0003:0097C084], Type:      T_ULONG(0022), VPM_NumDrivable
 * (00154C) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (001564) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (00157C) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 */

/*
 * (000094) S_GPROC32: [0001:00028430], Cb: 0000004B, Type:             0x1001, VPM_Init
 *          Parent: 00000000, End: 000000D4, Next: 000000D8
 *          Debug start: 00000004, Debug end: 00000047
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0000D4) S_END
 */

/*
 * (0000D8) S_GPROC32: [0001:0002847B], Cb: 00000097, Type:             0x1BD7, VPM_Request
 *          Parent: 00000000, End: 0000018C, Next: 00000190
 *          Debug start: 00000006, Debug end: 00000093
 *          Flags: Frame Ptr Present
 * 
 * (00010C)  S_BPREL32: [00000008], Type:       T_INT4(0074), Context
 * (000120)  S_BPREL32: [0000000C], Type:       T_INT4(0074), UserView
 * (000138)  S_BPREL32: [00000010], Type:             0x1404, Target
 * (00014C)  S_BPREL32: [00000014], Type:       T_INT4(0074), Frame
 * (000160)  S_BPREL32: [00000018], Type:             0x13EE, Renderer
 * (000178)  S_BPREL32: [FFFFFFFC], Type:             0x1A7E, Screen
 * 
 * (00018C) S_END
 */

/*
 * (000190) S_GPROC32: [0001:00028512], Cb: 0000015E, Type:             0x1001, VPM_DesignateDrivableVPs
 *          Parent: 00000000, End: 000002D0, Next: 000002D4
 *          Debug start: 00000006, Debug end: 0000013A
 *          Flags: Frame Ptr Present
 * 
 * (0001D0)  S_LDATA32: [0001:00028660], Type:     T_NOTYPE(0000), (none)
 * (0001E0)  S_LDATA32: [0001:00028650], Type:     T_NOTYPE(0000), (none)
 * (0001F0)  S_LABEL32: [0001:0002858C], $L80427
 * (000204)  S_LABEL32: [0001:0002859B], $L80428
 * (000218)  S_LABEL32: [0001:000285BC], $L80431
 * (00022C)  S_LABEL32: [0001:000285FA], $L80439
 * (000240)  S_LABEL32: [0001:00028610], $L80444
 * (000254)  S_LABEL32: [0001:0002861C], $L80445
 * (000268)  S_LABEL32: [0001:00028628], $L80446
 * (00027C)  S_LABEL32: [0001:00028634], $L80447
 * (000290)  S_BPREL32: [FFFFFFF4], Type:             0x1A7E, Screen
 * (0002A4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (0002B4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), NumProcessed
 * 
 * (0002D0) S_END
 */

/*
 * (0002D4) S_GPROC32: [0001:00028670], Cb: 000005D4, Type:             0x1001, VPM_Allocate
 *          Parent: 00000000, End: 00000530, Next: 00000534
 *          Debug start: 00000006, Debug end: 0000056C
 *          Flags: Frame Ptr Present
 * 
 * (000308)  S_LDATA32: [0001:00028BE0], Type:     T_NOTYPE(0000), (none)
 * (000318)  S_LABEL32: [0001:00028721], $L80460
 * (00032C)  S_LABEL32: [0001:00028751], $L80461
 * (000340)  S_LABEL32: [0001:00028784], $L80462
 * (000354)  S_LABEL32: [0001:000287B4], $L80463
 * (000368)  S_LABEL32: [0001:000287E7], $L80464
 * (00037C)  S_LABEL32: [0001:0002881A], $L80465
 * (000390)  S_LABEL32: [0001:0002884A], $L80466
 * (0003A4)  S_LABEL32: [0001:0002887D], $L80467
 * (0003B8)  S_LABEL32: [0001:000288B3], $L80468
 * (0003CC)  S_LABEL32: [0001:000288E6], $L80469
 * (0003E0)  S_LABEL32: [0001:0002891C], $L80470
 * (0003F4)  S_LABEL32: [0001:0002894C], $L80471
 * (000408)  S_LABEL32: [0001:0002897F], $L80472
 * (00041C)  S_LABEL32: [0001:000289AF], $L80473
 * (000430)  S_LABEL32: [0001:000289E2], $L80474
 * (000444)  S_LABEL32: [0001:00028A12], $L80475
 * (000458)  S_LABEL32: [0001:00028A45], $L80476
 * (00046C)  S_LABEL32: [0001:00028A75], $L80477
 * (000480)  S_LABEL32: [0001:00028A9F], $L80478
 * (000494)  S_LABEL32: [0001:00028AC9], $L80479
 * (0004A8)  S_LABEL32: [0001:00028AF3], $L80480
 * (0004BC)  S_LABEL32: [0001:00028B1D], $L80481
 * (0004D0)  S_LABEL32: [0001:00028B47], $L80482
 * (0004E4)  S_LABEL32: [0001:00028B71], $L80483
 * (0004F8)  S_LABEL32: [0001:00028B9B], $L80484
 * (00050C)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000520)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000530) S_END
 */

/*
 * (000534) S_GPROC32: [0001:00028C44], Cb: 000000D0, Type:             0x1001, VPM_AllocateHUDs
 *          Parent: 00000000, End: 00000590, Next: 00000594
 *          Debug start: 00000006, Debug end: 000000CC
 *          Flags: Frame Ptr Present
 * 
 * (00056C)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000580)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000590) S_END
 */

/*
 * (000594) S_GPROC32: [0001:00028D14], Cb: 00000017, Type:             0x1BD9, VPM_SetSideEffect
 *          Parent: 00000000, End: 000005FC, Next: 00000600
 *          Debug start: 00000003, Debug end: 00000015
 *          Flags: Frame Ptr Present
 * 
 * (0005D0)  S_BPREL32: [00000008], Type:             0x1A7E, Change
 * (0005E4)  S_BPREL32: [0000000C], Type:             0x1A7E, SideEffect
 * 
 * (0005FC) S_END
 */

/*
 * (000600) S_GPROC32: [0001:00028D2B], Cb: 0000004C, Type:             0x1001, VPM_SetFixedTarget
 *          Parent: 00000000, End: 00000660, Next: 00000664
 *          Debug start: 00000006, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (00063C)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000650)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000660) S_END
 */

/*
 * (000664) S_GPROC32: [0001:00028D77], Cb: 000002BD, Type:             0x1BDB, VPM_DirectScreen
 *          Parent: 00000000, End: 000006EC, Next: 000006F0
 *          Debug start: 00000006, Debug end: 000002B9
 *          Flags: Frame Ptr Present
 * 
 * (00069C)  S_BPREL32: [00000008], Type:             0x1A7E, Screen
 * (0006B0)  S_BPREL32: [FFFFFFF4], Type:             0x1420, ThisMenu
 * (0006C8)  S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (0006DC)  S_BPREL32: [FFFFFFFC], Type:             0x140A, Cam
 * 
 * (0006EC) S_END
 */

/*
 * (0006F0) S_GPROC32: [0001:00029034], Cb: 00000044, Type:             0x1001, VPM_Direct
 *          Parent: 00000000, End: 00000748, Next: 0000074C
 *          Debug start: 00000006, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000724)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000738)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000748) S_END
 */

/*
 * (00074C) S_GPROC32: [0001:00029078], Cb: 00000099, Type:             0x1001, VPM_AutoChanger
 *          Parent: 00000000, End: 000007A8, Next: 000007AC
 *          Debug start: 00000006, Debug end: 00000095
 *          Flags: Frame Ptr Present
 * 
 * (000784)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000798)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0007A8) S_END
 */

/*
 * (0007AC) S_GPROC32: [0001:00029111], Cb: 000000E2, Type:             0x1001, VPM_Release
 *          Parent: 00000000, End: 000007F0, Next: 000007F4
 *          Debug start: 00000004, Debug end: 000000DE
 *          Flags: Frame Ptr Present
 * 
 * (0007E0)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0007F0) S_END
 */

/*
 * (0007F4) S_GPROC32: [0001:000291F3], Cb: 000000F7, Type:             0x1BDD, VPORT_SimpleSetup
 *          Parent: 00000000, End: 00000914, Next: 00000918
 *          Debug start: 00000006, Debug end: 000000F3
 *          Flags: Frame Ptr Present
 * 
 * (000830)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (000844)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), x
 * (000854)  S_BPREL32: [00000010], Type:      T_ULONG(0022), y
 * (000864)  S_BPREL32: [00000014], Type:      T_ULONG(0022), w
 * (000874)  S_BPREL32: [00000018], Type:      T_ULONG(0022), h
 * (000884)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), NearP
 * (000898)  S_BPREL32: [00000020], Type:     T_REAL32(0040), FarP
 * (0008AC)  S_BPREL32: [00000024], Type:     T_USHORT(0021), Fov
 * (0008BC)  S_BPREL32: [00000028], Type:      T_ULONG(0022), Mirror
 * 
 * (0008D0)  S_BLOCK32: [0001:00029203], Cb: 000000E3, (none)
 *           Parent: 000007F4, End: 00000910
 * 
 * (0008E8)   S_BPREL32: [FFFFFFF0], Type:     T_REAL64(0041), YScale
 * (0008FC)   S_BPREL32: [FFFFFFF8], Type:     T_REAL64(0041), XScale
 * 
 * (000910)  S_END
 * 
 * (000914) S_END
 */

/*
 * (000918) S_GPROC32: [0001:000292EA], Cb: 000000A8, Type:             0x1BDF, RC_CameraScreen
 *          Parent: 00000000, End: 00000A1C, Next: 00000A20
 *          Debug start: 00000006, Debug end: 000000A4
 *          Flags: Frame Ptr Present
 * 
 * (000950)  S_BPREL32: [00000008], Type:             0x1A7E, VPM_Screen
 * (000968)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), x
 * (000978)  S_BPREL32: [00000010], Type:      T_ULONG(0022), y
 * (000988)  S_BPREL32: [00000014], Type:      T_ULONG(0022), w
 * (000998)  S_BPREL32: [00000018], Type:      T_ULONG(0022), h
 * (0009A8)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), NearP
 * (0009BC)  S_BPREL32: [00000020], Type:     T_REAL32(0040), FarP
 * (0009D0)  S_BPREL32: [00000024], Type:     T_USHORT(0021), Fov
 * (0009E0)  S_BPREL32: [00000028], Type:      T_ULONG(0022), Mirror
 * (0009F4)  S_BPREL32: [FFFFFFF8], Type:             0x13EB, Scr
 * (000A04)  S_BPREL32: [FFFFFFFC], Type:             0x1B32, Director
 * 
 * (000A1C) S_END
 */

/*
 * (000A20) S_GPROC32: [0001:00029392], Cb: 000000B3, Type:             0x1BDF, RC_PlayerScreen
 *          Parent: 00000000, End: 00000B24, Next: 00000B28
 *          Debug start: 00000006, Debug end: 000000AF
 *          Flags: Frame Ptr Present
 * 
 * (000A58)  S_BPREL32: [00000008], Type:             0x1A7E, VPM_Screen
 * (000A70)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), x
 * (000A80)  S_BPREL32: [00000010], Type:      T_ULONG(0022), y
 * (000A90)  S_BPREL32: [00000014], Type:      T_ULONG(0022), w
 * (000AA0)  S_BPREL32: [00000018], Type:      T_ULONG(0022), h
 * (000AB0)  S_BPREL32: [0000001C], Type:     T_REAL32(0040), NearP
 * (000AC4)  S_BPREL32: [00000020], Type:     T_REAL32(0040), FarP
 * (000AD8)  S_BPREL32: [00000024], Type:     T_USHORT(0021), Fov
 * (000AE8)  S_BPREL32: [00000028], Type:      T_ULONG(0022), Mirror
 * (000AFC)  S_BPREL32: [FFFFFFF8], Type:             0x13EB, Scr
 * (000B0C)  S_BPREL32: [FFFFFFFC], Type:             0x1B32, Director
 * 
 * (000B24) S_END
 */

/*
 * (000B28) S_GPROC32: [0001:00029445], Cb: 00000552, Type:             0x1BDB, VPM_Setup
 *          Parent: 00000000, End: 00000D3C, Next: 00000D40
 *          Debug start: 00000006, Debug end: 000004EA
 *          Flags: Frame Ptr Present
 * 
 * (000B5C)  S_LDATA32: [0001:00029933], Type:     T_NOTYPE(0000), (none)
 * (000B6C)  S_LABEL32: [0001:000294B6], $L80663
 * (000B80)  S_LABEL32: [0001:000294F0], $L80664
 * (000B94)  S_LABEL32: [0001:0002952D], $L80665
 * (000BA8)  S_LABEL32: [0001:00029567], $L80666
 * (000BBC)  S_LABEL32: [0001:000295A4], $L80667
 * (000BD0)  S_LABEL32: [0001:000295E1], $L80668
 * (000BE4)  S_LABEL32: [0001:0002961B], $L80669
 * (000BF8)  S_LABEL32: [0001:00029658], $L80670
 * (000C0C)  S_LABEL32: [0001:00029698], $L80671
 * (000C20)  S_LABEL32: [0001:000296D5], $L80672
 * (000C34)  S_LABEL32: [0001:00029715], $L80673
 * (000C48)  S_LABEL32: [0001:0002974F], $L80674
 * (000C5C)  S_LABEL32: [0001:0002978C], $L80675
 * (000C70)  S_LABEL32: [0001:000297C6], $L80676
 * (000C84)  S_LABEL32: [0001:000297F3], $L80677
 * (000C98)  S_LABEL32: [0001:00029820], $L80678
 * (000CAC)  S_LABEL32: [0001:0002984D], $L80679
 * (000CC0)  S_LABEL32: [0001:0002987A], $L80680
 * (000CD4)  S_LABEL32: [0001:000298AA], $L80681
 * (000CE8)  S_LABEL32: [0001:000298D7], $L80682
 * (000CFC)  S_LABEL32: [0001:00029904], $L80683
 * (000D10)  S_BPREL32: [00000008], Type:             0x1A7E, Screen
 * (000D24)  S_BPREL32: [FFFFFFFC], Type:             0x1B32, Director
 * 
 * (000D3C) S_END
 */

/*
 * (000D40) S_GPROC32: [0001:00029997], Cb: 0000003D, Type:             0x1BDB, VPM_NextCar
 *          Parent: 00000000, End: 00000D88, Next: 00000D8C
 *          Debug start: 00000003, Debug end: 0000003B
 *          Flags: Frame Ptr Present
 * 
 * (000D74)  S_BPREL32: [00000008], Type:             0x1A7E, Screen
 * 
 * (000D88) S_END
 */

/*
 * (000D8C) S_GPROC32: [0001:000299D4], Cb: 00000276, Type:             0x1BDB, VPM_NextUser
 *          Parent: 00000000, End: 00000E38, Next: 00000E3C
 *          Debug start: 00000006, Debug end: 00000272
 *          Flags: Frame Ptr Present
 * 
 * (000DC0)  S_BPREL32: [00000008], Type:             0x1A7E, Screen
 * 
 * (000DD4)  S_BLOCK32: [0001:000299E7], Cb: 00000106, (none)
 *           Parent: 00000D8C, End: 00000E00
 * 
 * (000DEC)   S_BPREL32: [FFFFFFFC], Type:             0x1A9D, ThisCar
 * 
 * (000E00)  S_END
 * 
 * (000E04)  S_BLOCK32: [0001:00029AFF], Cb: 00000147, (none)
 *           Parent: 00000D8C, End: 00000E34
 * 
 * (000E1C)   S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * 
 * (000E34)  S_END
 * 
 * (000E38) S_END
 */

/*
 * (000E3C) S_GPROC32: [0001:00029C4A], Cb: 0000019B, Type:             0x1001, VPM_KeyChecks
 *          Parent: 00000000, End: 00000EDC, Next: 00000EE0
 *          Debug start: 00000006, Debug end: 00000197
 *          Flags: Frame Ptr Present
 * 
 * (000E74)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000E88)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000E98)  S_BLOCK32: [0001:00029D5D], Cb: 0000007F, (none)
 *           Parent: 00000E3C, End: 00000ED8
 * 
 * (000EB0)   S_BPREL32: [FFFFFFF0], Type:             0x1A9D, ThisCar
 * (000EC4)   S_BPREL32: [FFFFFFF4], Type:             0x176F, NJstk
 * 
 * (000ED8)  S_END
 * 
 * (000EDC) S_END
 */

/*
 * (000EE0) S_GPROC32: [0001:00029DE5], Cb: 000000A8, Type:             0x1BE0, VPM_FindTV
 *          Parent: 00000000, End: 00000F38, Next: 00000F3C
 *          Debug start: 00000006, Debug end: 000000A4
 *          Flags: Frame Ptr Present
 * 
 * (000F14)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000F28)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000F38) S_END
 */

/*
 * (000F3C) S_GPROC32: [0001:00029E8D], Cb: 000000C5, Type:             0x1BE0, VPM_FindFullScreen
 *          Parent: 00000000, End: 00000F9C, Next: 00000FA0
 *          Debug start: 00000006, Debug end: 000000C1
 *          Flags: Frame Ptr Present
 * 
 * (000F78)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (000F8C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000F9C) S_END
 */

/*
 * (000FA0) S_GPROC32: [0001:00029F52], Cb: 000000A6, Type:             0x1BE2, VPM_Force
 *          Parent: 00000000, End: 00001020, Next: 00001024
 *          Debug start: 00000006, Debug end: 000000A2
 *          Flags: Frame Ptr Present
 * 
 * (000FD4)  S_BPREL32: [00000008], Type:       T_INT4(0074), Mask
 * (000FE8)  S_BPREL32: [0000000C], Type:       T_INT4(0074), Mode
 * (000FFC)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (001010)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (001020) S_END
 */

/*
 * (001024) S_GPROC32: [0001:00029FF8], Cb: 000000F6, Type:             0x1A19, VPM_UnForce
 *          Parent: 00000000, End: 000010F4, Next: 000010F8
 *          Debug start: 00000006, Debug end: 000000F2
 *          Flags: Frame Ptr Present
 * 
 * (001058)  S_BPREL32: [00000008], Type:       T_INT4(0074), Mask
 * (00106C)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (001080)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (001090)  S_BLOCK32: [0001:0002A052], Cb: 00000056, (none)
 *           Parent: 00001024, End: 000010C0
 * 
 * (0010A8)   S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * 
 * (0010C0)  S_END
 * 
 * (0010C4)  S_BLOCK32: [0001:0002A0B3], Cb: 00000021, (none)
 *           Parent: 00001024, End: 000010F0
 * 
 * (0010DC)   S_BPREL32: [FFFFFFF0], Type:             0x1A9D, ThisCar
 * 
 * (0010F0)  S_END
 * 
 * (0010F4) S_END
 */

/*
 * (0010F8) S_GPROC32: [0001:0002A0EE], Cb: 0000020F, Type:             0x16A1, VPM_Debug
 *          Parent: 00000000, End: 00001258, Next: 0000125C
 *          Debug start: 00000006, Debug end: 000001F3
 *          Flags: Frame Ptr Present
 * 
 * (00112C)  S_LDATA32: [0001:0002A2E5], Type:     T_NOTYPE(0000), (none)
 * (00113C)  S_LABEL32: [0001:0002A1A9], $L80877
 * (001150)  S_LABEL32: [0001:0002A202], $L80880
 * (001164)  S_LABEL32: [0001:0002A254], $L80883
 * (001178)  S_LABEL32: [0001:0002A267], $L80885
 * (00118C)  S_LABEL32: [0001:0002A27A], $L80887
 * (0011A0)  S_LABEL32: [0001:0002A28D], $L80889
 * (0011B4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), data
 * (0011C8)  S_BPREL32: [FFFFFFC0], Type:             0x1A9D, Car
 * (0011D8)  S_BPREL32: [FFFFFFC4], Type:             0x1004, ContextStr
 * (0011F0)  S_BPREL32: [FFFFFFD4], Type:             0x1004, ModeStr
 * (001204)  S_BPREL32: [FFFFFFE4], Type:             0x1A7E, Screen
 * (001218)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), i
 * (001228)  S_BPREL32: [FFFFFFEC], Type:             0x1004, UserModeStr
 * (001240)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (001258) S_END
 */

/*
 * (00125C) S_LPROC32: [0001:0002A2FD], Cb: 000000DB, Type:             0x1B7C, DriverSetModeStr
 *          Parent: 00000000, End: 00001368, Next: 0000136C
 *          Debug start: 00000004, Debug end: 000000B7
 *          Flags: Frame Ptr Present
 * 
 * (001294)  S_LDATA32: [0001:0002A3B8], Type:     T_NOTYPE(0000), (none)
 * (0012A4)  S_LABEL32: [0001:0002A31B], $L80821
 * (0012B8)  S_LABEL32: [0001:0002A331], $L80823
 * (0012CC)  S_LABEL32: [0001:0002A344], $L80825
 * (0012E0)  S_LABEL32: [0001:0002A357], $L80827
 * (0012F4)  S_LABEL32: [0001:0002A36A], $L80829
 * (001308)  S_LABEL32: [0001:0002A37D], $L80831
 * (00131C)  S_LABEL32: [0001:0002A390], $L80833
 * (001330)  S_LABEL32: [0001:0002A3A3], $L80835
 * (001344)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), str
 * (001354)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Mode
 * 
 * (001368) S_END
 */

/*
 * (00136C) S_LPROC32: [0001:0002A3D8], Cb: 00000078, Type:             0x1B7C, PipSetModeStr
 *          Parent: 00000000, End: 00001428, Next: 0000142C
 *          Debug start: 00000004, Debug end: 00000064
 *          Flags: Frame Ptr Present
 * 
 * (0013A4)  S_LDATA32: [0001:0002A440], Type:     T_NOTYPE(0000), (none)
 * (0013B4)  S_LABEL32: [0001:0002A3F2], $L80847
 * (0013C8)  S_LABEL32: [0001:0002A405], $L80849
 * (0013DC)  S_LABEL32: [0001:0002A418], $L80851
 * (0013F0)  S_LABEL32: [0001:0002A42B], $L80853
 * (001404)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), str
 * (001414)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Mode
 * 
 * (001428) S_END
 */

/*
 * (00142C) S_GPROC32: [0001:0002A450], Cb: 0000009C, Type:             0x1408, VPM_ForceObjFinish
 *          Parent: 00000000, End: 0000149C, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000098
 *          Flags: Frame Ptr Present
 * 
 * (001468)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (001478)  S_BPREL32: [FFFFFFF8], Type:             0x1A7E, Screen
 * (00148C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (00149C) S_END
 */

