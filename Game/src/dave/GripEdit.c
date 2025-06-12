
// File: C:\CodePrj\Gt2\Game\src\dave\GripEdit.c

/*
 * ModName: .\Debug\GripEdit.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\GripEdit.obj
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
 * (000580) S_GDATA32: [0003:00074FFC], Type:             0x1404, GRIPED
 * (000598) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 */

/*
 * (00008C) S_GPROC32: [0001:0000D310], Cb: 000000DC, Type:             0x1001, GripEditor_Allocate
 *          Parent: 00000000, End: 000000FC, Next: 00000100
 *          Debug start: 00000006, Debug end: 000000D8
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [FFFFFFF4], Type:             0x1404, obj
 * (0000D8)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), i
 * (0000E8)  S_BPREL32: [FFFFFFFC], Type:             0x1B08, griped
 * 
 * (0000FC) S_END
 */

/*
 * (000100) S_GPROC32: [0001:0000D3EC], Cb: 00000039, Type:             0x1408, GripEditor_Destroy
 *          Parent: 00000000, End: 0000017C, Next: 00000180
 *          Debug start: 00000004, Debug end: 00000035
 *          Flags: Frame Ptr Present
 * 
 * (00013C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (00014C)  S_BLOCK32: [0001:0000D3F6], Cb: 0000002B, (none)
 *           Parent: 00000100, End: 00000178
 * 
 * (000164)   S_BPREL32: [FFFFFFFC], Type:             0x1B08, griped
 * 
 * (000178)  S_END
 * 
 * (00017C) S_END
 */

/*
 * (000180) S_GPROC32: [0001:0000D425], Cb: 00000033, Type:             0x1001, GripEditor_Release
 *          Parent: 00000000, End: 000001CC, Next: 000001D0
 *          Debug start: 00000004, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (0001BC)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (0001CC) S_END
 */

/*
 * (0001D0) S_GPROC32: [0001:0000D458], Cb: 000000E1, Type:             0x1408, GripEditor_Draw
 *          Parent: 00000000, End: 0000022C, Next: 00000230
 *          Debug start: 00000004, Debug end: 000000DD
 *          Flags: Frame Ptr Present
 * 
 * (000208)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000218)  S_BPREL32: [FFFFFFFC], Type:             0x1B08, griped
 * 
 * (00022C) S_END
 */

/*
 * (000230) S_GPROC32: [0001:0000D539], Cb: 0000003B, Type:             0x1001, GripEditor_CommandInstall
 *          Parent: 00000000, End: 00000274, Next: 00000278
 *          Debug start: 00000003, Debug end: 00000039
 *          Flags: Frame Ptr Present
 * 
 * (000274) S_END
 */

/*
 * (000278) S_GPROC32: [0001:0000D574], Cb: 000000EA, Type:             0x17C9, CON_GripEditor_SetGFrict
 *          Parent: 00000000, End: 00000338, Next: 0000033C
 *          Debug start: 00000006, Debug end: 000000E6
 *          Flags: Frame Ptr Present
 * 
 * (0002B8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (0002CC)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (0002E0)  S_BPREL32: [FFFFFFFC], Type:             0x1B08, griped
 * 
 * (0002F4)  S_BLOCK32: [0001:0000D5B9], Cb: 00000088, (none)
 *           Parent: 00000278, End: 00000334
 * 
 * (00030C)   S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), index
 * (000320)   S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), frict
 * 
 * (000334)  S_END
 * 
 * (000338) S_END
 */

/*
 * (00033C) S_GPROC32: [0001:0000D65E], Cb: 000000EB, Type:             0x17C9, CON_GripEditor_SetGRes
 *          Parent: 00000000, End: 000003F8, Next: 000003FC
 *          Debug start: 00000006, Debug end: 000000E7
 *          Flags: Frame Ptr Present
 * 
 * (00037C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (000390)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (0003A4)  S_BPREL32: [FFFFFFFC], Type:             0x1B08, griped
 * 
 * (0003B8)  S_BLOCK32: [0001:0000D6A3], Cb: 00000089, (none)
 *           Parent: 0000033C, End: 000003F4
 * 
 * (0003D0)   S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), index
 * (0003E4)   S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), res
 * 
 * (0003F4)  S_END
 * 
 * (0003F8) S_END
 */

/*
 * (0003FC) S_GPROC32: [0001:0000D749], Cb: 000000E0, Type:             0x17C9, CON_GripEditor_Save
 *          Parent: 00000000, End: 000004D0, Next: 000004D4
 *          Debug start: 00000006, Debug end: 000000DC
 *          Flags: Frame Ptr Present
 * 
 * (000438)  S_BPREL32: [00000008], Type:      T_ULONG(0022), argc
 * (00044C)  S_BPREL32: [0000000C], Type:             0x17C7, argv
 * (000460)  S_BPREL32: [FFFFFFB0], Type:    T_32PVOID(0403), hFile
 * (000474)  S_BPREL32: [FFFFFFB4], Type:             0x180C, Filename
 * (00048C)  S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * (0004A4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), numbytes
 * (0004BC)  S_BPREL32: [FFFFFFFC], Type:             0x1B08, griped
 * 
 * (0004D0) S_END
 */

/*
 * (0004D4) S_GPROC32: [0001:0000D829], Cb: 000000F3, Type:             0x1001, GripEditor_Load
 *          Parent: 00000000, End: 0000057C, Next: 00000000
 *          Debug start: 00000006, Debug end: 000000EF
 *          Flags: Frame Ptr Present
 * 
 * (00050C)  S_BPREL32: [FFFFFFB0], Type:    T_32PVOID(0403), hFile
 * (000520)  S_BPREL32: [FFFFFFB4], Type:             0x180C, Filename
 * (000538)  S_BPREL32: [FFFFFFF4], Type:             0x1AA2, RaceControl
 * (000550)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), numbytes
 * (000568)  S_BPREL32: [FFFFFFFC], Type:             0x1B08, griped
 * 
 * (00057C) S_END
 */

