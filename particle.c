
// Original file: C:\CodePrj\Gt2\Game\src\jon\particle.c

/*
 * ModName: .\Debug\particle.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\particle.obj
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
 * (00008C) S_GPROC32: [0001:0002C960], Cb: 00000358, Type:             0x1BBB, prtUpdateParticleList
 *          Parent: 00000000, End: 000001C4, Next: 000001C8
 *          Debug start: 00000006, Debug end: 00000354
 *          Flags: Frame Ptr Present
 * 
 * (0000CC)  S_BPREL32: [00000008], Type:             0x13DB, prt
 * (0000DC)  S_BPREL32: [0000000C], Type:             0x1BB9, lpt
 * 
 * (0000EC)  S_BLOCK32: [0001:0002C970], Cb: 0000033F, (none)
 *           Parent: 0000008C, End: 000001C0
 * 
 * (000104)   S_BPREL32: [FFFFFFF0], Type:             0x1008, nvl
 * (000114)   S_BPREL32: [FFFFFFFC], Type:             0x13DB, nxt
 * 
 * (000124)   S_BLOCK32: [0001:0002C9D9], Cb: 000000C9, (none)
 *            Parent: 000000EC, End: 00000160
 * 
 * (00013C)    S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), fmag
 * (000150)    S_BPREL32: [FFFFFFE4], Type:             0x1008, nac
 * 
 * (000160)   S_END
 * 
 * (000164)   S_BLOCK32: [0001:0002CAE8], Cb: 0000010E, (none)
 *            Parent: 000000EC, End: 000001BC
 * 
 * (00017C)    S_BPREL32: [FFFFFFC8], Type:             0x1008, nps
 * (00018C)    S_BPREL32: [FFFFFFD4], Type:             0x13B6, clF
 * (00019C)    S_BPREL32: [FFFFFFD8], Type:   T_32PULONG(0422), z
 * (0001AC)    S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), alp
 * 
 * (0001BC)   S_END
 * 
 * (0001C0)  S_END
 * 
 * (0001C4) S_END
 * 
 * (0001C8) S_LPROC32: [0001:0002CCB8], Cb: 0000007F, Type:             0x1BBB, prtDeallocate
 *          Parent: 00000000, End: 00000220, Next: 00000224
 *          Debug start: 00000003, Debug end: 0000007D
 *          Flags: Frame Ptr Present
 * 
 * (000200)  S_BPREL32: [00000008], Type:             0x13DB, prt
 * (000210)  S_BPREL32: [0000000C], Type:             0x1BB9, lpt
 * 
 * (000220) S_END
 * 
 * (000224) S_LPROC32: [0001:0002CD37], Cb: 00000071, Type:             0x1AA5, meshFindCollisionZone
 *          Parent: 00000000, End: 000002E0, Next: 000002E4
 *          Debug start: 00000006, Debug end: 0000006D
 *          Flags: Frame Ptr Present
 * 
 * (000264)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000274)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z
 * (000284)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (000294)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), iz
 * (0002A4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ix
 * 
 * (0002B4)  S_BLOCK32: [0001:0002CD8B], Cb: 00000017, (none)
 *           Parent: 00000224, End: 000002DC
 * 
 * (0002CC)   S_BPREL32: [FFFFFFF0], Type:   T_32PULONG(0422), z
 * 
 * (0002DC)  S_END
 * 
 * (0002E0) S_END
 * 
 * (0002E4) S_GPROC32: [0001:0002CDA8], Cb: 000000E5, Type:             0x1B55, prtInitialize
 *          Parent: 00000000, End: 0000035C, Next: 00000360
 *          Debug start: 00000006, Debug end: 000000E1
 *          Flags: Frame Ptr Present
 * 
 * (00031C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), nPrt
 * 
 * (000330)  S_BLOCK32: [0001:0002CE10], Cb: 00000050, (none)
 *           Parent: 000002E4, End: 00000358
 * 
 * (000348)   S_BPREL32: [FFFFFFFC], Type:             0x13DB, prt
 * 
 * (000358)  S_END
 * 
 * (00035C) S_END
 * 
 * (000360) S_GPROC32: [0001:0002CE8D], Cb: 0000003B, Type:             0x1001, prtRelease
 *          Parent: 00000000, End: 00000394, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000039
 *          Flags: Frame Ptr Present
 * 
 * (000394) S_END
 * 
 * (000398) S_GDATA32: [0003:0097BEC0], Type:             0x13DB, freeParticle
 * (0003B4) S_GDATA32: [0003:0097BEC4], Type:             0x13DB, allParticles
 * (0003D0) S_GDATA32: [0003:000756B8], Type:      T_ULONG(0022), prtMaxParticles
 * (0003F0) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (00040C) S_GDATA32: [0003:0097B490], Type:             0x1008, Isec
 * (000420) S_GDATA32: [0003:0097BED0], Type:     T_REAL32(0040), meshXZD
 * (000438) S_GDATA32: [0003:0097BED4], Type:     T_REAL32(0040), meshZZD
 * (000450) S_GDATA32: [0003:0097BEC8], Type:     T_REAL32(0040), meshXOff
 * (000468) S_GDATA32: [0003:0097BECC], Type:     T_REAL32(0040), meshZOff
 * 
 * ModName: .\Debug\misc.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\misc.obj
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
 * (000088) S_GPROC32: [0001:0002C450], Cb: 00000274, Type:             0x1BBD, getModelDimensions
 *          Parent: 00000000, End: 00000228, Next: 0000022C
 *          Debug start: 00000006, Debug end: 00000270
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x13A8, whl
 * (0000D4)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), d
 * (0000E4)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), y2
 * (0000F4)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), y1
 * (000104)  S_BPREL32: [FFFFFFE8], Type:      T_UCHAR(0020), tt
 * (000114)  S_BPREL32: [FFFFFFEC], Type:             0x100E, ts
 * (000124)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), x2
 * (000134)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x1
 * (000144)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), z2
 * (000154)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), z1
 * 
 * (000164)  S_BLOCK32: [0001:0002C4CD], Cb: 000001AE, (none)
 *           Parent: 00000088, End: 00000224
 * 
 * (00017C)   S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), z
 * (00018C)   S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), y
 * (00019C)   S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), x
 * 
 * (0001AC)   S_BLOCK32: [0001:0002C4DE], Cb: 000000CC, (none)
 *            Parent: 00000164, End: 000001E4
 * 
 * (0001C4)    S_BPREL32: [FFFFFFCC], Type:             0x17BD, vrt
 * (0001D4)    S_BPREL32: [FFFFFFD0], Type:      T_ULONG(0022), vc
 * 
 * (0001E4)   S_END
 * 
 * (0001E8)   S_BLOCK32: [0001:0002C5AF], Cb: 000000CC, (none)
 *            Parent: 00000164, End: 00000220
 * 
 * (000200)    S_BPREL32: [FFFFFFC4], Type:             0x100B, vrt
 * (000210)    S_BPREL32: [FFFFFFC8], Type:      T_ULONG(0022), vc
 * 
 * (000220)   S_END
 * 
 * (000224)  S_END
 * 
 * (000228) S_END
 * 
 * (00022C) S_LPROC32: [0001:0002C6C4], Cb: 0000002F, Type:             0x1AB8, TS_SKIPTRI
 *          Parent: 00000000, End: 00000280, Next: 00000284
 *          Debug start: 00000004, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (000260)  S_BPREL32: [00000008], Type:             0x100E, ts
 * (000270)  S_BPREL32: [FFFFFFFC], Type:             0x100B, eVL
 * 
 * (000280) S_END
 * 
 * (000284) S_LPROC32: [0001:0002C6F3], Cb: 0000002F, Type:             0x1AB8, TS_SKIPTRI2
 *          Parent: 00000000, End: 000002D8, Next: 000002DC
 *          Debug start: 00000004, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (0002B8)  S_BPREL32: [00000008], Type:             0x100E, ts
 * (0002C8)  S_BPREL32: [FFFFFFFC], Type:             0x17BD, eVL
 * 
 * (0002D8) S_END
 * 
 * (0002DC) S_GPROC32: [0001:0002C722], Cb: 000001A9, Type:             0x1BBF, RotatePoint
 *          Parent: 00000000, End: 000003DC, Next: 000003E0
 *          Debug start: 00000006, Debug end: 000001A5
 *          Flags: Frame Ptr Present
 * 
 * (000310)  S_BPREL32: [00000008], Type:  T_32PREAL32(0440), x
 * (000320)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), y
 * (000330)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), z
 * (000340)  S_BPREL32: [00000014], Type:     T_USHORT(0021), rotx
 * (000354)  S_BPREL32: [00000018], Type:     T_USHORT(0021), roty
 * (000368)  S_BPREL32: [0000001C], Type:     T_USHORT(0021), rotz
 * (00037C)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), y2
 * (00038C)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), y1
 * (00039C)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), x2
 * (0003AC)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), x1
 * (0003BC)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), z2
 * (0003CC)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), z1
 * 
 * (0003DC) S_END
 * 
 * (0003E0) S_GPROC32: [0001:0002C8CB], Cb: 0000001F, Type:             0x1BC0, QHyp
 *          Parent: 00000000, End: 0000042C, Next: 00000430
 *          Debug start: 00000003, Debug end: 0000001D
 *          Flags: Frame Ptr Present
 * 
 * (00040C)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (00041C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z
 * 
 * (00042C) S_END
 * 
 * (000430) S_GPROC32: [0001:0002C8EA], Cb: 00000021, Type:             0x1BC1, QAng
 *          Parent: 00000000, End: 0000049C, Next: 000004A0
 *          Debug start: 00000003, Debug end: 0000001F
 *          Flags: Frame Ptr Present
 * 
 * (00045C)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x1
 * (00046C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), z1
 * (00047C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), x2
 * (00048C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), z2
 * 
 * (00049C) S_END
 * 
 * (0004A0) S_GPROC32: [0001:0002C90B], Cb: 00000047, Type:             0x1BC3, QAngSep
 *          Parent: 00000000, End: 00000504, Next: 00000000
 *          Debug start: 00000004, Debug end: 00000043
 *          Flags: Frame Ptr Present
 * 
 * (0004D0)  S_BPREL32: [00000008], Type:     T_USHORT(0021), a1
 * (0004E0)  S_BPREL32: [0000000C], Type:     T_USHORT(0021), a2
 * (0004F0)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), theta
 * 
 * (000504) S_END
 * 
 * (000508) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (000524) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * 
 */

