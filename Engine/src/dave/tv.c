
// File: C:\CodePrj\Gt2\Engine\src\dave\tv.c

/*
 * ModName: .\Debug\tv.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\tv.obj
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
 * 
 */

/*
 * (001158) S_GDATA32: [0002:000020E8], Type:             0x1C37, CAM_XPOS
 * (001170) S_GDATA32: [0002:000020EC], Type:             0x1C37, CAM_YPOS
 * (001188) S_GDATA32: [0003:00070480], Type:             0x1006, CameraMatrix
 * (0011A4) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (0011BC) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (0011D8) S_GDATA32: [0003:00C97100], Type:             0x1AD2, RS_TransformChge
 * (0011F8) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (001214) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (001230) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (00124C) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * (001268) S_LDATA32: [0003:0091E0A4], Type:      T_ULONG(0022), NumCameramen
 * (001284) S_GDATA32: [0003:00C30EC0], Type:             0x1006, CamRotXMatrix
 * (0012A0) S_GDATA32: [0003:00C30F60], Type:             0x1006, CamRotYMatrix
 * (0012BC) S_GDATA32: [0003:00C30F00], Type:             0x1006, CamRotZMatrix
 * (0012D8) S_GDATA32: [0003:00070440], Type:             0x1006, CamTransMatrix
 * (0012F8) S_GDATA32: [0003:0121E6E8], Type:     T_USHORT(0021), Monitor_DRot
 * (001314) S_GDATA32: [0003:0121E644], Type:     T_USHORT(0021), Monitor_VRot
 * (001330) S_GDATA32: [0003:0121EFA0], Type:     T_USHORT(0021), Monitor_YRot
 * (00134C) S_GDATA32: [0003:0121E640], Type:             0x1B32, DirectorFocus
 * (001368) S_GDATA32: [0003:0121E6E4], Type:       T_INT4(0074), DirectorFocusShow
 * (001388) S_GDATA32: [0003:0121E700], Type:             0x140B, CamHead
 * (0013A0) S_GDATA32: [0003:0121E660], Type:             0x140B, CamTail
 * (0013B8) S_GDATA32: [0003:0121E7A0], Type:             0x1BE5, CloseUpCameras
 */

/*
 * (000088) S_GPROC32: [0001:00080090], Cb: 00000005, Type:             0x1FD3, CreateCamLogo
 *          Parent: 00000000, End: 000000D0, Next: 000000D4
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x140A, Cam
 * 
 * (0000D0) S_END
 */

/*
 * (0000D4) S_GPROC32: [0001:00080095], Cb: 00000005, Type:             0x1FD5, SetCamPrimColor
 *          Parent: 00000000, End: 00000130, Next: 00000134
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (00010C)  S_BPREL32: [00000008], Type:             0x140A, Cam
 * (00011C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Color
 * 
 * (000130) S_END
 */

/*
 * (000134) S_GPROC32: [0001:0008009A], Cb: 0000006F, Type:             0x1001, TV_Init
 *          Parent: 00000000, End: 00000164, Next: 00000168
 *          Debug start: 00000003, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (000164) S_END
 */

/*
 * (000168) S_GPROC32: [0001:00080109], Cb: 0000001E, Type:             0x1001, TV_Shutdown
 *          Parent: 00000000, End: 0000019C, Next: 000001A0
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (00019C) S_END
 */

/*
 * (0001A0) S_GPROC32: [0001:00080127], Cb: 0000005E, Type:             0x1FD6, TV_Director_Allocate
 *          Parent: 00000000, End: 000001F4, Next: 000001F8
 *          Debug start: 00000006, Debug end: 00000058
 *          Flags: Frame Ptr Present
 * 
 * (0001DC)  S_BPREL32: [FFFFFFFC], Type:             0x1B32, Director
 * 
 * (0001F4) S_END
 */

/*
 * (0001F8) S_GPROC32: [0001:00080185], Cb: 00000021, Type:             0x1FD8, TV_Director_Release
 *          Parent: 00000000, End: 0000024C, Next: 00000250
 *          Debug start: 00000003, Debug end: 0000001F
 *          Flags: Frame Ptr Present
 * 
 * (000234)  S_BPREL32: [00000008], Type:             0x1B32, Director
 * 
 * (00024C) S_END
 */

