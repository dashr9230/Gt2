
// Original file: C:\CodePrj\Gt2\Game\src\jon\weather.c

/*
 * ModName: .\Debug\weather.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\weather.obj
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
 * (00008C) S_GPROC32: [0001:0002EF70], Cb: 00000123, Type:             0x1B90, WeatherAllocate
 *          Parent: 00000000, End: 000000E8, Next: 000000EC
 *          Debug start: 00000004, Debug end: 0000011F
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x13EB, scr
 * (0000D4)  S_BPREL32: [FFFFFFFC], Type:             0x1404, mono
 * 
 * (0000E8) S_END
 * 
 * (0000EC) S_GPROC32: [0001:0002F093], Cb: 00000042, Type:             0x1408, WeatherDetach
 *          Parent: 00000000, End: 00000158, Next: 0000015C
 *          Debug start: 00000006, Debug end: 0000003E
 *          Flags: Frame Ptr Present
 * 
 * (000124)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000134)  S_BPREL32: [FFFFFFF8], Type:             0x1B91, pShz
 * (000148)  S_BPREL32: [FFFFFFFC], Type:             0x13F1, shz
 * 
 * (000158) S_END
 * 
 * (00015C) S_LPROC32: [0001:0002F0D5], Cb: 00000025, Type:             0x1B93, shizukuRelease
 *          Parent: 00000000, End: 000001B4, Next: 000001B8
 *          Debug start: 00000003, Debug end: 00000023
 *          Flags: Frame Ptr Present
 * 
 * (000194)  S_BPREL32: [00000008], Type:             0x13F1, S
 * (0001A4)  S_BPREL32: [0000000C], Type:             0x1B91, pS
 * 
 * (0001B4) S_END
 * 
 * (0001B8) S_GPROC32: [0001:0002F0FA], Cb: 000000E4, Type:             0x16A1, WeatherInitialize
 *          Parent: 00000000, End: 00000230, Next: 00000234
 *          Debug start: 00000004, Debug end: 000000E0
 *          Flags: Frame Ptr Present
 * 
 * (0001F4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), num
 * 
 * (000204)  S_BLOCK32: [0001:0002F13F], Cb: 0000008C, (none)
 *           Parent: 000001B8, End: 0000022C
 * 
 * (00021C)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ctr
 * 
 * (00022C)  S_END
 * 
 * (000230) S_END
 * 
 * (000234) S_LPROC32: [0001:0002F1DE], Cb: 0000009A, Type:             0x17C9, cmdWeatherSnow
 *          Parent: 00000000, End: 0000028C, Next: 00000290
 *          Debug start: 00000004, Debug end: 00000096
 *          Flags: Frame Ptr Present
 * 
 * (00026C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), n
 * (00027C)  S_BPREL32: [0000000C], Type:             0x17C7, v
 * 
 * (00028C) S_END
 * 
 * (000290) S_LPROC32: [0001:0002F278], Cb: 0000005D, Type:             0x17C9, cmdWeatherIntensity
 *          Parent: 00000000, End: 00000318, Next: 0000031C
 *          Debug start: 00000004, Debug end: 00000059
 *          Flags: Frame Ptr Present
 * 
 * (0002CC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), n
 * (0002DC)  S_BPREL32: [0000000C], Type:             0x17C7, v
 * 
 * (0002EC)  S_BLOCK32: [0001:0002F282], Cb: 00000028, (none)
 *           Parent: 00000290, End: 00000314
 * 
 * (000304)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), t
 * 
 * (000314)  S_END
 * 
 * (000318) S_END
 * 
 * (00031C) S_GPROC32: [0001:0002F2D5], Cb: 00000057, Type:             0x1001, WeatherRelease
 *          Parent: 00000000, End: 00000354, Next: 00000358
 *          Debug start: 00000003, Debug end: 00000055
 *          Flags: Frame Ptr Present
 * 
 * (000354) S_END
 * 
 * (000358) S_GPROC32: [0001:0002F32C], Cb: 0000004A, Type:             0x1B94, InitRain
 *          Parent: 00000000, End: 000003A8, Next: 000003AC
 *          Debug start: 00000003, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (000388)  S_BPREL32: [00000008], Type:      T_ULONG(0022), n
 * (000398)  S_BPREL32: [0000000C], Type:             0x17C7, v
 * 
 * (0003A8) S_END
 * 
 * (0003AC) S_GPROC32: [0001:0002F376], Cb: 0000004A, Type:             0x1B94, InitSnow
 *          Parent: 00000000, End: 000003FC, Next: 00000400
 *          Debug start: 00000003, Debug end: 00000048
 *          Flags: Frame Ptr Present
 * 
 * (0003DC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), n
 * (0003EC)  S_BPREL32: [0000000C], Type:             0x17C7, v
 * 
 * (0003FC) S_END
 * 
 * (000400) S_GPROC32: [0001:0002F3C0], Cb: 00000072, Type:             0x1B94, InitDry
 *          Parent: 00000000, End: 00000464, Next: 00000468
 *          Debug start: 00000006, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (000430)  S_BPREL32: [00000008], Type:      T_ULONG(0022), n
 * (000440)  S_BPREL32: [0000000C], Type:             0x17C7, v
 * (000450)  S_BPREL32: [FFFFFFF4], Type:             0x1008, flVec
 * 
 * (000464) S_END
 * 
 * (000468) S_GPROC32: [0001:0002F432], Cb: 0000007E, Type:             0x1B94, InitNight
 *          Parent: 00000000, End: 000004D0, Next: 000004D4
 *          Debug start: 00000006, Debug end: 0000007A
 *          Flags: Frame Ptr Present
 * 
 * (00049C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), n
 * (0004AC)  S_BPREL32: [0000000C], Type:             0x17C7, v
 * (0004BC)  S_BPREL32: [FFFFFFF4], Type:             0x1008, flVec
 * 
 * (0004D0) S_END
 * 
 * (0004D4) S_GPROC32: [0001:0002F4B0], Cb: 0000008F, Type:             0x17C9, SetAmbient
 *          Parent: 00000000, End: 0000057C, Next: 00000580
 *          Debug start: 00000006, Debug end: 0000008B
 *          Flags: Frame Ptr Present
 * 
 * (000508)  S_BPREL32: [00000008], Type:      T_ULONG(0022), acount
 * (00051C)  S_BPREL32: [0000000C], Type:             0x17C7, alist
 * 
 * (000530)  S_BLOCK32: [0001:0002F4D1], Cb: 00000059, (none)
 *           Parent: 000004D4, End: 00000578
 * 
 * (000548)   S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), g
 * (000558)   S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), r
 * (000568)   S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), b
 * 
 * (000578)  S_END
 * 
 * (00057C) S_END
 * 
 * (000580) S_GPROC32: [0001:0002F53F], Cb: 0000003B, Type:             0x17C9, SetDirect
 *          Parent: 00000000, End: 000005DC, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000039
 *          Flags: Frame Ptr Present
 * 
 * (0005B4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), acount
 * (0005C8)  S_BPREL32: [0000000C], Type:             0x17C7, alist
 * 
 * (0005DC) S_END
 * 
 * (0005E0) S_GDATA32: [0003:0097BCA4], Type:       T_LONG(0012), WeatherIntensity
 * (000600) S_GDATA32: [0003:0097BCA8], Type:      T_UCHAR(0020), WeatherSnow
 * (00061C) S_GDATA32: [0003:00075994], Type:             0x1404, lpWeatherObj
 * (000638) S_GDATA32: [0003:00075998], Type:      T_UCHAR(0020), raininMen
 * (000650) S_LDATA32: [0003:0007588C], Type:             0x13F1, WeatherShizuku
 * (000670) S_LDATA32: [0003:00075990], Type:             0x13F1, freeShizuku
 * (00068C) S_GDATA32: [0003:0097BCA0], Type:             0x13A0, weatherPage
 * (0006A8) S_LDATA32: [0003:0000F998], Type:             0x1ABA, vxDrop
 * (0006C0) S_LDATA32: [0003:0007599C], Type:             0x1A34, zPos
 * (0006D4) S_LDATA32: [0003:000759A8], Type:             0x1A35, zOri
 * (0006E8) S_LDATA32: [0003:0000F9D8], Type:             0x13BB, txSnow
 * (000700) S_LDATA32: [0003:0000F9F8], Type:             0x13BB, txDave
 * (000718) S_LDATA32: [0003:0000FA18], Type:             0x13BB, txHead
 * (000730) S_LDATA32: [0003:00075890], Type:             0x18FB, text
 * (000744) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * 
 * ModName: .\Debug\solar.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\solar.obj
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
 * (000088) S_GPROC32: [0001:0002EDD0], Cb: 00000147, Type:             0x1B97, sunAllocate
 *          Parent: 00000000, End: 000000F0, Next: 000000F4
 *          Debug start: 00000004, Debug end: 00000143
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [00000008], Type:             0x13A1, vec
 * (0000CC)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), type
 * (0000E0)  S_BPREL32: [FFFFFFFC], Type:             0x1404, sun
 * 
 * (0000F0) S_END
 * 
 * (0000F4) S_LPROC32: [0001:0002EF17], Cb: 00000005, Type:             0x1408, sunRender
 *          Parent: 00000000, End: 00000138, Next: 0000013C
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (000128)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000138) S_END
 * 
 * (00013C) S_LPROC32: [0001:0002EF1C], Cb: 00000005, Type:             0x1408, sunTrackCamera
 *          Parent: 00000000, End: 00000184, Next: 00000188
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (000174)  S_BPREL32: [00000008], Type:             0x1404, sun
 * 
 * (000184) S_END
 * 
 * (000188) S_LPROC32: [0001:0002EF21], Cb: 00000005, Type:             0x1408, moonTrackCamera
 *          Parent: 00000000, End: 000001D0, Next: 000001D4
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0001C0)  S_BPREL32: [00000008], Type:             0x1404, sun
 * 
 * (0001D0) S_END
 * 
 * (0001D4) S_LPROC32: [0001:0002EF26], Cb: 0000003D, Type:             0x1408, moonRender
 *          Parent: 00000000, End: 00000218, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000003B
 *          Flags: Frame Ptr Present
 * 
 * (000208)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (000218) S_END
 * 
 * (00021C) S_GDATA32: [0003:0097B4B8], Type:             0x1404, moon
 * (000230) S_GDATA32: [0003:0097BCAC], Type:             0x13A0, lfl
 * (000244) S_LDATA32: [0003:0000F898], Type:             0x13BB, txMoon
 * 
 */

