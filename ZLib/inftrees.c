
// File: C:\CodePrj\Gt2\ZLib\inftrees.c

/*
 * ModName: .\Debug\inftrees.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\zlib\Debug\inftrees.obj
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
 */

/*
 * (0004EC) S_LDATA32: [0003:000721E0], Type:      T_UINT4(0075), fixed_bl
 * (000504) S_LDATA32: [0003:000721E4], Type:      T_UINT4(0075), fixed_bd
 * (00051C) S_LDATA32: [0003:000721E8], Type:             0x211A, fixed_tl
 * (000534) S_LDATA32: [0003:000731E8], Type:             0x211B, fixed_td
 * (00054C) S_GDATA32: [0002:00002184], Type:             0x211C, inflate_copyright
 * (00056C) S_LDATA32: [0002:000021B4], Type:             0x211D, cplens
 * (000584) S_LDATA32: [0002:00002230], Type:             0x211D, cplext
 * (00059C) S_LDATA32: [0002:000022AC], Type:             0x211E, cpdist
 * (0005B4) S_LDATA32: [0002:00002324], Type:             0x211E, cpdext
 */

/*
 * (00008C) S_GPROC32: [0001:0009B940], Cb: 000000DB, Type:             0x210F, inflate_trees_bits
 *          Parent: 00000000, End: 00000148, Next: 0000014C
 *          Debug start: 0000001C, Debug end: 000000CC
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:   T_32PUINT4(0475), c
 * (0000D8)  S_BPREL32: [0000000C], Type:   T_32PUINT4(0475), bb
 * (0000E8)  S_BPREL32: [00000010], Type:             0x210D, tb
 * (0000F8)  S_BPREL32: [00000014], Type:             0x20F3, hp
 * (000108)  S_BPREL32: [00000018], Type:             0x2107, z
 * (000118)  S_BPREL32: [FFFFFFF4], Type:   T_32PUINT4(0475), v
 * (000128)  S_BPREL32: [FFFFFFF8], Type:      T_UINT4(0075), hn
 * (000138)  S_BPREL32: [FFFFFFFC], Type:       T_INT4(0074), r
 * 
 * (000148) S_END
 */
void inflate_trees_bits()
{
	// TODO: inflate_trees_bits
}

/*
 * (00014C) S_LPROC32: [0001:0009BA1B], Cb: 000008E2, Type:             0x2113, huft_build
 *          Parent: 00000000, End: 00000354, Next: 00000358
 *          Debug start: 0000001C, Debug end: 000008DD
 *          Flags: Frame Ptr Present
 * 
 * (000180)  S_BPREL32: [00000008], Type:   T_32PUINT4(0475), b
 * (000190)  S_BPREL32: [0000000C], Type:      T_UINT4(0075), n
 * (0001A0)  S_BPREL32: [00000010], Type:      T_UINT4(0075), s
 * (0001B0)  S_BPREL32: [00000014], Type:             0x2111, d
 * (0001C0)  S_BPREL32: [00000018], Type:             0x2111, e
 * (0001D0)  S_BPREL32: [0000001C], Type:             0x210D, t
 * (0001E0)  S_BPREL32: [00000020], Type:   T_32PUINT4(0475), m
 * (0001F0)  S_BPREL32: [00000024], Type:             0x20F3, hp
 * (000200)  S_BPREL32: [00000028], Type:   T_32PUINT4(0475), hn
 * (000210)  S_BPREL32: [0000002C], Type:   T_32PUINT4(0475), v
 * (000220)  S_BPREL32: [FFFFFF00], Type:       T_INT4(0074), l
 * (000230)  S_BPREL32: [FFFFFF04], Type:       T_INT4(0074), k
 * (000240)  S_BPREL32: [FFFFFF08], Type:      T_UINT4(0075), mask
 * (000254)  S_BPREL32: [FFFFFF0C], Type:      T_UINT4(0075), j
 * (000264)  S_BPREL32: [FFFFFF10], Type:      T_UINT4(0075), z
 * (000274)  S_BPREL32: [FFFFFF14], Type:      T_UINT4(0075), i
 * (000284)  S_BPREL32: [FFFFFF18], Type:       T_INT4(0074), y
 * (000294)  S_BPREL32: [FFFFFF1C], Type:       T_INT4(0074), h
 * (0002A4)  S_BPREL32: [FFFFFF20], Type:             0x2114, x
 * (0002B4)  S_BPREL32: [FFFFFF60], Type:       T_INT4(0074), g
 * (0002C4)  S_BPREL32: [FFFFFF64], Type:       T_INT4(0074), w
 * (0002D4)  S_BPREL32: [FFFFFF68], Type:   T_32PUINT4(0475), xp
 * (0002E4)  S_BPREL32: [FFFFFF6C], Type:      T_UINT4(0075), f
 * (0002F4)  S_BPREL32: [FFFFFF70], Type:             0x2115, u
 * (000304)  S_BPREL32: [FFFFFFAC], Type:             0x2114, c
 * (000314)  S_BPREL32: [FFFFFFEC], Type:             0x20F2, r
 * (000324)  S_BPREL32: [FFFFFFF4], Type:      T_UINT4(0075), a
 * (000334)  S_BPREL32: [FFFFFFF8], Type:             0x20F3, q
 * (000344)  S_BPREL32: [FFFFFFFC], Type:   T_32PUINT4(0475), p
 * 
 * (000354) S_END
 */
