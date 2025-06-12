
// File: C:\CodePrj\Gt2\Engine\src\d3dcam.c

/*
 * ModName: .\Debug\d3dcam.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\d3dcam.obj
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
 * (0004F4) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (000510) S_GDATA32: [0003:00C97100], Type:             0x1AD2, RS_TransformChge
 * (000530) S_GDATA32: [0003:00C30EA4], Type:     T_USHORT(0021), CameraXRot
 * (00054C) S_GDATA32: [0003:00C30FB0], Type:     T_USHORT(0021), CameraYRot
 * (000568) S_GDATA32: [0003:00C30FA8], Type:     T_USHORT(0021), CameraZRot
 * (000584) S_GDATA32: [0003:00C30EA0], Type:     T_REAL32(0040), CameraXPos
 * (0005A0) S_GDATA32: [0003:00C30FAC], Type:     T_REAL32(0040), CameraYPos
 * (0005BC) S_GDATA32: [0003:00C30FA4], Type:     T_REAL32(0040), CameraZPos
 * (0005D8) S_GDATA32: [0003:00070480], Type:             0x1006, CameraMatrix
 * (0005F4) S_GDATA32: [0003:000704C0], Type:             0x1006, ProjectionMatrix
 * (000614) S_GDATA32: [0003:00C30FA0], Type:      T_ULONG(0022), hCameraMatrix
 * (000630) S_GDATA32: [0003:00C30F40], Type:      T_ULONG(0022), hProjectionMatrix
 * (000650) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (00066C) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (000688) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (0006A0) S_GDATA32: [0003:00C30EC0], Type:             0x1006, CamRotXMatrix
 * (0006BC) S_GDATA32: [0003:00C30F60], Type:             0x1006, CamRotYMatrix
 * (0006D8) S_GDATA32: [0003:00C30F00], Type:             0x1006, CamRotZMatrix
 * (0006F4) S_GDATA32: [0003:00070440], Type:             0x1006, CamTransMatrix
 * (000714) S_GDATA32: [0003:00070500], Type:             0x1006, TransMatrix
 */

/*
 * (00008C) S_GPROC32: [0001:00092300], Cb: 00000005, Type:             0x1001, CAM_Init
 *          Parent: 00000000, End: 000000BC, Next: 000000C0
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000BC) S_END
 */

/*
 * (0000C0) S_GPROC32: [0001:00092305], Cb: 00000299, Type:             0x1ED3, CAM_BuildMatrix
 *          Parent: 00000000, End: 000001AC, Next: 000001B0
 *          Debug start: 00000006, Debug end: 00000295
 *          Flags: Frame Ptr Present
 * 
 * (0000F8)  S_BPREL32: [00000008], Type:     T_USHORT(0021), XAng
 * (00010C)  S_BPREL32: [0000000C], Type:     T_USHORT(0021), YAng
 * (000120)  S_BPREL32: [00000010], Type:     T_USHORT(0021), ZAng
 * (000134)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), SinZRot
 * (000148)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), SinYRot
 * (00015C)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), SinXRot
 * (000170)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), CosXRot
 * (000184)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), CosYRot
 * (000198)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), CosZRot
 * 
 * (0001AC) S_END
 */

/*
 * (0001B0) S_GPROC32: [0001:0009259E], Cb: 000000A6, Type:             0x1ED6, CAM_Update
 *          Parent: 00000000, End: 00000214, Next: 00000218
 *          Debug start: 00000009, Debug end: 000000A2
 *          Flags: Frame Ptr Present
 * 
 * (0001E4)  S_BPREL32: [00000008], Type:             0x1ED4, Cam
 * (0001F4)  S_BPREL32: [FFFFFF80], Type:             0x1006, tm2
 * (000204)  S_BPREL32: [FFFFFFC0], Type:             0x1006, tm1
 * 
 * (000214) S_END
 */

/*
 * (000218) S_GPROC32: [0001:00092644], Cb: 000000FA, Type:             0x1ED8, CAM_Move
 *          Parent: 00000000, End: 000002C0, Next: 000002C4
 *          Debug start: 00000009, Debug end: 000000F6
 *          Flags: Frame Ptr Present
 * 
 * (000248)  S_BPREL32: [00000008], Type:             0x1ED4, Cam
 * (000258)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), CamXSpeed
 * (000270)  S_BPREL32: [00000010], Type:     T_REAL32(0040), CamYSpeed
 * (000288)  S_BPREL32: [00000014], Type:     T_REAL32(0040), CamZSpeed
 * (0002A0)  S_BPREL32: [FFFFFF80], Type:             0x1006, tm2
 * (0002B0)  S_BPREL32: [FFFFFFC0], Type:             0x1006, tm1
 * 
 * (0002C0) S_END
 */

/*
 * (0002C4) S_GPROC32: [0001:0009273E], Cb: 00000159, Type:             0x1EDA, CAM_FirstPerson
 *          Parent: 00000000, End: 0000033C, Next: 00000340
 *          Debug start: 00000009, Debug end: 00000155
 *          Flags: Frame Ptr Present
 * 
 * (0002FC)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (00030C)  S_BPREL32: [0000000C], Type:             0x1ED4, Cam
 * (00031C)  S_BPREL32: [FFFFFF80], Type:             0x1006, tm2
 * (00032C)  S_BPREL32: [FFFFFFC0], Type:             0x1006, tm1
 * 
 * (00033C) S_END
 */

/*
 * (000340) S_GPROC32: [0001:00092897], Cb: 0000023C, Type:             0x1EDA, CAM_Follow
 *          Parent: 00000000, End: 0000041C, Next: 00000420
 *          Debug start: 00000009, Debug end: 00000238
 *          Flags: Frame Ptr Present
 * 
 * (000374)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (000384)  S_BPREL32: [0000000C], Type:             0x1ED4, Cam
 * (000394)  S_BPREL32: [FFFFFF6C], Type:      T_SHORT(0011), AngDiff
 * (0003A8)  S_BPREL32: [FFFFFF70], Type:     T_USHORT(0021), PerpAng
 * (0003BC)  S_BPREL32: [FFFFFF74], Type:             0x1006, tm2
 * (0003CC)  S_BPREL32: [FFFFFFB4], Type:             0x1006, tm1
 * (0003DC)  S_BPREL32: [FFFFFFF4], Type:     T_USHORT(0021), YRot
 * (0003F0)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), AccMask
 * (000404)  S_BPREL32: [FFFFFFFC], Type:     T_USHORT(0021), AngChange
 * 
 * (00041C) S_END
 */

/*
 * (000420) S_GPROC32: [0001:00092AD3], Cb: 000000C6, Type:             0x1EDA, CAM_Fixed
 *          Parent: 00000000, End: 000004F0, Next: 00000000
 *          Debug start: 00000006, Debug end: 000000C2
 *          Flags: Frame Ptr Present
 * 
 * (000454)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * (000464)  S_BPREL32: [0000000C], Type:             0x1ED4, Cam
 * (000474)  S_BPREL32: [FFFFFFE8], Type:     T_USHORT(0021), NewYRot
 * (000488)  S_BPREL32: [FFFFFFEC], Type:      T_SHORT(0011), YRotChange
 * (0004A0)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), DiffZ
 * (0004B4)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), DiffY
 * (0004C8)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), DiffX
 * (0004DC)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), Dist
 * 
 * (0004F0) S_END
 */

