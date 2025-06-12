
// File: C:\CodePrj\Gt2\ZLib\inflate.c

/*
 * ModName: .\Debug\inflate.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\zlib\Debug\inflate.obj
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
 * (00055C) S_UDT:             0x2147, inflate_blocks_state
 * (00057C) S_UDT:             0x2147, inflate_blocks_statef
 * (00059C) S_UDT:             0x214D, z_stream_s
 * (0005B0) S_UDT:             0x214A, internal_state
 * (0005C8) S_UDT:             0x214D, z_stream
 * (0005DC) S_UDT:             0x214E, z_streamp
 * 
 */

/*
 */

/*
 * (00008C) S_GPROC32: [0001:00098580], Cb: 00000072, Type:             0x2150, inflateReset
 *          Parent: 00000000, End: 000000D0, Next: 000000D4
 *          Debug start: 00000003, Debug end: 00000069
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x214E, z
 * 
 * (0000D0) S_END
 */

/*
 * (0000D4) S_GPROC32: [0001:000985F2], Cb: 0000007B, Type:             0x2150, inflateEnd
 *          Parent: 00000000, End: 00000118, Next: 0000011C
 *          Debug start: 00000004, Debug end: 00000071
 *          Flags: Frame Ptr Present
 * 
 * (000108)  S_BPREL32: [00000008], Type:             0x214E, z
 * 
 * (000118) S_END
 */

/*
 * (00011C) S_GPROC32: [0001:0009866D], Cb: 00000178, Type:             0x2152, inflateInit2_
 *          Parent: 00000000, End: 000001A0, Next: 000001A4
 *          Debug start: 00000004, Debug end: 0000016E
 *          Flags: Frame Ptr Present
 * 
 * (000154)  S_BPREL32: [00000008], Type:             0x214E, z
 * (000164)  S_BPREL32: [0000000C], Type:       T_INT4(0074), w
 * (000174)  S_BPREL32: [00000010], Type:             0x16EA, version
 * (000188)  S_BPREL32: [00000014], Type:       T_INT4(0074), stream_size
 * 
 * (0001A0) S_END
 */

/*
 * (0001A4) S_GPROC32: [0001:000987E5], Cb: 00000022, Type:             0x2154, inflateInit_
 *          Parent: 00000000, End: 00000214, Next: 00000218
 *          Debug start: 00000003, Debug end: 00000019
 *          Flags: Frame Ptr Present
 * 
 * (0001D8)  S_BPREL32: [00000008], Type:             0x214E, z
 * (0001E8)  S_BPREL32: [0000000C], Type:             0x16EA, version
 * (0001FC)  S_BPREL32: [00000010], Type:       T_INT4(0074), stream_size
 * 
 * (000214) S_END
 */

/*
 * (000218) S_GPROC32: [0001:00098807], Cb: 000006F0, Type:             0x2156, inflate
 *          Parent: 00000000, End: 000003B0, Next: 000003B4
 *          Debug start: 0000001B, Debug end: 000006AA
 *          Flags: Frame Ptr Present
 * 
 * (000248)  S_LDATA32: [0001:00098EBF], Type:     T_NOTYPE(0000), (none)
 * (000258)  S_LABEL32: [0001:00098886], $L1031
 * (00026C)  S_LABEL32: [0001:00098961], $L1039
 * (000280)  S_LABEL32: [0001:00098A1A], $L1045
 * (000294)  S_LABEL32: [0001:00098A7D], $L1048
 * (0002A8)  S_LABEL32: [0001:00098AEB], $L1051
 * (0002BC)  S_LABEL32: [0001:00098B59], $L1054
 * (0002D0)  S_LABEL32: [0001:00098BDD], $L1057
 * (0002E4)  S_LABEL32: [0001:00098C0A], $L1060
 * (0002F8)  S_LABEL32: [0001:00098CB4], $L1065
 * (00030C)  S_LABEL32: [0001:00098D17], $L1068
 * (000320)  S_LABEL32: [0001:00098D85], $L1071
 * (000334)  S_LABEL32: [0001:00098DF3], $L1074
 * (000348)  S_LABEL32: [0001:00098E97], $L1080
 * (00035C)  S_LABEL32: [0001:00098E9E], $L1081
 * (000370)  S_BPREL32: [00000008], Type:             0x214E, z
 * (000380)  S_BPREL32: [0000000C], Type:       T_INT4(0074), f
 * (000390)  S_BPREL32: [FFFFFFF8], Type:       T_INT4(0074), r
 * (0003A0)  S_BPREL32: [FFFFFFFC], Type:      T_UINT4(0075), b
 * 
 * (0003B0) S_END
 */

/*
 * (0003B4) S_GPROC32: [0001:00098EF7], Cb: 000000CF, Type:             0x2158, inflateSetDictionary
 *          Parent: 00000000, End: 00000444, Next: 00000448
 *          Debug start: 0000000B, Debug end: 000000C1
 *          Flags: Frame Ptr Present
 * 
 * (0003F0)  S_BPREL32: [00000008], Type:             0x214E, z
 * (000400)  S_BPREL32: [0000000C], Type:             0x159F, dictionary
 * (000418)  S_BPREL32: [00000010], Type:      T_UINT4(0075), dictLength
 * (000430)  S_BPREL32: [FFFFFFFC], Type:      T_UINT4(0075), length
 * 
 * (000444) S_END
 */

/*
 * (000448) S_GPROC32: [0001:00098FC6], Cb: 00000170, Type:             0x2150, inflateSync
 *          Parent: 00000000, End: 0000050C, Next: 00000510
 *          Debug start: 0000001A, Debug end: 00000162
 *          Flags: Frame Ptr Present
 * 
 * (00047C)  S_BPREL32: [00000008], Type:             0x214E, z
 * (00048C)  S_BPREL32: [FFFFFFEC], Type:      T_UINT4(0075), n
 * (00049C)  S_BPREL32: [FFFFFFF0], Type:      T_UINT4(0075), m
 * (0004AC)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), w
 * (0004BC)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), r
 * (0004CC)  S_BPREL32: [FFFFFFFC], Type:   T_32PUCHAR(0420), p
 * 
 * (0004DC)  S_BLOCK32: [0001:00099056], Cb: 00000052, (none)
 *           Parent: 00000448, End: 00000508
 * 
 * (0004F4)   S_LDATA32: [0002:00002134], Type:             0x2159, mark
 * 
 * (000508)  S_END
 * 
 * (00050C) S_END
 */

/*
 * (000510) S_GPROC32: [0001:00099136], Cb: 00000040, Type:             0x2150, inflateSyncPoint
 *          Parent: 00000000, End: 00000558, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000037
 *          Flags: Frame Ptr Present
 * 
 * (000548)  S_BPREL32: [00000008], Type:             0x214E, z
 * 
 * (000558) S_END
 */

