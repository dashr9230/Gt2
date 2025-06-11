
// File: C:\CodePrj\Gt2\Engine\src\objects.c

/*
 * ModName: .\Debug\objects.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\objects.obj
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
 * (00008C) S_GPROC32: [0001:00097910], Cb: 00000005, Type:             0x1001, CTP_ToggleModel
 *          Parent: 00000000, End: 000000C4, Next: 000000C8
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000C4) S_END
 * 
 * (0000C8) S_GPROC32: [0001:00097915], Cb: 00000015, Type:             0x1001, CTP_YNegRot
 *          Parent: 00000000, End: 000000FC, Next: 00000100
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (0000FC) S_END
 * 
 * (000100) S_GPROC32: [0001:0009792A], Cb: 00000015, Type:             0x1001, CTP_YPosRot
 *          Parent: 00000000, End: 00000134, Next: 00000138
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (000134) S_END
 * 
 * (000138) S_GPROC32: [0001:0009793F], Cb: 00000015, Type:             0x1001, CTP_XNegRot
 *          Parent: 00000000, End: 0000016C, Next: 00000170
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (00016C) S_END
 * 
 * (000170) S_GPROC32: [0001:00097954], Cb: 00000015, Type:             0x1001, CTP_XPosRot
 *          Parent: 00000000, End: 000001A4, Next: 000001A8
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (0001A4) S_END
 * 
 * (0001A8) S_GPROC32: [0001:00097969], Cb: 00000015, Type:             0x1001, CTP_ZNegRot
 *          Parent: 00000000, End: 000001DC, Next: 000001E0
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (0001DC) S_END
 * 
 * (0001E0) S_GPROC32: [0001:0009797E], Cb: 00000015, Type:             0x1001, CTP_ZPosRot
 *          Parent: 00000000, End: 00000214, Next: 00000218
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (000214) S_END
 * 
 * (000218) S_GPROC32: [0001:00097993], Cb: 00000057, Type:             0x1001, OBJ_Init
 *          Parent: 00000000, End: 00000258, Next: 0000025C
 *          Debug start: 00000004, Debug end: 00000053
 *          Flags: Frame Ptr Present
 * 
 * (000248)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000258) S_END
 * 
 * (00025C) S_GPROC32: [0001:000979EA], Cb: 00000015, Type:             0x1001, OBJ_Exit
 *          Parent: 00000000, End: 0000028C, Next: 00000290
 *          Debug start: 00000003, Debug end: 00000013
 *          Flags: Frame Ptr Present
 * 
 * (00028C) S_END
 * 
 * (000290) S_GPROC32: [0001:000979FF], Cb: 00000060, Type:             0x1408, OBJ_Draw
 *          Parent: 00000000, End: 000002D0, Next: 000002D4
 *          Debug start: 00000003, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (0002C0)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0002D0) S_END
 * 
 * (0002D4) S_GPROC32: [0001:00097A5F], Cb: 000000B4, Type:             0x1E91, OBJ_Move
 *          Parent: 00000000, End: 0000038C, Next: 00000000
 *          Debug start: 00000009, Debug end: 000000B0
 *          Flags: Frame Ptr Present
 * 
 * (000304)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (000314)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), XChge
 * (000328)  S_BPREL32: [00000010], Type:     T_REAL32(0040), YChge
 * (00033C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), ZChge
 * (000350)  S_LDATA32: [0003:00071E40], Type:             0x1006, TransMatrix
 * (00036C)  S_BPREL32: [FFFFFF80], Type:             0x1006, tm2
 * (00037C)  S_BPREL32: [FFFFFFC0], Type:             0x1006, tm1
 * 
 * (00038C) S_END
 * 
 * (000390) S_GDATA32: [0003:01255DE8], Type:      T_ULONG(0022), PolysRendered
 * (0003AC) S_GDATA32: [0003:009317B4], Type:      T_UCHAR(0020), OBJ_Ready
 * (0003C4) S_GDATA32: [0003:00071D28], Type:             0x1E94, MyTestObjects
 * (0003E0) S_GDATA32: [0003:009CF6C0], Type:             0x1E95, ObjList
 * (0003F8) S_GDATA32: [0003:00C9A8A0], Type:             0x1006, RotX
 * (00040C) S_GDATA32: [0003:00C9A8E0], Type:             0x1006, RotY
 * (000420) S_GDATA32: [0003:00C9A920], Type:             0x1006, RotZ
 * 
 */

