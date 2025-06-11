
// File: C:\CodePrj\Gt2\Game\src\jon\particle.c

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
 */