void huft_build()
{
	// TODO: huft_build
}

/*
 * (000358) S_GPROC32: [0001:0009C2FD], Cb: 000001CA, Type:             0x2117, inflate_trees_dynamic
 *          Parent: 00000000, End: 00000458, Next: 0000045C
 *          Debug start: 0000001C, Debug end: 000001BB
 *          Flags: Frame Ptr Present
 * 
 * (000398)  S_BPREL32: [00000008], Type:      T_UINT4(0075), nl
 * (0003A8)  S_BPREL32: [0000000C], Type:      T_UINT4(0075), nd
 * (0003B8)  S_BPREL32: [00000010], Type:   T_32PUINT4(0475), c
 * (0003C8)  S_BPREL32: [00000014], Type:   T_32PUINT4(0475), bl
 * (0003D8)  S_BPREL32: [00000018], Type:   T_32PUINT4(0475), bd
 * (0003E8)  S_BPREL32: [0000001C], Type:             0x210D, tl
 * (0003F8)  S_BPREL32: [00000020], Type:             0x210D, td
 * (000408)  S_BPREL32: [00000024], Type:             0x20F3, hp
 * (000418)  S_BPREL32: [00000028], Type:             0x2107, z
 * (000428)  S_BPREL32: [FFFFFFF4], Type:   T_32PUINT4(0475), v
 * (000438)  S_BPREL32: [FFFFFFF8], Type:      T_UINT4(0075), hn
 * (000448)  S_BPREL32: [FFFFFFFC], Type:       T_INT4(0074), r
 * 
 * (000458) S_END
 */
void inflate_trees_dynamic()
{
	// TODO: inflate_trees_dynamic
}

/*
 * (00045C) S_GPROC32: [0001:0009C4C7], Cb: 0000002E, Type:             0x2119, inflate_trees_fixed
 *          Parent: 00000000, End: 000004E8, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000002C
 *          Flags: Frame Ptr Present
 * 
 * (000498)  S_BPREL32: [00000008], Type:   T_32PUINT4(0475), bl
 * (0004A8)  S_BPREL32: [0000000C], Type:   T_32PUINT4(0475), bd
 * (0004B8)  S_BPREL32: [00000010], Type:             0x210D, tl
 * (0004C8)  S_BPREL32: [00000014], Type:             0x210D, td
 * (0004D8)  S_BPREL32: [00000018], Type:             0x2107, z
 * 
 * (0004E8) S_END
 */
void inflate_trees_fixed()
{
	// TODO: inflate_trees_fixed
}