/*
 * (000250) S_GPROC32: [0001:000801A6], Cb: 00000200, Type:             0x1FD9, TV_Director_HireCameraMan
 *          Parent: 00000000, End: 000002BC, Next: 000002C0
 *          Debug start: 00000004, Debug end: 000001FC
 *          Flags: Frame Ptr Present
 * 
 * (000294)  S_BPREL32: [00000008], Type:             0x140A, CamInfo
 * (0002A8)  S_BPREL32: [FFFFFFFC], Type:             0x140A, NewCam
 * 
 * (0002BC) S_END
 */

/*
 * (0002C0) S_GPROC32: [0001:000803A6], Cb: 0000004F, Type:             0x1FD3, TV_Director_FireCameraMan
 *          Parent: 00000000, End: 00000314, Next: 00000318
 *          Debug start: 00000003, Debug end: 0000004D
 *          Flags: Frame Ptr Present
 * 
 * (000304)  S_BPREL32: [00000008], Type:             0x140A, Cam
 * 
 * (000314) S_END
 */

/*
 * (000318) S_GPROC32: [0001:000803F5], Cb: 0000001D, Type:             0x1FDB, TV_Director_ChooseFeed
 *          Parent: 00000000, End: 00000394, Next: 00000398
 *          Debug start: 00000004, Debug end: 00000019
 *          Flags: Frame Ptr Present
 * 
 * (000358)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (00036C)  S_BPREL32: [0000000C], Type:             0x140A, Cam
 * (00037C)  S_BPREL32: [FFFFFFFC], Type:             0x1B32, Director
 * 
 * (000394) S_END
 */

/*
 * (000398) S_GPROC32: [0001:00080412], Cb: 00000178, Type:             0x13EF, TV_Director_UpdateCam
 *          Parent: 00000000, End: 00000424, Next: 00000428
 *          Debug start: 0000000B, Debug end: 00000172
 *          Flags: Frame Ptr Present
 * 
 * (0003D8)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (0003EC)  S_BPREL32: [FFFFFF7C], Type:             0x1B32, Director
 * (000404)  S_BPREL32: [FFFFFF80], Type:             0x1006, tm2
 * (000414)  S_BPREL32: [FFFFFFC0], Type:             0x1006, tm1
 * 
 * (000424) S_END
 */

/*
 * (000428) S_GPROC32: [0001:0008058A], Cb: 00000073, Type:             0x13EF, TV_CameraHandler
 *          Parent: 00000000, End: 000004A0, Next: 000004A4
 *          Debug start: 00000008, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (000460)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (000474)  S_BPREL32: [FFFFFFF8], Type:             0x1B32, Director
 * (00048C)  S_BPREL32: [FFFFFFFC], Type:             0x140A, ThisCam
 * 
 * (0004A0) S_END
 */

/*
 * (0004A4) S_GPROC32: [0001:000805FD], Cb: 00000068, Type:             0x13EF, TV_CameraHandlerTvOnly
 *          Parent: 00000000, End: 00000524, Next: 00000528
 *          Debug start: 00000008, Debug end: 00000062
 *          Flags: Frame Ptr Present
 * 
 * (0004E4)  S_BPREL32: [00000008], Type:             0x13EB, Screen
 * (0004F8)  S_BPREL32: [FFFFFFF8], Type:             0x1B32, Director
 * (000510)  S_BPREL32: [FFFFFFFC], Type:             0x140A, ThisCam
 * 
 * (000524) S_END
 */

/*
 * (000528) S_GPROC32: [0001:00080665], Cb: 000005C0, Type:             0x1FD3, TV_CameraShoot
 *          Parent: 00000000, End: 000006F8, Next: 000006FC
 *          Debug start: 00000006, Debug end: 000005BC
 *          Flags: Frame Ptr Present
 * 
 * (000560)  S_BPREL32: [00000008], Type:             0x140A, Cam
 * (000570)  S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), TeleZ
 * (000584)  S_BPREL32: [FFFFFFD8], Type:     T_USHORT(0021), VRot
 * (000598)  S_BPREL32: [FFFFFFDC], Type:      T_SHORT(0011), VRotCalc
 * (0005B0)  S_BPREL32: [FFFFFFE0], Type:       T_INT4(0074), CamVisible
 * (0005C8)  S_BPREL32: [FFFFFFE4], Type:     T_USHORT(0021), DRot
 * (0005DC)  S_BPREL32: [FFFFFFE8], Type:     T_USHORT(0021), YRotNew
 * (0005F0)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), Tele2
 * (000604)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), Sway
 * (000618)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), Tele1
 * (00062C)  S_BPREL32: [FFFFFFF8], Type:     T_USHORT(0021), YRot
 * (000640)  S_BPREL32: [FFFFFFFC], Type:     T_USHORT(0021), YRotOld
 * 
 * (000654)  S_BLOCK32: [0001:00080813], Cb: 00000042, (none)
 *           Parent: 00000528, End: 00000694
 * 
 * (00066C)   S_BPREL32: [FFFFFFCC], Type:      T_SHORT(0011), Local
 * (000680)   S_BPREL32: [FFFFFFD0], Type:       T_LONG(0012), LLocal
 * 
 * (000694)  S_END
 * 
 * (000698)  S_BLOCK32: [0001:00080A22], Cb: 0000008F, (none)
 *           Parent: 00000528, End: 000006F4
 * 
 * (0006B0)   S_BPREL32: [FFFFFFBC], Type:     T_REAL32(0040), sqz
 * (0006C0)   S_BPREL32: [FFFFFFC0], Type:     T_REAL32(0040), sqy
 * (0006D0)   S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), sqx
 * (0006E0)   S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), sqhyp
 * 
 * (0006F4)  S_END
 * 
 * (0006F8) S_END
 */

