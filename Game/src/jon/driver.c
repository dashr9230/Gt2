
// File: C:\CodePrj\Gt2\Game\src\jon\driver.c

/*
 * ModName: .\Debug\driver.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\driver.obj
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
 * (00053C) S_GDATA32: [0003:0097BCC0], Type:             0x1AD1, rndArray
 * (000554) S_GDATA32: [0003:0097BCB8], Type:      T_UCHAR(0020), rndIndex
 * (00056C) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000584) S_GDATA32: [0003:00011B88], Type:             0x1BC7, CarDetailInfo
 * (0005A0) S_GDATA32: [0003:00075164], Type:             0x140A, GlobalCamera
 * (0005BC) S_LDATA32: [0003:00075678], Type:             0x1006, mTemp
 * (0005D0) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 */

/*
 * (00008C) S_GPROC32: [0001:0002BA80], Cb: 00000005, Type:             0x1408, drvReset
 *          Parent: 00000000, End: 000000CC, Next: 000000D0
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0000CC) S_END
 */

/*
 * (0000D0) S_GPROC32: [0001:0002BA85], Cb: 000001DA, Type:             0x1BC5, drvAllocate
 *          Parent: 00000000, End: 00000164, Next: 00000168
 *          Debug start: 00000006, Debug end: 000001D6
 *          Flags: Frame Ptr Present
 * 
 * (000104)  S_BPREL32: [00000008], Type:             0x1404, car
 * (000114)  S_BPREL32: [0000000C], Type:             0x13C3, drv
 * (000124)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (000134)  S_BLOCK32: [0001:0002BAA4], Cb: 000001B4, (none)
 *           Parent: 000000D0, End: 00000160
 * 
 * (00014C)   S_BPREL32: [FFFFFFF8], Type:             0x1BC6, Driver
 * 
 * (000160)  S_END
 * 
 * (000164) S_END
 */

/*
 * (000168) S_LPROC32: [0001:0002BC5F], Cb: 0000000E, Type:             0x1A2F, REND_SetCallback
 *          Parent: 00000000, End: 000001C0, Next: 000001C4
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (0001A0)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (0001B0)  S_BPREL32: [0000000C], Type:             0x13A7, F
 * 
 * (0001C0) S_END
 */

/*
 * (0001C4) S_LPROC32: [0001:0002BC6D], Cb: 0000004C, Type:             0x1AA7, helmCallback
 *          Parent: 00000000, End: 0000025C, Next: 00000260
 *          Debug start: 00000006, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (0001F8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), idx
 * (000208)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), lpMdl
 * (00021C)  S_BPREL32: [00000010], Type:    T_32PVOID(0403), dat
 * (00022C)  S_BPREL32: [00000014], Type:             0x13A1, pos
 * (00023C)  S_BPREL32: [00000018], Type:             0x13A4, ori
 * (00024C)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (00025C) S_END
 */

/*
 * (000260) S_LPROC32: [0001:0002BCB9], Cb: 000000EE, Type:             0x1408, drvDraw
 *          Parent: 00000000, End: 000002FC, Next: 00000300
 *          Debug start: 00000006, Debug end: 000000EA
 *          Flags: Frame Ptr Present
 * 
 * (000290)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0002A0)  S_BLOCK32: [0001:0002BCCF], Cb: 000000D4, (none)
 *           Parent: 00000260, End: 000002F8
 * 
 * (0002B8)   S_BPREL32: [FFFFFFF4], Type:             0x1404, Car
 * (0002C8)   S_BPREL32: [FFFFFFF8], Type:             0x1A9D, ThisCar
 * (0002DC)   S_BPREL32: [FFFFFFFC], Type:      T_SHORT(0011), CurDetailLevel
 * 
 * (0002F8)  S_END
 * 
 * (0002FC) S_END
 */

/*
 * (000300) S_LPROC32: [0001:0002BDA7], Cb: 0000000E, Type:             0x1A31, REND_SetCallData
 *          Parent: 00000000, End: 00000358, Next: 0000035C
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (000338)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (000348)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), D
 * 
 * (000358) S_END
 */

/*
 * (00035C) S_LPROC32: [0001:0002BDB5], Cb: 0000062B, Type:             0x1408, drvHandler
 *          Parent: 00000000, End: 000004A0, Next: 000004A4
 *          Debug start: 00000006, Debug end: 0000060B
 *          Flags: Frame Ptr Present
 * 
 * (000390)  S_LDATA32: [0001:0002C3C4], Type:     T_NOTYPE(0000), (none)
 * (0003A0)  S_LABEL32: [0001:0002BE6B], $L79741
 * (0003B4)  S_LABEL32: [0001:0002BEC0], $L79743
 * (0003C8)  S_LABEL32: [0001:0002BF53], $L79747
 * (0003DC)  S_LABEL32: [0001:0002BF9F], $L79749
 * (0003F0)  S_LABEL32: [0001:0002C028], $L79753
 * (000404)  S_LABEL32: [0001:0002C0BE], $L79757
 * (000418)  S_LABEL32: [0001:0002C10B], $L79759
 * (00042C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00043C)  S_BPREL32: [FFFFFFD0], Type:             0x1404, car
 * (00044C)  S_BPREL32: [FFFFFFD4], Type:     T_USHORT(0021), mcv
 * (00045C)  S_BPREL32: [FFFFFFD8], Type:             0x1008, v
 * (00046C)  S_BPREL32: [FFFFFFE4], Type:             0x1BC6, drvr
 * (000480)  S_BPREL32: [FFFFFFE8], Type:             0x1008, b
 * (000490)  S_BPREL32: [FFFFFFF4], Type:             0x1008, a
 * 
 * (0004A0) S_END
 */

/*
 * (0004A4) S_LPROC32: [0001:0002C3E0], Cb: 00000023, Type:             0x1AA6, nRand
 *          Parent: 00000000, End: 000004D4, Next: 000004D8
 *          Debug start: 00000003, Debug end: 00000021
 *          Flags: Frame Ptr Present
 * 
 * (0004D4) S_END
 */

/*
 * (0004D8) S_GPROC32: [0001:0002C403], Cb: 00000043, Type:             0x1001, DRIVER_Allocate
 *          Parent: 00000000, End: 00000538, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000003F
 *          Flags: Frame Ptr Present
 * 
 * (000510)  S_BPREL32: [FFFFFFF8], Type:             0x1404, Car
 * (000520)  S_BPREL32: [FFFFFFFC], Type:             0x1AA2, RaceControl
 * 
 * (000538) S_END
 */

