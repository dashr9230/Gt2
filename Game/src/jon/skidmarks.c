
// File: C:\CodePrj\Gt2\Game\src\jon\skidmarks.c

/*
 * ModName: .\Debug\skidmarks.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\skidmarks.obj
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
 * (0003E8) S_LDATA32: [0003:0000F170], Type:             0x1ABA, vxSubSkid
 * (000400) S_LDATA32: [0003:000757FC], Type:             0x1A34, zPos
 * (000414) S_LDATA32: [0003:00075808], Type:             0x1A35, zOri
 * (000428) S_GDATA32: [0003:00075810], Type:             0x1404, skidder
 * (000440) S_LDATA32: [0003:00075814], Type:             0x13E2, skidset
 * (000458) S_LDATA32: [0003:000757F4], Type:      T_ULONG(0022), nSkids
 * (000470) S_LDATA32: [0003:000757F0], Type:      T_ULONG(0022), skidI
 * (000484) S_LDATA32: [0003:000757F8], Type:      T_UCHAR(0020), recycling
 */

/*
 * (00008C) S_GPROC32: [0001:0002D740], Cb: 0000018C, Type:             0x1BA9, skidAddMark
 *          Parent: 00000000, End: 00000150, Next: 00000154
 *          Debug start: 00000006, Debug end: 00000188
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x1404, skid
 * (0000D4)  S_BPREL32: [0000000C], Type:             0x13A1, end
 * (0000E4)  S_BPREL32: [00000010], Type:             0x13B6, pFac
 * (0000F8)  S_BPREL32: [FFFFFFF8], Type:             0x13E2, lastskid
 * (000110)  S_BPREL32: [FFFFFFFC], Type:             0x13E2, newskid
 * 
 * (000124)  S_BLOCK32: [0001:0002D7A9], Cb: 00000054, (none)
 *           Parent: 0000008C, End: 0000014C
 * 
 * (00013C)   S_BPREL32: [FFFFFFEC], Type:             0x1008, dif
 * 
 * (00014C)  S_END
 * 
 * (000150) S_END
 */
void skidAddMark()
{
	// TODO: skidAddMark
}

/*
 * (000154) S_GPROC32: [0001:0002D8CC], Cb: 00000137, Type:             0x1BAB, skidAllocate
 *          Parent: 00000000, End: 000001D4, Next: 000001D8
 *          Debug start: 00000004, Debug end: 00000133
 *          Flags: Frame Ptr Present
 * 
 * (000188)  S_BPREL32: [00000008], Type:             0x13A1, basis
 * (00019C)  S_BPREL32: [0000000C], Type:             0x1014, ptom
 * (0001B0)  S_BPREL32: [00000010], Type:             0x13B6, pFac
 * (0001C4)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (0001D4) S_END
 */
void skidAllocate()
{
	// TODO: skidAllocate
}

/*
 * (0001D8) S_LPROC32: [0001:0002DA03], Cb: 000003AA, Type:             0x1408, skidDrawSkids
 *          Parent: 00000000, End: 00000288, Next: 0000028C
 *          Debug start: 00000006, Debug end: 000003A6
 *          Flags: Frame Ptr Present
 * 
 * (000210)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000220)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), m
 * (000230)  S_BPREL32: [FFFFFFDC], Type:             0x13E2, skid
 * (000244)  S_BPREL32: [FFFFFFE0], Type:             0x1008, skl
 * (000254)  S_BPREL32: [FFFFFFEC], Type:             0x13A1, lastPos
 * (000268)  S_BPREL32: [FFFFFFF0], Type:             0x1008, skv
 * (000278)  S_BPREL32: [FFFFFFFC], Type:             0x13A1, nrm
 * 
 * (000288) S_END
 */
void skidDrawSkids()
{
	// TODO: skidDrawSkids
}

/*
 * (00028C) S_LPROC32: [0001:0002DDAD], Cb: 00000038, Type:             0x1408, skidHandle
 *          Parent: 00000000, End: 000002D0, Next: 000002D4
 *          Debug start: 00000003, Debug end: 00000036
 *          Flags: Frame Ptr Present
 * 
 * (0002C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0002D0) S_END
 */
void skidHandle()
{
	// TODO: skidHandle
}

/*
 * (0002D4) S_GPROC32: [0001:0002DDE5], Cb: 000000CB, Type:             0x16A1, skidInitialize
 *          Parent: 00000000, End: 0000031C, Next: 00000320
 *          Debug start: 00000003, Debug end: 000000C9
 *          Flags: Frame Ptr Present
 * 
 * (00030C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), nsk
 * 
 * (00031C) S_END
 */
void skidInitialize()
{
	// TODO: skidInitialize
}

/*
 * (000320) S_GPROC32: [0001:0002DEB0], Cb: 0000006D, Type:             0x1001, skidScram
 *          Parent: 00000000, End: 000003AC, Next: 000003B0
 *          Debug start: 00000006, Debug end: 00000069
 *          Flags: Frame Ptr Present
 * 
 * (000354)  S_BLOCK32: [0001:0002DEBF], Cb: 0000005A, (none)
 *           Parent: 00000320, End: 000003A8
 * 
 * (00036C)   S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (00037C)   S_BLOCK32: [0001:0002DED0], Cb: 00000036, (none)
 *            Parent: 00000354, End: 000003A4
 * 
 * (000394)    S_BPREL32: [FFFFFFF8], Type:             0x1404, lnk
 * 
 * (0003A4)   S_END
 * 
 * (0003A8)  S_END
 * 
 * (0003AC) S_END
 */
void skidScram()
{
	// TODO: skidScram
}

/*
 * (0003B0) S_GPROC32: [0001:0002DF1D], Cb: 00000048, Type:             0x1001, skidRelease
 *          Parent: 00000000, End: 000003E4, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000046
 *          Flags: Frame Ptr Present
 * 
 * (0003E4) S_END
 */
void skidRelease()
{
	// TODO: skidRelease
}