/*
 * (0006FC) S_GPROC32: [0001:00080C25], Cb: 00000196, Type:             0x1001, TV_Install_Keypad
 *          Parent: 00000000, End: 00000738, Next: 0000073C
 *          Debug start: 00000003, Debug end: 00000194
 *          Flags: Frame Ptr Present
 * 
 * (000738) S_END
 */

/*
 * (00073C) S_GPROC32: [0001:00080DBB], Cb: 000000EC, Type:             0x1001, TV_Uninstall_Keypad
 *          Parent: 00000000, End: 00000778, Next: 0000077C
 *          Debug start: 00000003, Debug end: 000000EA
 *          Flags: Frame Ptr Present
 * 
 * (000778) S_END
 */

/*
 * (00077C) S_GPROC32: [0001:00080EA7], Cb: 00000014, Type:             0x13EF, SetCamFocus
 *          Parent: 00000000, End: 000007C0, Next: 000007C4
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (0007B0)  S_BPREL32: [00000008], Type:             0x13EB, Cam
 * 
 * (0007C0) S_END
 */

/*
 * (0007C4) S_GPROC32: [0001:00080EBB], Cb: 00000042, Type:             0x1001, TV_KeyPad_RotX_Plus
 *          Parent: 00000000, End: 00000800, Next: 00000804
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000800) S_END
 */

/*
 * (000804) S_GPROC32: [0001:00080EFD], Cb: 00000042, Type:             0x1001, TV_KeyPad_RotX_Minus
 *          Parent: 00000000, End: 00000840, Next: 00000844
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000840) S_END
 */

/*
 * (000844) S_GPROC32: [0001:00080F3F], Cb: 00000042, Type:             0x1001, TV_KeyPad_RotY_Plus
 *          Parent: 00000000, End: 00000880, Next: 00000884
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000880) S_END
 */

/*
 * (000884) S_GPROC32: [0001:00080F81], Cb: 00000042, Type:             0x1001, TV_KeyPad_RotY_Minus
 *          Parent: 00000000, End: 000008C0, Next: 000008C4
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (0008C0) S_END
 */

/*
 * (0008C4) S_GPROC32: [0001:00080FC3], Cb: 00000042, Type:             0x1001, TV_KeyPad_RotZ_Plus
 *          Parent: 00000000, End: 00000900, Next: 00000904
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000900) S_END
 */

/*
 * (000904) S_GPROC32: [0001:00081005], Cb: 00000042, Type:             0x1001, TV_KeyPad_RotZ_Minus
 *          Parent: 00000000, End: 00000940, Next: 00000944
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000940) S_END
 */

/*
 * (000944) S_GPROC32: [0001:00081047], Cb: 00000041, Type:             0x1001, TV_KeyPad_PosX_Plus
 *          Parent: 00000000, End: 00000980, Next: 00000984
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000980) S_END
 */

/*
 * (000984) S_GPROC32: [0001:00081088], Cb: 00000041, Type:             0x1001, TV_KeyPad_PosX_Minus
 *          Parent: 00000000, End: 000009C0, Next: 000009C4
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (0009C0) S_END
 */

/*
 * (0009C4) S_GPROC32: [0001:000810C9], Cb: 00000041, Type:             0x1001, TV_KeyPad_PosY_Plus
 *          Parent: 00000000, End: 00000A00, Next: 00000A04
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000A00) S_END
 */

