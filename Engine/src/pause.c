
// File: C:\CodePrj\Gt2\Engine\src\pause.c

/*
 * ModName: .\Debug\pause.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\pause.obj
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
 * 
 */

/*
 * (000208) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 * (000224) S_GDATA32: [0003:00C964C8], Type:      T_ULONG(0022), PauseFlag
 * (00023C) S_GDATA32: [0003:00C964CC], Type:      T_UCHAR(0020), PauseKey
 * (000254) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (000270) S_GDATA32: [0003:0091EDA0], Type:      T_UCHAR(0020), PauseInitialised
 * (000290) S_GDATA32: [0003:0091EDA4], Type:             0x1418, PauseInit
 * (0002A8) S_GDATA32: [0003:0091EDA8], Type:             0x1418, PauseDestroy
 */

/*
 * (00008C) S_GPROC32: [0001:0008BA00], Cb: 00000030, Type:             0x1F46, PAUSE_Init
 *          Parent: 00000000, End: 00000100, Next: 00000104
 *          Debug start: 00000003, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), PKey
 * (0000D4)  S_BPREL32: [0000000C], Type:             0x1418, PInit
 * (0000E8)  S_BPREL32: [00000010], Type:             0x1418, PDestroy
 * 
 * (000100) S_END
 */

/*
 * (000104) S_GPROC32: [0001:0008BA30], Cb: 00000025, Type:             0x1001, PAUSE_Kill
 *          Parent: 00000000, End: 00000138, Next: 0000013C
 *          Debug start: 00000003, Debug end: 00000023
 *          Flags: Frame Ptr Present
 * 
 * (000138) S_END
 */

/*
 * (00013C) S_GPROC32: [0001:0008BA55], Cb: 0000004F, Type:             0x1001, PAUSE_GeneralCode
 *          Parent: 00000000, End: 00000178, Next: 0000017C
 *          Debug start: 00000003, Debug end: 0000004D
 *          Flags: Frame Ptr Present
 * 
 * (000178) S_END
 */

/*
 * (00017C) S_GPROC32: [0001:0008BAA4], Cb: 00000053, Type:             0x1001, PAUSE_Update
 *          Parent: 00000000, End: 000001B0, Next: 000001B4
 *          Debug start: 00000003, Debug end: 00000051
 *          Flags: Frame Ptr Present
 * 
 * (0001B0) S_END
 */

/*
 * (0001B4) S_GPROC32: [0001:0008BAF7], Cb: 0000001E, Type:             0x1001, PAUSE_Attempt
 *          Parent: 00000000, End: 00000204, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (0001EC)  S_LDATA32: [0003:0091EDAC], Type:      T_UCHAR(0020), ipaused
 * 
 * (000204) S_END
 */

