
// File: C:\CodePrj\Gt2\Engine\src\joyread.c

/*
 * ModName: .\Debug\joyread.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\joyread.obj
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
 * (00008C) S_GPROC32: [0001:0008E050], Cb: 00000063, Type:             0x1001, JOY_Init
 *          Parent: 00000000, End: 000000BC, Next: 000000C0
 *          Debug start: 00000003, Debug end: 00000061
 *          Flags: Frame Ptr Present
 * 
 * (0000BC) S_END
 * 
 * (0000C0) S_GPROC32: [0001:0008E0B3], Cb: 00000047, Type:             0x1F0B, JOY_DebounceHandler
 *          Parent: 00000000, End: 0000015C, Next: 00000160
 *          Debug start: 00000006, Debug end: 00000043
 *          Flags: Frame Ptr Present
 * 
 * (0000FC)  S_BPREL32: [00000008], Type:             0x1BF4, Joy
 * (00010C)  S_BPREL32: [FFFFFFF0], Type:      T_UCHAR(0020), MouseOld
 * (000124)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), old
 * (000134)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), temp
 * (000148)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), diff
 * 
 * (00015C) S_END
 * 
 * (000160) S_GPROC32: [0001:0008E0FA], Cb: 0000003E, Type:             0x1001, JOY_BufferedReadReset
 *          Parent: 00000000, End: 000001A0, Next: 000001A4
 *          Debug start: 00000003, Debug end: 0000003C
 *          Flags: Frame Ptr Present
 * 
 * (0001A0) S_END
 * 
 * (0001A4) S_GPROC32: [0001:0008E138], Cb: 00000030, Type:             0x1001, JOY_Enable
 *          Parent: 00000000, End: 000001D8, Next: 000001DC
 *          Debug start: 00000003, Debug end: 0000002E
 *          Flags: Frame Ptr Present
 * 
 * (0001D8) S_END
 * 
 * (0001DC) S_GPROC32: [0001:0008E168], Cb: 00000035, Type:             0x1001, JOY_Disable
 *          Parent: 00000000, End: 00000210, Next: 00000214
 *          Debug start: 00000003, Debug end: 00000033
 *          Flags: Frame Ptr Present
 * 
 * (000210) S_END
 * 
 * (000214) S_GPROC32: [0001:0008E19D], Cb: 00000033, Type:             0x1001, JOY_DisableInHandler
 *          Parent: 00000000, End: 00000250, Next: 00000254
 *          Debug start: 00000003, Debug end: 00000031
 *          Flags: Frame Ptr Present
 * 
 * (000250) S_END
 * 
 * (000254) S_GPROC32: [0001:0008E1D0], Cb: 00000033, Type:             0x1001, JOY_Loader
 *          Parent: 00000000, End: 00000288, Next: 0000028C
 *          Debug start: 00000003, Debug end: 00000031
 *          Flags: Frame Ptr Present
 * 
 * (000288) S_END
 * 
 * (00028C) S_GPROC32: [0001:0008E203], Cb: 00000173, Type:             0x1001, JOY_BufferedRead
 *          Parent: 00000000, End: 00000308, Next: 0000030C
 *          Debug start: 00000006, Debug end: 0000016F
 *          Flags: Frame Ptr Present
 * 
 * (0002C4)  S_BLOCK32: [0001:0008E225], Cb: 0000014D, (none)
 *           Parent: 0000028C, End: 00000304
 * 
 * (0002DC)   S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), NewWritePos
 * (0002F4)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000304)  S_END
 * 
 * (000308) S_END
 * 
 * (00030C) S_GPROC32: [0001:0008E376], Cb: 00000049, Type:             0x1001, JOY_NetBufferedRead
 *          Parent: 00000000, End: 00000358, Next: 0000035C
 *          Debug start: 00000004, Debug end: 00000045
 *          Flags: Frame Ptr Present
 * 
 * (000348)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000358) S_END
 * 
 * (00035C) S_GPROC32: [0001:0008E3BF], Cb: 00000012, Type:             0x1F0D, JOY_Read
 *          Parent: 00000000, End: 000003B0, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000010
 *          Flags: Frame Ptr Present
 * 
 * (00038C)  S_BPREL32: [00000008], Type:       T_LONG(0012), JoyNum
 * (0003A0)  S_BPREL32: [0000000C], Type:             0x1BF4, Joy
 * 
 * (0003B0) S_END
 * 
 * (0003B4) S_GDATA32: [0003:0121EFC0], Type:             0x1A2B, Mouse
 * (0003C8) S_GDATA32: [0003:00931780], Type:      T_ULONG(0022), SystemActive
 * (0003E4) S_GDATA32: [0003:0006EBD0], Type:             0x1F0F, JoyData
 * (0003FC) S_GDATA32: [0003:00C6E4C0], Type:             0x1EDD, STK_Buffer
 * (000418) S_GDATA32: [0003:00C31A60], Type:             0x1A1E, Jstk
 * (00042C) S_GDATA32: [0003:00C444C0], Type:             0x1F11, JOY_Buffer
 * (000448) S_GDATA32: [0003:00C317C0], Type:             0x1F12, JOY_NetBuffer
 * (000464) S_GDATA32: [0003:00C31CE0], Type:             0x1F13, KEY_Buffer
 * (000480) S_GDATA32: [0003:0093175C], Type:      T_ULONG(0022), JOY_WritePos
 * (00049C) S_GDATA32: [0003:00931760], Type:      T_ULONG(0022), JOY_ReadPos
 * (0004B8) S_GDATA32: [0003:00931764], Type:      T_UCHAR(0020), JOY_ReadEnable
 * (0004D8) S_GDATA32: [0003:00931768], Type:       T_INT4(0074), GameServerLoadMode
 * (0004FC) S_GDATA32: [0003:00C44220], Type:             0x1F12, Joy
 * (000510) S_GDATA32: [0003:00C440E0], Type:             0x1A20, Key
 * (000524) S_GDATA32: [0003:01245320], Type:             0x1EE0, UserInputDevice
 * 
 */