/*
 * (000A04) S_GPROC32: [0001:0008110A], Cb: 00000041, Type:             0x1001, TV_KeyPad_PosY_Minus
 *          Parent: 00000000, End: 00000A40, Next: 00000A44
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000A40) S_END
 */

/*
 * (000A44) S_GPROC32: [0001:0008114B], Cb: 00000041, Type:             0x1001, TV_KeyPad_PosZ_Plus
 *          Parent: 00000000, End: 00000A80, Next: 00000A84
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000A80) S_END
 */

/*
 * (000A84) S_GPROC32: [0001:0008118C], Cb: 00000041, Type:             0x1001, TV_KeyPad_PosZ_Minus
 *          Parent: 00000000, End: 00000AC0, Next: 00000AC4
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000AC0) S_END
 */

/*
 * (000AC4) S_GPROC32: [0001:000811CD], Cb: 000000CD, Type:             0x1001, TV_KeyPad_Reset
 *          Parent: 00000000, End: 00000AFC, Next: 00000B00
 *          Debug start: 00000003, Debug end: 000000CB
 *          Flags: Frame Ptr Present
 * 
 * (000AFC) S_END
 */

/*
 * (000B00) S_GPROC32: [0001:0008129A], Cb: 00000043, Type:             0x1001, TV_KeyPad_Show_Toggle
 *          Parent: 00000000, End: 00000B40, Next: 00000B44
 *          Debug start: 00000003, Debug end: 00000041
 *          Flags: Frame Ptr Present
 * 
 * (000B40) S_END
 */

/*
 * (000B44) S_GPROC32: [0001:000812DD], Cb: 00000066, Type:             0x1001, TV_KeyPad_Fov_Plus
 *          Parent: 00000000, End: 00000B80, Next: 00000B84
 *          Debug start: 00000003, Debug end: 00000064
 *          Flags: Frame Ptr Present
 * 
 * (000B80) S_END
 */

/*
 * (000B84) S_GPROC32: [0001:00081343], Cb: 00000062, Type:             0x1001, TV_KeyPad_Fov_Minus
 *          Parent: 00000000, End: 00000BC0, Next: 00000BC4
 *          Debug start: 00000003, Debug end: 00000060
 *          Flags: Frame Ptr Present
 * 
 * (000BC0) S_END
 */

/*
 * (000BC4) S_GPROC32: [0001:000813A5], Cb: 00000041, Type:             0x1001, TV_KeyPad_NearClip_Plus
 *          Parent: 00000000, End: 00000C04, Next: 00000C08
 *          Debug start: 00000003, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000C04) S_END
 */

/*
 * (000C08) S_GPROC32: [0001:000813E6], Cb: 0000006A, Type:             0x1001, TV_KeyPad_NearClip_Minus
 *          Parent: 00000000, End: 00000C48, Next: 00000C4C
 *          Debug start: 00000003, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000C48) S_END
 */

/*
 * (000C4C) S_GPROC32: [0001:00081450], Cb: 0000006A, Type:             0x1001, TV_KeyPad_FarClip_Plus
 *          Parent: 00000000, End: 00000C8C, Next: 00000C90
 *          Debug start: 00000003, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000C8C) S_END
 */

/*
 * (000C90) S_GPROC32: [0001:000814BA], Cb: 0000006A, Type:             0x1001, TV_KeyPad_FarClip_Minus
 *          Parent: 00000000, End: 00000CD0, Next: 00000CD4
 *          Debug start: 00000003, Debug end: 00000068
 *          Flags: Frame Ptr Present
 * 
 * (000CD0) S_END
 */

/*
 * (000CD4) S_GPROC32: [0001:00081524], Cb: 00000042, Type:             0x1001, TV_KeyPad_Roll_Plus
 *          Parent: 00000000, End: 00000D10, Next: 00000D14
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000D10) S_END
 */

/*
 * (000D14) S_GPROC32: [0001:00081566], Cb: 00000042, Type:             0x1001, TV_KeyPad_Roll_Minus
 *          Parent: 00000000, End: 00000D50, Next: 00000D54
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000D50) S_END
 */

/*
 * (000D54) S_GPROC32: [0001:000815A8], Cb: 00000042, Type:             0x1001, TV_KeyPad_Lag_Plus
 *          Parent: 00000000, End: 00000D90, Next: 00000D94
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000D90) S_END
 */

/*
 * (000D94) S_GPROC32: [0001:000815EA], Cb: 00000054, Type:             0x1001, TV_KeyPad_Lag_Minus
 *          Parent: 00000000, End: 00000DD0, Next: 00000DD4
 *          Debug start: 00000003, Debug end: 00000052
 *          Flags: Frame Ptr Present
 * 
 * (000DD0) S_END
 */

