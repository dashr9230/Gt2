
// Original file: C:\CodePrj\Gt2\Game\src\jon\skylayers.c

/*
 * ModName: .\Debug\skylayers.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\skylayers.obj
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
 * (00008C) S_GPROC32: [0001:00034060], Cb: 0000001B, Type:             0x1001, skyToggleClouds
 *          Parent: 00000000, End: 000000C4, Next: 000000C8
 *          Debug start: 00000003, Debug end: 00000019
 *          Flags: Frame Ptr Present
 * 
 * (0000C4) S_END
 * 
 * (0000C8) S_GPROC32: [0001:0003407B], Cb: 000000C3, Type:             0x1B10, skyTexLoad
 *          Parent: 00000000, End: 00000134, Next: 00000138
 *          Debug start: 00000004, Debug end: 000000BF
 *          Flags: Frame Ptr Present
 * 
 * (0000FC)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), skyType
 * (000110)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), SkyName
 * (000124)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), fi
 * 
 * (000134) S_END
 * 
 * (000138) S_GPROC32: [0001:0003413E], Cb: 000008D8, Type:             0x1A3C, skyInitialize
 *          Parent: 00000000, End: 0000024C, Next: 00000250
 *          Debug start: 00000006, Debug end: 000008D4
 *          Flags: Frame Ptr Present
 * 
 * (000170)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), skyType
 * (000184)  S_BPREL32: [FFFFFFE4], Type:      T_UCHAR(0020), rng
 * (000194)  S_BPREL32: [FFFFFFE8], Type:      T_UCHAR(0020), seg
 * (0001A4)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), SkyLeft
 * (0001B8)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), SkyStep
 * (0001CC)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), c
 * (0001DC)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), b
 * (0001EC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0001FC)  S_BLOCK32: [0001:0003436A], Cb: 000002C4, (none)
 *           Parent: 00000138, End: 00000248
 * 
 * (000214)   S_BPREL32: [FFFFFFD8], Type:     T_USHORT(0021), phi
 * (000224)   S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), rad
 * (000234)   S_BPREL32: [FFFFFFE0], Type:     T_USHORT(0021), theta
 * 
 * (000248)  S_END
 * 
 * (00024C) S_END
 * 
 * (000250) S_LPROC32: [0001:00034A16], Cb: 000004F4, Type:             0x1408, eraseSky
 *          Parent: 00000000, End: 00000350, Next: 00000354
 *          Debug start: 00000006, Debug end: 000004F0
 *          Flags: Frame Ptr Present
 * 
 * (000280)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000290)  S_BPREL32: [FFFFFFC4], Type:             0x1008, pos
 * (0002A0)  S_BPREL32: [FFFFFFD0], Type:             0x13B3, dvp2
 * (0002B4)  S_BPREL32: [FFFFFFD4], Type:             0x13B3, dvp1
 * (0002C8)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), farp
 * (0002DC)  S_BPREL32: [FFFFFFDC], Type:             0x13A3, my_rot
 * (0002F0)  S_BPREL32: [FFFFFFE4], Type:     T_USHORT(0021), fov
 * (000300)  S_BPREL32: [FFFFFFE8], Type:      T_UCHAR(0020), i
 * (000310)  S_BPREL32: [FFFFFFEC], Type:             0x1008, my_pos
 * (000324)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), Mirror
 * (000338)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), ScrollPos
 * 
 * (000350) S_END
 * 
 * (000354) S_LPROC32: [0001:00034F0A], Cb: 00000005, Type:             0x1001, tmrBeginTiming
 *          Parent: 00000000, End: 0000038C, Next: 00000390
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (00038C) S_END
 * 
 * (000390) S_LPROC32: [0001:00034F0F], Cb: 0000010F, Type:             0x1001, drawFans
 *          Parent: 00000000, End: 000003D0, Next: 000003D4
 *          Debug start: 00000004, Debug end: 0000010B
 *          Flags: Frame Ptr Present
 * 
 * (0003C0)  S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), i
 * 
 * (0003D0) S_END
 * 
 * (0003D4) S_LPROC32: [0001:0003501E], Cb: 000015A8, Type:             0x1001, makeFans
 *          Parent: 00000000, End: 00000BDC, Next: 00000BE0
 *          Debug start: 00000009, Debug end: 000015A4
 *          Flags: Frame Ptr Present
 * 
 * (000404)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), y2
 * (000414)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), y1
 * (000424)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), hphi
 * (000438)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), x2
 * (000448)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), i
 * (000458)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), x1
 * (000468)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), lphi
 * 
 * (00047C)  S_BLOCK32: [0001:00035293], Cb: 0000132F, (none)
 *           Parent: 000003D4, End: 00000BD8
 * 
 * (000494)   S_BPREL32: [FFFFFFDC], Type:      T_UCHAR(0020), band
 * (0004A8)   S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), col
 * 
 * (0004B8)   S_BLOCK32: [0001:0003539C], Cb: 000001B6, (none)
 *            Parent: 0000047C, End: 00000598
 * 
 * (0004D0)    S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), dsor
 * (0004E4)    S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), alpha
 * 
 * (0004F8)    S_BLOCK32: [0001:000353E0], Cb: 0000004B, (none)
 *             Parent: 000004B8, End: 00000524
 * 
 * (000510)     S_BPREL32: [FFFFFFD0], Type:     T_USHORT(0021), index
 * 
 * (000524)    S_END
 * 
 * (000528)    S_BLOCK32: [0001:0003545E], Cb: 00000079, (none)
 *             Parent: 000004B8, End: 00000564
 * 
 * (000540)     S_BPREL32: [FFFFFFC8], Type:     T_USHORT(0021), index
 * (000554)     S_BPREL32: [FFFFFFCC], Type:      T_ULONG(0022), col
 * 
 * (000564)    S_END
 * 
 * (000568)    S_BLOCK32: [0001:00035506], Cb: 0000004C, (none)
 *             Parent: 000004B8, End: 00000594
 * 
 * (000580)     S_BPREL32: [FFFFFFC4], Type:     T_USHORT(0021), index
 * 
 * (000594)    S_END
 * 
 * (000598)   S_END
 * 
 * (00059C)   S_BLOCK32: [0001:00035557], Cb: 000001B6, (none)
 *            Parent: 0000047C, End: 0000067C
 * 
 * (0005B4)    S_BPREL32: [FFFFFFBC], Type:     T_REAL32(0040), dsor
 * (0005C8)    S_BPREL32: [FFFFFFC0], Type:     T_REAL32(0040), alpha
 * 
 * (0005DC)    S_BLOCK32: [0001:0003559B], Cb: 0000004B, (none)
 *             Parent: 0000059C, End: 00000608
 * 
 * (0005F4)     S_BPREL32: [FFFFFFB8], Type:     T_USHORT(0021), index
 * 
 * (000608)    S_END
 * 
 * (00060C)    S_BLOCK32: [0001:00035619], Cb: 00000079, (none)
 *             Parent: 0000059C, End: 00000648
 * 
 * (000624)     S_BPREL32: [FFFFFFB0], Type:     T_USHORT(0021), index
 * (000638)     S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), col
 * 
 * (000648)    S_END
 * 
 * (00064C)    S_BLOCK32: [0001:000356C1], Cb: 0000004C, (none)
 *             Parent: 0000059C, End: 00000678
 * 
 * (000664)     S_BPREL32: [FFFFFFAC], Type:     T_USHORT(0021), index
 * 
 * (000678)    S_END
 * 
 * (00067C)   S_END
 * 
 * (000680)   S_BLOCK32: [0001:00035814], Cb: 000001B8, (none)
 *            Parent: 0000047C, End: 00000760
 * 
 * (000698)    S_BPREL32: [FFFFFFA4], Type:     T_REAL32(0040), dsor
 * (0006AC)    S_BPREL32: [FFFFFFA8], Type:     T_REAL32(0040), alpha
 * 
 * (0006C0)    S_BLOCK32: [0001:00035858], Cb: 0000004C, (none)
 *             Parent: 00000680, End: 000006EC
 * 
 * (0006D8)     S_BPREL32: [FFFFFFA0], Type:     T_USHORT(0021), index
 * 
 * (0006EC)    S_END
 * 
 * (0006F0)    S_BLOCK32: [0001:000358D7], Cb: 0000007A, (none)
 *             Parent: 00000680, End: 0000072C
 * 
 * (000708)     S_BPREL32: [FFFFFF98], Type:     T_USHORT(0021), index
 * (00071C)     S_BPREL32: [FFFFFF9C], Type:      T_ULONG(0022), col
 * 
 * (00072C)    S_END
 * 
 * (000730)    S_BLOCK32: [0001:00035980], Cb: 0000004C, (none)
 *             Parent: 00000680, End: 0000075C
 * 
 * (000748)     S_BPREL32: [FFFFFF94], Type:     T_USHORT(0021), index
 * 
 * (00075C)    S_END
 * 
 * (000760)   S_END
 * 
 * (000764)   S_BLOCK32: [0001:000359D1], Cb: 000001C1, (none)
 *            Parent: 0000047C, End: 00000844
 * 
 * (00077C)    S_BPREL32: [FFFFFF8C], Type:     T_REAL32(0040), dsor
 * (000790)    S_BPREL32: [FFFFFF90], Type:     T_REAL32(0040), alpha
 * 
 * (0007A4)    S_BLOCK32: [0001:00035A15], Cb: 0000004C, (none)
 *             Parent: 00000764, End: 000007D0
 * 
 * (0007BC)     S_BPREL32: [FFFFFF88], Type:     T_USHORT(0021), index
 * 
 * (0007D0)    S_END
 * 
 * (0007D4)    S_BLOCK32: [0001:00035A94], Cb: 0000007A, (none)
 *             Parent: 00000764, End: 00000810
 * 
 * (0007EC)     S_BPREL32: [FFFFFF80], Type:     T_USHORT(0021), index
 * (000800)     S_BPREL32: [FFFFFF84], Type:      T_ULONG(0022), col
 * 
 * (000810)    S_END
 * 
 * (000814)    S_BLOCK32: [0001:00035B3D], Cb: 00000055, (none)
 *             Parent: 00000764, End: 00000840
 * 
 * (00082C)     S_BPREL32: [FFFFFF7C], Type:     T_USHORT(0021), index
 * 
 * (000840)    S_END
 * 
 * (000844)   S_END
 * 
 * (000848)   S_BLOCK32: [0001:00035C9B], Cb: 00000205, (none)
 *            Parent: 0000047C, End: 00000928
 * 
 * (000860)    S_BPREL32: [FFFFFF74], Type:     T_REAL32(0040), dsor
 * (000874)    S_BPREL32: [FFFFFF78], Type:     T_REAL32(0040), alpha
 * 
 * (000888)    S_BLOCK32: [0001:00035CEB], Cb: 00000058, (none)
 *             Parent: 00000848, End: 000008B4
 * 
 * (0008A0)     S_BPREL32: [FFFFFF70], Type:     T_USHORT(0021), index
 * 
 * (0008B4)    S_END
 * 
 * (0008B8)    S_BLOCK32: [0001:00035D83], Cb: 0000008E, (none)
 *             Parent: 00000848, End: 000008F4
 * 
 * (0008D0)     S_BPREL32: [FFFFFF68], Type:     T_USHORT(0021), index
 * (0008E4)     S_BPREL32: [FFFFFF6C], Type:      T_ULONG(0022), col
 * 
 * (0008F4)    S_END
 * 
 * (0008F8)    S_BLOCK32: [0001:00035E49], Cb: 00000057, (none)
 *             Parent: 00000848, End: 00000924
 * 
 * (000910)     S_BPREL32: [FFFFFF64], Type:     T_USHORT(0021), index
 * 
 * (000924)    S_END
 * 
 * (000928)   S_END
 * 
 * (00092C)   S_BLOCK32: [0001:00035EA5], Cb: 00000205, (none)
 *            Parent: 0000047C, End: 00000A0C
 * 
 * (000944)    S_BPREL32: [FFFFFF5C], Type:     T_REAL32(0040), dsor
 * (000958)    S_BPREL32: [FFFFFF60], Type:     T_REAL32(0040), alpha
 * 
 * (00096C)    S_BLOCK32: [0001:00035EF5], Cb: 00000058, (none)
 *             Parent: 0000092C, End: 00000998
 * 
 * (000984)     S_BPREL32: [FFFFFF58], Type:     T_USHORT(0021), index
 * 
 * (000998)    S_END
 * 
 * (00099C)    S_BLOCK32: [0001:00035F8D], Cb: 0000008E, (none)
 *             Parent: 0000092C, End: 000009D8
 * 
 * (0009B4)     S_BPREL32: [FFFFFF50], Type:     T_USHORT(0021), index
 * (0009C8)     S_BPREL32: [FFFFFF54], Type:      T_ULONG(0022), col
 * 
 * (0009D8)    S_END
 * 
 * (0009DC)    S_BLOCK32: [0001:00036053], Cb: 00000057, (none)
 *             Parent: 0000092C, End: 00000A08
 * 
 * (0009F4)     S_BPREL32: [FFFFFF4C], Type:     T_USHORT(0021), index
 * 
 * (000A08)    S_END
 * 
 * (000A0C)   S_END
 * 
 * (000A10)   S_BLOCK32: [0001:000361B3], Cb: 00000205, (none)
 *            Parent: 0000047C, End: 00000AF0
 * 
 * (000A28)    S_BPREL32: [FFFFFF44], Type:     T_REAL32(0040), dsor
 * (000A3C)    S_BPREL32: [FFFFFF48], Type:     T_REAL32(0040), alpha
 * 
 * (000A50)    S_BLOCK32: [0001:00036203], Cb: 00000057, (none)
 *             Parent: 00000A10, End: 00000A7C
 * 
 * (000A68)     S_BPREL32: [FFFFFF40], Type:     T_USHORT(0021), index
 * 
 * (000A7C)    S_END
 * 
 * (000A80)    S_BLOCK32: [0001:0003629A], Cb: 0000008E, (none)
 *             Parent: 00000A10, End: 00000ABC
 * 
 * (000A98)     S_BPREL32: [FFFFFF38], Type:     T_USHORT(0021), index
 * (000AAC)     S_BPREL32: [FFFFFF3C], Type:      T_ULONG(0022), col
 * 
 * (000ABC)    S_END
 * 
 * (000AC0)    S_BLOCK32: [0001:00036360], Cb: 00000058, (none)
 *             Parent: 00000A10, End: 00000AEC
 * 
 * (000AD8)     S_BPREL32: [FFFFFF34], Type:     T_USHORT(0021), index
 * 
 * (000AEC)    S_END
 * 
 * (000AF0)   S_END
 * 
 * (000AF4)   S_BLOCK32: [0001:000363BD], Cb: 00000205, (none)
 *            Parent: 0000047C, End: 00000BD4
 * 
 * (000B0C)    S_BPREL32: [FFFFFF2C], Type:     T_REAL32(0040), dsor
 * (000B20)    S_BPREL32: [FFFFFF30], Type:     T_REAL32(0040), alpha
 * 
 * (000B34)    S_BLOCK32: [0001:0003640D], Cb: 00000057, (none)
 *             Parent: 00000AF4, End: 00000B60
 * 
 * (000B4C)     S_BPREL32: [FFFFFF28], Type:     T_USHORT(0021), index
 * 
 * (000B60)    S_END
 * 
 * (000B64)    S_BLOCK32: [0001:000364A4], Cb: 0000008E, (none)
 *             Parent: 00000AF4, End: 00000BA0
 * 
 * (000B7C)     S_BPREL32: [FFFFFF20], Type:     T_USHORT(0021), index
 * (000B90)     S_BPREL32: [FFFFFF24], Type:      T_ULONG(0022), col
 * 
 * (000BA0)    S_END
 * 
 * (000BA4)    S_BLOCK32: [0001:0003656A], Cb: 00000058, (none)
 *             Parent: 00000AF4, End: 00000BD0
 * 
 * (000BBC)     S_BPREL32: [FFFFFF1C], Type:     T_USHORT(0021), index
 * 
 * (000BD0)    S_END
 * 
 * (000BD4)   S_END
 * 
 * (000BD8)  S_END
 * 
 * (000BDC) S_END
 * 
 * (000BE0) S_LPROC32: [0001:000365C6], Cb: 000000E4, Type:             0x1B12, clrFLTInterpolate
 *          Parent: 00000000, End: 00000C80, Next: 00000C84
 *          Debug start: 00000007, Debug end: 000000DF
 *          Flags: Frame Ptr Present
 * 
 * (000C1C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c1
 * (000C2C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), c2
 * (000C3C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), alpha
 * (000C50)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), s
 * (000C60)  S_BPREL32: [FFFFFFF8], Type:      T_SHORT(0011), v2
 * (000C70)  S_BPREL32: [FFFFFFFC], Type:      T_SHORT(0011), v1
 * 
 * (000C80) S_END
 * 
 * (000C84) S_LPROC32: [0001:000366AA], Cb: 00000011, Type:             0x1B14, Interpolate
 *          Parent: 00000000, End: 00000CEC, Next: 00000CF0
 *          Debug start: 00000003, Debug end: 0000000F
 *          Flags: Frame Ptr Present
 * 
 * (000CB8)  S_BPREL32: [00000008], Type:     T_REAL32(0040), p
 * (000CC8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), q
 * (000CD8)  S_BPREL32: [00000010], Type:     T_REAL32(0040), alpha
 * 
 * (000CEC) S_END
 * 
 * (000CF0) S_LPROC32: [0001:000366BB], Cb: 00000063, Type:             0x1B16, horizonColour
 *          Parent: 00000000, End: 00000D6C, Next: 00000D70
 *          Debug start: 00000006, Debug end: 0000005F
 *          Flags: Frame Ptr Present
 * 
 * (000D28)  S_BPREL32: [00000008], Type:     T_USHORT(0021), theta
 * (000D3C)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), c3
 * (000D4C)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), c2
 * (000D5C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), c1
 * 
 * (000D6C) S_END
 * 
 * (000D70) S_LPROC32: [0001:0003671E], Cb: 000000D2, Type:             0x1B18, clrINTInterpolate
 *          Parent: 00000000, End: 00000E20, Next: 00000E24
 *          Debug start: 00000007, Debug end: 000000CD
 *          Flags: Frame Ptr Present
 * 
 * (000DAC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), c1
 * (000DBC)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), c2
 * (000DCC)  S_BPREL32: [00000010], Type:       T_LONG(0012), mult
 * (000DE0)  S_BPREL32: [00000014], Type:       T_LONG(0012), div
 * (000DF0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), s
 * (000E00)  S_BPREL32: [FFFFFFF8], Type:      T_SHORT(0011), v2
 * (000E10)  S_BPREL32: [FFFFFFFC], Type:      T_SHORT(0011), v1
 * 
 * (000E20) S_END
 * 
 * (000E24) S_LPROC32: [0001:000367F0], Cb: 0000005B, Type:             0x1B1A, addPtToBand
 *          Parent: 00000000, End: 00000E80, Next: 00000E84
 *          Debug start: 00000003, Debug end: 00000059
 *          Flags: Frame Ptr Present
 * 
 * (000E58)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), band
 * (000E6C)  S_BPREL32: [0000000C], Type:     T_USHORT(0021), index
 * 
 * (000E80) S_END
 * 
 * (000E84) S_LPROC32: [0001:0003684B], Cb: 00000153, Type:             0x1B1C, makeVertex
 *          Parent: 00000000, End: 00000EEC, Next: 00000EF0
 *          Debug start: 00000003, Debug end: 00000151
 *          Flags: Frame Ptr Present
 * 
 * (000EB8)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000EC8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000ED8)  S_BPREL32: [00000010], Type:      T_ULONG(0022), colour
 * 
 * (000EEC) S_END
 * 
 * (000EF0) S_LPROC32: [0001:0003699E], Cb: 0000031A, Type:             0x1001, projectVectors
 *          Parent: 00000000, End: 00000FC4, Next: 00000FC8
 *          Debug start: 00000009, Debug end: 00000316
 *          Flags: Frame Ptr Present
 * 
 * (000F28)  S_BPREL32: [FFFFFF94], Type:     T_REAL32(0040), svv
 * (000F38)  S_BPREL32: [FFFFFF98], Type:     T_REAL32(0040), chv
 * (000F48)  S_BPREL32: [FFFFFF9C], Type:             0x1006, cMtx
 * (000F5C)  S_BPREL32: [FFFFFFDC], Type:             0x13A3, cOri
 * (000F70)  S_BPREL32: [FFFFFFE4], Type:      T_UCHAR(0020), i
 * (000F80)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), cvv
 * (000F90)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), shv
 * (000FA0)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), asr
 * (000FB0)  S_BPREL32: [FFFFFFF4], Type:             0x1008, tvCrn
 * 
 * (000FC4) S_END
 * 
 * (000FC8) S_LPROC32: [0001:00036CB8], Cb: 000000E1, Type:             0x1408, scrollSky
 *          Parent: 00000000, End: 0000100C, Next: 00001010
 *          Debug start: 00000003, Debug end: 000000DF
 *          Flags: Frame Ptr Present
 * 
 * (000FFC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (00100C) S_END
 * 
 * (001010) S_LPROC32: [0001:00036D99], Cb: 000000DB, Type:             0x1B1E, domeVertex
 *          Parent: 00000000, End: 000010A8, Next: 000010AC
 *          Debug start: 00000006, Debug end: 000000D7
 *          Flags: Frame Ptr Present
 * 
 * (001044)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), l
 * (001054)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (001064)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (001074)  S_BPREL32: [00000014], Type:     T_REAL32(0040), z
 * (001084)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), alpha
 * (001098)  S_BPREL32: [FFFFFFFC], Type:             0x13B3, v
 * 
 * (0010A8) S_END
 * 
 * (0010AC) S_LPROC32: [0001:00036E74], Cb: 000000BF, Type:             0x1B20, domeTri
 *          Parent: 00000000, End: 0000114C, Next: 00001150
 *          Debug start: 00000004, Debug end: 000000BB
 *          Flags: Frame Ptr Present
 * 
 * (0010DC)  S_BPREL32: [00000008], Type:     T_USHORT(0021), r1
 * (0010EC)  S_BPREL32: [0000000C], Type:     T_USHORT(0021), c1
 * (0010FC)  S_BPREL32: [00000010], Type:     T_USHORT(0021), r2
 * (00110C)  S_BPREL32: [00000014], Type:     T_USHORT(0021), c2
 * (00111C)  S_BPREL32: [00000018], Type:     T_USHORT(0021), r3
 * (00112C)  S_BPREL32: [0000001C], Type:     T_USHORT(0021), c3
 * (00113C)  S_BPREL32: [FFFFFFFC], Type:  T_32PUSHORT(0421), t
 * 
 * (00114C) S_END
 * 
 * (001150) S_GPROC32: [0001:00036F33], Cb: 00000013, Type:             0x1001, skyRelease
 *          Parent: 00000000, End: 00001184, Next: 000019C8
 *          Debug start: 00000003, Debug end: 00000011
 *          Flags: Frame Ptr Present
 * 
 * (001184) S_END
 * 
 * (001188) S_GDATA32: [0003:0097BC90], Type:             0x1008, windCurrentVector
 * (0011A8) S_GDATA32: [0003:0099D280], Type:             0x1A44, Filez
 * (0011BC) S_GDATA32: [0003:0097B4B8], Type:             0x1404, moon
 * (0011D0) S_GDATA32: [0003:0097B4E0], Type:     T_REAL32(0040), skyZ
 * (0011E4) S_GDATA32: [0003:0097B4C4], Type:      T_ULONG(0022), clrBlu
 * (0011FC) S_GDATA32: [0003:0097B4C8], Type:      T_ULONG(0022), clrKey
 * (001214) S_GDATA32: [0003:0097B4D0], Type:             0x1769, clrHrz
 * (00122C) S_GDATA32: [0003:0097B4B0], Type:      T_ULONG(0022), zenith1
 * (001244) S_GDATA32: [0003:0097B4B4], Type:      T_ULONG(0022), zenith2
 * (00125C) S_GDATA32: [0003:0097B4EC], Type:     T_REAL32(0040), canopy1
 * (001274) S_GDATA32: [0003:0097B4F0], Type:     T_REAL32(0040), canopy2
 * (00128C) S_GDATA32: [0003:0097B4BC], Type:     T_REAL32(0040), mass1
 * (0012A0) S_GDATA32: [0003:0097B4C0], Type:     T_REAL32(0040), mass2
 * (0012B4) S_GDATA32: [0003:0097B4E4], Type:     T_REAL32(0040), tile1
 * (0012C8) S_GDATA32: [0003:0097B4E8], Type:     T_REAL32(0040), tile2
 * (0012DC) S_GDATA32: [0003:0097B4AD], Type:      T_UCHAR(0020), rm1
 * (0012F0) S_GDATA32: [0003:0097B4AE], Type:      T_UCHAR(0020), rm2
 * (001304) S_GDATA32: [0003:0097B4AC], Type:      T_UCHAR(0020), skyNoClouds
 * (001320) S_LDATA32: [0003:00077760], Type:             0x1B24, fans
 * (001334) S_LDATA32: [0003:00077490], Type:             0x1B25, vrts
 * (001348) S_LDATA32: [0003:00076EB8], Type:             0x1B25, mvrts
 * (00135C) S_LDATA32: [0003:000770F8], Type:             0x1B26, Horizon
 * (001374) S_LDATA32: [0003:00077708], Type:             0x1B27, HorizonVerts
 * (001390) S_LDATA32: [0003:000777B8], Type:     T_REAL32(0040), SkyAngStep
 * (0013AC) S_LDATA32: [0003:000776C8], Type:             0x1AE0, vCrn
 * (0013C0) S_LDATA32: [0003:000777A8], Type:             0x1769, theta
 * (0013D4) S_LDATA32: [0003:000776AC], Type:             0x13BA, phi
 * (0013E8) S_LDATA32: [0003:000776F8], Type:     T_REAL32(0040), uo1
 * (0013FC) S_LDATA32: [0003:00077700], Type:     T_REAL32(0040), vo1
 * (001410) S_LDATA32: [0003:000776FC], Type:     T_REAL32(0040), uo2
 * (001424) S_LDATA32: [0003:00077704], Type:     T_REAL32(0040), vo2
 * (001438) S_LDATA32: [0003:00077694], Type:             0x13A0, cloud1
 * (001450) S_LDATA32: [0003:00077698], Type:             0x13A0, cloud2
 * (001468) S_LDATA32: [0003:00077690], Type:             0x13A0, backdrop
 * (001480) S_LDATA32: [0003:000776A8], Type:             0x1404, skyObj
 * (001498) S_LDATA32: [0003:00077754], Type:      T_ULONG(0022), nc
 * (0014AC) S_LDATA32: [0003:000776C0], Type:      T_ULONG(0022), vc1
 * (0014C0) S_LDATA32: [0003:000776C4], Type:      T_ULONG(0022), vc2
 * (0014D4) S_LDATA32: [0003:00077758], Type:      T_ULONG(0022), tc
 * (0014E8) S_LDATA32: [0003:000776A4], Type:      T_ULONG(0022), angAdd
 * (001500) S_LDATA32: [0003:000770B8], Type:             0x1006, M
 * (001510) S_LDATA32: [0003:00011280], Type:             0x1B28, cTex1
 * (001524) S_LDATA32: [0003:00011290], Type:             0x1B28, cTex2
 * (001538) S_LDATA32: [0003:000112A0], Type:             0x13BA, cLyr1
 * (00154C) S_LDATA32: [0003:000112B0], Type:             0x13BA, cLyr2
 * (001560) S_LDATA32: [0003:000112C0], Type:             0x1769, cBlu
 * (001574) S_LDATA32: [0003:000112D0], Type:             0x1769, cHrz1
 * (001588) S_LDATA32: [0003:000112E0], Type:             0x1769, cHrz2
 * (00159C) S_LDATA32: [0003:000112F0], Type:             0x1769, cHrz3
 * (0015B0) S_LDATA32: [0003:00011300], Type:             0x1769, cHrz4
 * (0015C4) S_LDATA32: [0003:00011310], Type:             0x1769, cZnth1
 * (0015DC) S_LDATA32: [0003:00011320], Type:             0x1769, cZnth2
 * (0015F4) S_LDATA32: [0003:00011330], Type:             0x1ABC, cRend1
 * (00160C) S_LDATA32: [0003:00011334], Type:             0x1ABC, cRend2
 * (001624) S_LDATA32: [0003:00011338], Type:             0x13BA, cMass1
 * (00163C) S_LDATA32: [0003:00011348], Type:             0x13BA, cMass2
 * (001654) S_LDATA32: [0003:00011358], Type:             0x13BA, cTile1
 * (00166C) S_LDATA32: [0003:00011368], Type:             0x13BA, cTile2
 * (001684) S_LDATA32: [0003:000776A0], Type:      T_UCHAR(0020), drawIterations
 * (0016A4) S_LDATA32: [0003:00077750], Type:     T_REAL32(0040), drawAvgTime
 * (0016C0) S_LDATA32: [0003:0007769C], Type:     T_REAL32(0040), drawAccTime
 * (0016DC) S_LDATA32: [0003:00076A78], Type:             0x1B29, dome1
 * (0016F0) S_LDATA32: [0003:00076C98], Type:             0x1B29, dome2
 * (001704) S_LDATA32: [0003:000773F8], Type:             0x1B2A, domet
 * (001718) S_GDATA32: [0003:00915AAC], Type:       T_INT4(0074), gClouds
 * (001730) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (001748) S_GDATA32: [0003:00C9A6E4], Type:             0x13EB, CurScreen
 * (001760) S_GDATA32: [0003:0006D318], Type:             0x1664, RS
 * (001774) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (001790) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (0017AC) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * (0017CC) S_GDATA32: [0003:00C97120], Type:             0x169F, RC
 * (0017E0) S_GDATA32: [0003:0091ED38], Type:       T_INT4(0074), RS_BilinearEnable
 * (001800) S_GDATA32: [0003:0091ED48], Type:             0x1B2B, RS_lpCurTex
 * (00181C) S_GDATA32: [0003:0006D3A0], Type:             0x1B2C, TS
 * (001830) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (00184C) S_GDATA32: [0003:00C970E0], Type:             0x1AD2, RS_TexChge
 * (001868) S_GDATA32: [0003:00C971AC], Type:      T_ULONG(0022), RS_BilinearChge
 * (001888) S_GDATA32: [0003:00C97110], Type:      T_ULONG(0022), RS_DPICalled
 * (0018A4) S_GDATA32: [0003:00C970C8], Type:      T_ULONG(0022), RS_DPIVCount
 * (0018C0) S_GDATA32: [0003:00C971BC], Type:      T_ULONG(0022), RS_DPIICount
 * (0018DC) S_GDATA32: [0003:00C97100], Type:             0x1AD2, RS_TransformChge
 * (0018FC) S_GDATA32: [0003:0006D568], Type:             0x1B2D, RS_PrimType
 * (001918) S_GDATA32: [0003:0006D5BC], Type:             0x1B2D, RS_ZCmp
 * (001930) S_GDATA32: [0003:0006D5EC], Type:             0x1B2D, RS_TextureOp
 * (00194C) S_GDATA32: [0003:0006D6D4], Type:             0x1B2D, RS_MagFilterType
 * (00196C) S_GDATA32: [0003:0006D6EC], Type:             0x1B2D, RS_MinFilterType
 * (00198C) S_GDATA32: [0003:0006D70C], Type:             0x1B2D, RS_TextureAddress
 * (0019AC) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * 
 * (0019C8) S_GPROC32: [0001:00036F50], Cb: 0000005D, Type:             0x1A19, RSTATES_SetZFunc
 *          Parent: 00000000, End: 00001A14, Next: 00001A18
 *          Debug start: 00000003, Debug end: 0000005B
 *          Flags: Frame Ptr Present
 * 
 * (001A00)  S_BPREL32: [00000008], Type:       T_INT4(0074), State
 * 
 * (001A14) S_END
 * 
 * (001A18) S_GPROC32: [0001:00036FB0], Cb: 0000006F, Type:             0x1A19, RSTATES_SetFogEnable
 *          Parent: 00000000, End: 00001A68, Next: 00001A6C
 *          Debug start: 00000004, Debug end: 0000006B
 *          Flags: Frame Ptr Present
 * 
 * (001A54)  S_BPREL32: [00000008], Type:       T_INT4(0074), State
 * 
 * (001A68) S_END
 * 
 * (001A6C) S_GPROC32: [0001:00037020], Cb: 00000068, Type:             0x1B2F, TSTATES_SetAlphaOp
 *          Parent: 00000000, End: 00001AD0, Next: 00001AD4
 *          Debug start: 00000003, Debug end: 00000066
 *          Flags: Frame Ptr Present
 * 
 * (001AA8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Stage
 * (001ABC)  S_BPREL32: [0000000C], Type:       T_INT4(0074), State
 * 
 * (001AD0) S_END
 * 
 * (001AD4) S_GPROC32: [0001:00037090], Cb: 00000056, Type:             0x1A19, RSTATES_SetShadeMode
 *          Parent: 00000000, End: 00001B24, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000054
 *          Flags: Frame Ptr Present
 * 
 * (001B10)  S_BPREL32: [00000008], Type:       T_INT4(0074), State
 * 
 * (001B24) S_END
 * 
 * ModName: .\Debug\sfxmanager.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\sfxmanager.obj
 * 
 * (000044) S_COMPILE:
 *          Language: C
 *          Target processor: Pentium
 *          Floating-point precision: 0
 *          Floating-point package: hardware
 *          Ambient data: NEAR
 *          Ambient code: NEAR
 *          PCode present: 0
 *          Compiler Version: Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 12.00.8447.0
 * 
 * (000090) S_GPROC32: [0001:00033860], Cb: 0000002E, Type:             0x1001, SFXMAN_LoadGameSamples
 *          Parent: 00000000, End: 000000D0, Next: 000000D4
 *          Debug start: 00000003, Debug end: 0000002C
 *          Flags: Frame Ptr Present
 * 
 * (0000D0) S_END
 * 
 * (0000D4) S_GPROC32: [0001:0003388E], Cb: 0000008E, Type:             0x13EF, SFXMAN_Handler
 *          Parent: 00000000, End: 00000178, Next: 0000017C
 *          Debug start: 00000006, Debug end: 0000008A
 *          Flags: Frame Ptr Present
 * 
 * (00010C)  S_BPREL32: [00000008], Type:             0x13EB, CurViewInfo
 * 
 * (000124)  S_BLOCK32: [0001:0003389D], Cb: 0000007B, (none)
 *           Parent: 000000D4, End: 00000174
 * 
 * (00013C)   S_BPREL32: [FFFFFFF4], Type:             0x1B32, Director
 * (000154)   S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), rz
 * (000164)   S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), rx
 * 
 * (000174)  S_END
 * 
 * (000178) S_END
 * 
 * (00017C) S_GPROC32: [0001:0003391C], Cb: 00000005, Type:             0x1408, SFXMAN_Handle
 *          Parent: 00000000, End: 000001C4, Next: 000001C8
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (0001B4)  S_BPREL32: [00000008], Type:             0x1404, Obj
 * 
 * (0001C4) S_END
 * 
 * (0001C8) S_GPROC32: [0001:00033921], Cb: 00000103, Type:             0x1B34, SFXMAN_Create
 *          Parent: 00000000, End: 000002B4, Next: 000002B8
 *          Debug start: 00000006, Debug end: 000000FF
 *          Flags: Frame Ptr Present
 * 
 * (000200)  S_BPREL32: [00000008], Type:             0x1404, Obj4Listener
 * (00021C)  S_BPREL32: [0000000C], Type:             0x13EB, Screen4Listener
 * (000238)  S_BPREL32: [FFFFFFF0], Type:             0x1404, Car
 * (000248)  S_BPREL32: [FFFFFFF4], Type:       T_LONG(0012), Channel
 * (00025C)  S_BPREL32: [FFFFFFF8], Type:             0x1AA2, RaceControl
 * (000274)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000284)  S_BLOCK32: [0001:0003396F], Cb: 00000021, (none)
 *           Parent: 000001C8, End: 000002B0
 * 
 * (00029C)   S_BPREL32: [FFFFFFEC], Type:             0x1A7E, lpVpm
 * 
 * (0002B0)  S_END
 * 
 * (0002B4) S_END
 * 
 * (0002B8) S_GPROC32: [0001:00033A24], Cb: 000000A1, Type:             0x1001, SFXMAN_Destroy
 *          Parent: 00000000, End: 0000031C, Next: 00000320
 *          Debug start: 00000004, Debug end: 0000009D
 *          Flags: Frame Ptr Present
 * 
 * (0002F0)  S_BLOCK32: [0001:00033A35], Cb: 0000008C, (none)
 *           Parent: 000002B8, End: 00000318
 * 
 * (000308)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000318)  S_END
 * 
 * (00031C) S_END
 * 
 * (000320) S_GPROC32: [0001:00033AC5], Cb: 00000038, Type:             0x13EF, SFXMAN_SetFocus
 *          Parent: 00000000, End: 00000374, Next: 00000378
 *          Debug start: 00000003, Debug end: 00000036
 *          Flags: Frame Ptr Present
 * 
 * (000358)  S_BPREL32: [00000008], Type:             0x13EB, Screen4Listener
 * 
 * (000374) S_END
 * 
 * (000378) S_GPROC32: [0001:00033AFD], Cb: 000003AA, Type:             0x13EF, SFXMAN_Update
 *          Parent: 00000000, End: 000005A0, Next: 000005A4
 *          Debug start: 00000009, Debug end: 000003A6
 *          Flags: Frame Ptr Present
 * 
 * (0003B0)  S_BPREL32: [00000008], Type:             0x13EB, CurViewInfo
 * 
 * (0003C8)  S_BLOCK32: [0001:00033B2F], Cb: 00000374, (none)
 *           Parent: 00000378, End: 0000059C
 * 
 * (0003E0)   S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), dx
 * (0003F0)   S_BPREL32: [FFFFFFCC], Type:             0x1B32, Director
 * (000408)   S_BPREL32: [FFFFFFD0], Type:             0x1A9D, ThisCar
 * (00041C)   S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), rz
 * (00042C)   S_BPREL32: [FFFFFFD8], Type:       T_LONG(0012), NumEngines
 * (000444)   S_BPREL32: [FFFFFFDC], Type:             0x1AA2, RaceControl
 * (00045C)   S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), rx
 * (00046C)   S_BPREL32: [FFFFFFE4], Type:             0x1B35, SfxPriHead
 * (000484)   S_LDATA32: [0003:00011108], Type:     T_REAL32(0040), Scalar
 * (00049C)   S_BPREL32: [FFFFFFF0], Type:             0x1B37, lpSfxSort
 * (0004B4)   S_BPREL32: [FFFFFFF4], Type:       T_LONG(0012), a
 * (0004C4)   S_BPREL32: [FFFFFFF8], Type:             0x1404, lpCar
 * (0004D8)   S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), dz
 * 
 * (0004E8)   S_BLOCK32: [0001:00033D7B], Cb: 000000EE, (none)
 *            Parent: 000003C8, End: 00000568
 * 
 * (000500)    S_BPREL32: [FFFFFFB4], Type:             0x1AC2, CurSector
 * (000518)    S_BPREL32: [FFFFFFB8], Type:     T_REAL32(0040), Nearest
 * (00052C)    S_BPREL32: [FFFFFFBC], Type:     T_REAL32(0040), d
 * (00053C)    S_BPREL32: [FFFFFFC0], Type:             0x1AC2, NearestSector
 * (000558)    S_BPREL32: [FFFFFFC4], Type:      T_ULONG(0022), a
 * 
 * (000568)   S_END
 * 
 * (00056C)   S_BLOCK32: [0001:00033E69], Cb: 0000003A, (none)
 *            Parent: 000003C8, End: 00000598
 * 
 * (000584)    S_BPREL32: [FFFFFEB4], Type:             0x1A12, Buffer
 * 
 * (000598)   S_END
 * 
 * (00059C)  S_END
 * 
 * (0005A0) S_END
 * 
 * (0005A4) S_GPROC32: [0001:00033EA7], Cb: 000000B3, Type:             0x1B39, SFXMAN_PlaySound
 *          Parent: 00000000, End: 0000066C, Next: 00000670
 *          Debug start: 00000006, Debug end: 000000AF
 *          Flags: Frame Ptr Present
 * 
 * (0005DC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Index
 * (0005F0)  S_BPREL32: [0000000C], Type:             0x1404, Obj
 * 
 * (000600)  S_BLOCK32: [0001:00033EBA], Cb: 00000099, (none)
 *           Parent: 000005A4, End: 00000668
 * 
 * (000618)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Channel
 * 
 * (00062C)   S_BLOCK32: [0001:00033ED9], Cb: 00000054, (none)
 *            Parent: 00000600, End: 00000664
 * 
 * (000644)    S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), dx
 * (000654)    S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), dz
 * 
 * (000664)   S_END
 * 
 * (000668)  S_END
 * 
 * (00066C) S_END
 * 
 * (000670) S_GPROC32: [0001:00033F5A], Cb: 0000004B, Type:             0x1B3A, SFXMAN_StopSound
 *          Parent: 00000000, End: 000006D0, Next: 000006D4
 *          Debug start: 00000003, Debug end: 00000049
 *          Flags: Frame Ptr Present
 * 
 * (0006A8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (0006BC)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Index
 * 
 * (0006D0) S_END
 * 
 * (0006D4) S_GPROC32: [0001:00033FA5], Cb: 0000007C, Type:             0x1B3C, SFXMAN_UpdateSound
 *          Parent: 00000000, End: 00000784, Next: 00000788
 *          Debug start: 00000006, Debug end: 00000078
 *          Flags: Frame Ptr Present
 * 
 * (000710)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (000724)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Index
 * (000738)  S_BPREL32: [00000010], Type:             0x1404, Obj
 * 
 * (000748)  S_BLOCK32: [0001:00033FC9], Cb: 00000054, (none)
 *           Parent: 000006D4, End: 00000780
 * 
 * (000760)   S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), dx
 * (000770)   S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), dz
 * 
 * (000780)  S_END
 * 
 * (000784) S_END
 * 
 * (000788) S_GPROC32: [0001:00034021], Cb: 0000003D, Type:             0x1B3D, SFXMAN_IsSamplePlaying
 *          Parent: 00000000, End: 000007F0, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000003B
 *          Flags: Frame Ptr Present
 * 
 * (0007C8)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (0007DC)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Index
 * 
 * (0007F0) S_END
 * 
 * (0007F4) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (000810) S_GDATA32: [0003:00931730], Type:       T_INT4(0074), MSS_Active
 * (00082C) S_GDATA32: [0003:00931748], Type:       T_INT4(0074), MSS_SamplesLoaded
 * (00084C) S_GDATA32: [0003:0093174C], Type:       T_INT4(0074), MSS_EaxSupported
 * (00086C) S_GDATA32: [0003:0097F15C], Type:             0x1404, RC_Obj
 * (000884) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (0008A0) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (0008BC) S_GDATA32: [0003:0097B500], Type:             0x1B40, Sfx2Obj
 * (0008D4) S_GDATA32: [0003:0097B700], Type:             0x1B41, SfxPriority
 * (0008F0) S_LDATA32: [0003:00076A64], Type:             0x1404, SFXMAN_Controller
 * (000910) S_GDATA32: [0003:00076A68], Type:       T_INT4(0074), SFXMAN_Active
 * (00092C) S_GDATA32: [0003:00076A6C], Type:       T_LONG(0012), SFXMAN_CurManaged
 * (00094C) S_LDATA32: [0003:000769DC], Type:     T_REAL32(0040), LissyX
 * (000964) S_LDATA32: [0003:000769E0], Type:     T_REAL32(0040), LissyZ
 * (00097C) S_LDATA32: [0003:00076A70], Type:             0x13EB, CurListener
 * (000998) S_GDATA32: [0003:00011060], Type:       T_LONG(0012), SFXMAN_MaxEngines
 * (0009B8) S_LDATA32: [0003:000769E4], Type:             0x18A3, EngineSounds
 * (0009D4) S_GDATA32: [0003:00011068], Type:             0x1B44, SamplesToLoad
 * 
 */