/*
 * (000DD4) S_GPROC32: [0001:0008163E], Cb: 00000069, Type:             0x1001, TV_KeyPad_CamType_Toggle
 *          Parent: 00000000, End: 00000E14, Next: 00000E18
 *          Debug start: 00000003, Debug end: 00000067
 *          Flags: Frame Ptr Present
 * 
 * (000E14) S_END
 */

/*
 * (000E18) S_GPROC32: [0001:000816A7], Cb: 0000057A, Type:             0x16A1, TV_Debug
 *          Parent: 00000000, End: 00000E5C, Next: 00000E60
 *          Debug start: 00000004, Debug end: 00000576
 *          Flags: Frame Ptr Present
 * 
 * (000E48)  S_BPREL32: [00000008], Type:      T_ULONG(0022), data
 * 
 * (000E5C) S_END
 */

/*
 * (000E60) S_GPROC32: [0001:00081C21], Cb: 000000B7, Type:             0x1001, TV_Director_SetOriginCam
 *          Parent: 00000000, End: 00000EA0, Next: 00000EA4
 *          Debug start: 00000003, Debug end: 000000B5
 *          Flags: Frame Ptr Present
 * 
 * (000EA0) S_END
 */

/*
 * (000EA4) S_GPROC32: [0001:00081CD8], Cb: 000000A6, Type:             0x1FDC, TV_Director_Hire_RaceCam
 *          Parent: 00000000, End: 00000F0C, Next: 00000F10
 *          Debug start: 00000009, Debug end: 000000A2
 *          Flags: Frame Ptr Present
 * 
 * (000EE4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000EF4)  S_BPREL32: [FFFFFF7C], Type:             0x140B, SetupCam
 * 
 * (000F0C) S_END
 */

/*
 * (000F10) S_GPROC32: [0001:00081D7E], Cb: 000000A6, Type:             0x1FDC, TV_Director_Hire_TopDownCam
 *          Parent: 00000000, End: 00000F7C, Next: 00000F80
 *          Debug start: 00000009, Debug end: 000000A2
 *          Flags: Frame Ptr Present
 * 
 * (000F54)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000F64)  S_BPREL32: [FFFFFF7C], Type:             0x140B, SetupCam
 * 
 * (000F7C) S_END
 */

/*
 * (000F80) S_GPROC32: [0001:00081E24], Cb: 0000008F, Type:             0x1FDE, TV_Director_Hire_TVCameraman
 *          Parent: 00000000, End: 00001030, Next: 00001034
 *          Debug start: 00000009, Debug end: 0000008B
 *          Flags: Frame Ptr Present
 * 
 * (000FC4)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000FD4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000FE4)  S_BPREL32: [00000010], Type:     T_REAL32(0040), z
 * (000FF4)  S_BPREL32: [00000014], Type:             0x1404, obj
 * (001004)  S_BPREL32: [00000018], Type:      T_ULONG(0022), Flags
 * (001018)  S_BPREL32: [FFFFFF7C], Type:             0x140B, SetupCam
 * 
 * (001030) S_END
 */

/*
 * (001034) S_GPROC32: [0001:00081EB3], Cb: 000000A5, Type:             0x1FE0, TV_Director_Hire_StartCam
 *          Parent: 00000000, End: 000010D0, Next: 000010D4
 *          Debug start: 00000009, Debug end: 000000A1
 *          Flags: Frame Ptr Present
 * 
 * (001078)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (001088)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (001098)  S_BPREL32: [00000010], Type:     T_REAL32(0040), z
 * (0010A8)  S_BPREL32: [00000014], Type:             0x1404, obj
 * (0010B8)  S_BPREL32: [FFFFFF7C], Type:             0x140B, SetupCam
 * 
 * (0010D0) S_END
 */

/*
 * (0010D4) S_GPROC32: [0001:00081F58], Cb: 00000A5D, Type:             0x1FE2, TV_Director_HireNoseyCams
 *          Parent: 00000000, End: 00001154, Next: 00000000
 *          Debug start: 00000009, Debug end: 00000A59
 *          Flags: Frame Ptr Present
 * 
 * (001118)  S_BPREL32: [00000008], Type:      T_ULONG(0022), carid
 * (00112C)  S_BPREL32: [0000000C], Type:             0x1404, obj
 * (00113C)  S_BPREL32: [FFFFFF7C], Type:             0x140B, SetupCam
 * 
 * (001154) S_END
 */

