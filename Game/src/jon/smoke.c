
// Original file: C:\CodePrj\Gt2\Game\src\jon\smoke.c

/*
 * ModName: .\Debug\smoke.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\smoke.obj
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
 * (000088) S_GPROC32: [0001:0002DF70], Cb: 00000196, Type:             0x1B99, smokeAddSmoke
 *          Parent: 00000000, End: 00000148, Next: 0000014C
 *          Debug start: 00000006, Debug end: 00000192
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0000D0)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (0000E4)  S_BPREL32: [00000010], Type:             0x13A1, vel
 * (0000F4)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), intens
 * (000108)  S_BPREL32: [FFFFFFFC], Type:             0x1B9A, smkDat
 * 
 * (00011C)  S_BLOCK32: [0001:0002DFD4], Cb: 00000119, (none)
 *           Parent: 00000088, End: 00000144
 * 
 * (000134)   S_BPREL32: [FFFFFFF8], Type:             0x13DB, prt
 * 
 * (000144)  S_END
 * 
 * (000148) S_END
 * 
 * (00014C) S_LPROC32: [0001:0002E106], Cb: 00000028, Type:             0x1B9B, prtAllocate
 *          Parent: 00000000, End: 00000190, Next: 00000194
 *          Debug start: 00000004, Debug end: 00000024
 *          Flags: Frame Ptr Present
 * 
 * (000180)  S_BPREL32: [FFFFFFFC], Type:             0x13DB, ret
 * 
 * (000190) S_END
 * 
 * (000194) S_GPROC32: [0001:0002E12E], Cb: 00000170, Type:             0x1B9D, smokeAddGravel
 *          Parent: 00000000, End: 00000254, Next: 00000258
 *          Debug start: 00000006, Debug end: 0000016C
 *          Flags: Frame Ptr Present
 * 
 * (0001CC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0001DC)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (0001F0)  S_BPREL32: [00000010], Type:             0x13A1, vel
 * (000200)  S_BPREL32: [00000014], Type:     T_REAL32(0040), fount
 * (000214)  S_BPREL32: [FFFFFFFC], Type:             0x1B9A, smkDat
 * 
 * (000228)  S_BLOCK32: [0001:0002E192], Cb: 000000F3, (none)
 *           Parent: 00000194, End: 00000250
 * 
 * (000240)   S_BPREL32: [FFFFFFF8], Type:             0x13DB, prt
 * 
 * (000250)  S_END
 * 
 * (000254) S_END
 * 
 * (000258) S_GPROC32: [0001:0002E29E], Cb: 00000210, Type:             0x1B9F, smokeAddDust
 *          Parent: 00000000, End: 00000328, Next: 0000032C
 *          Debug start: 00000006, Debug end: 0000020C
 *          Flags: Frame Ptr Present
 * 
 * (00028C)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (00029C)  S_BPREL32: [0000000C], Type:             0x13A1, root
 * (0002B0)  S_BPREL32: [00000010], Type:             0x13A1, vel
 * (0002C0)  S_BPREL32: [00000014], Type:      T_UCHAR(0020), intens
 * (0002D4)  S_BPREL32: [00000018], Type:      T_UCHAR(0020), ColType
 * (0002E8)  S_BPREL32: [FFFFFFFC], Type:             0x1B9A, smkDat
 * 
 * (0002FC)  S_BLOCK32: [0001:0002E302], Cb: 00000193, (none)
 *           Parent: 00000258, End: 00000324
 * 
 * (000314)   S_BPREL32: [FFFFFFF8], Type:             0x13DB, prt
 * 
 * (000324)  S_END
 * 
 * (000328) S_END
 * 
 * (00032C) S_GPROC32: [0001:0002E4AE], Cb: 0000012C, Type:             0x1BA1, smokeAllocate
 *          Parent: 00000000, End: 000003AC, Next: 000003B0
 *          Debug start: 00000004, Debug end: 00000128
 *          Flags: Frame Ptr Present
 * 
 * (000364)  S_BPREL32: [00000008], Type:             0x13A1, root
 * (000378)  S_BPREL32: [0000000C], Type:             0x13A1, vel
 * (000388)  S_BPREL32: [00000010], Type:             0x1014, ptom
 * (00039C)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (0003AC) S_END
 * 
 * (0003B0) S_LPROC32: [0001:0002E5DA], Cb: 0000007D, Type:             0x1408, smokeDraw
 *          Parent: 00000000, End: 00000418, Next: 0000041C
 *          Debug start: 00000006, Debug end: 00000079
 *          Flags: Frame Ptr Present
 * 
 * (0003E4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0003F4)  S_BPREL32: [FFFFFFF8], Type:             0x1B9A, smkDat
 * (000408)  S_BPREL32: [FFFFFFFC], Type:             0x13DB, prt
 * 
 * (000418) S_END
 * 
 * (00041C) S_LPROC32: [0001:0002E657], Cb: 000000E3, Type:             0x1BA3, smokeLink
 *          Parent: 00000000, End: 000004AC, Next: 000004B0
 *          Debug start: 00000006, Debug end: 000000DF
 *          Flags: Frame Ptr Present
 * 
 * (000450)  S_BPREL32: [00000008], Type:             0x13DB, P
 * (000460)  S_BPREL32: [FFFFFFF0], Type:             0x1BA7, pibef
 * (000474)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), Z
 * (000484)  S_BPREL32: [FFFFFFF8], Type:             0x1BA4, news
 * (000498)  S_BPREL32: [FFFFFFFC], Type:             0x1BA4, ibef
 * 
 * (0004AC) S_END
 * 
 * (0004B0) S_LPROC32: [0001:0002E73A], Cb: 0000008F, Type:             0x1408, smokeHandle
 *          Parent: 00000000, End: 00000518, Next: 0000051C
 *          Debug start: 00000006, Debug end: 0000008B
 *          Flags: Frame Ptr Present
 * 
 * (0004E4)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0004F4)  S_BPREL32: [FFFFFFF8], Type:             0x1B9A, smkDat
 * (000508)  S_BPREL32: [FFFFFFFC], Type:             0x13DB, prt
 * 
 * (000518) S_END
 * 
 * (00051C) S_GPROC32: [0001:0002E7C9], Cb: 0000013C, Type:             0x1001, smokeInitialize
 *          Parent: 00000000, End: 00000554, Next: 00000558
 *          Debug start: 00000003, Debug end: 0000013A
 *          Flags: Frame Ptr Present
 * 
 * (000554) S_END
 * 
 * (000558) S_LPROC32: [0001:0002E905], Cb: 00000388, Type:             0x1408, allSmokeDraw
 *          Parent: 00000000, End: 000006BC, Next: 000006C0
 *          Debug start: 00000006, Debug end: 00000374
 *          Flags: Frame Ptr Present
 * 
 * (00058C)  S_LDATA32: [0001:0002EC7D], Type:     T_NOTYPE(0000), (none)
 * (00059C)  S_LABEL32: [0001:0002E9DD], $L79291
 * (0005B0)  S_LABEL32: [0001:0002EA6B], $L79295
 * (0005C4)  S_LABEL32: [0001:0002EAFA], $L79300
 * (0005D8)  S_LABEL32: [0001:0002EB6E], $L79304
 * (0005EC)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0005FC)  S_BPREL32: [FFFFFFFC], Type:             0x1BA4, smk
 * 
 * (00060C)  S_BLOCK32: [0001:0002E942], Cb: 00000337, (none)
 *           Parent: 00000558, End: 000006B8
 * 
 * (000624)   S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), FarP
 * (000638)   S_BPREL32: [FFFFFFF4], Type:     T_USHORT(0021), Fov
 * (000648)   S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), NearP
 * 
 * (00065C)   S_BLOCK32: [0001:0002E9A5], Cb: 0000028F, (none)
 *            Parent: 0000060C, End: 000006B4
 * 
 * (000674)    S_BPREL32: [FFFFFFE0], Type:  T_32PREAL32(0440), dat
 * (000684)    S_BPREL32: [FFFFFFE4], Type:             0x13DB, prt
 * (000694)    S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), alp
 * (0006A4)    S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), s
 * 
 * (0006B4)   S_END
 * 
 * (0006B8)  S_END
 * 
 * (0006BC) S_END
 * 
 * (0006C0) S_GPROC32: [0001:0002EC8D], Cb: 00000065, Type:             0x1001, smokeScram
 *          Parent: 00000000, End: 00000730, Next: 00000734
 *          Debug start: 00000006, Debug end: 00000061
 *          Flags: Frame Ptr Present
 * 
 * (0006F4)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * 
 * (000704)  S_BLOCK32: [0001:0002ECA4], Cb: 00000048, (none)
 *           Parent: 000006C0, End: 0000072C
 * 
 * (00071C)   S_BPREL32: [FFFFFFF8], Type:             0x1404, nxt
 * 
 * (00072C)  S_END
 * 
 * (000730) S_END
 * 
 * (000734) S_LPROC32: [0001:0002ECF2], Cb: 00000033, Type:             0x1BA3, prtScramList
 *          Parent: 00000000, End: 000007A4, Next: 000007A8
 *          Debug start: 00000004, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (000768)  S_BPREL32: [00000008], Type:             0x13DB, prt
 * 
 * (000778)  S_BLOCK32: [0001:0002ECFC], Cb: 00000023, (none)
 *           Parent: 00000734, End: 000007A0
 * 
 * (000790)   S_BPREL32: [FFFFFFFC], Type:             0x13DB, nxt
 * 
 * (0007A0)  S_END
 * 
 * (0007A4) S_END
 * 
 * (0007A8) S_GPROC32: [0001:0002ED25], Cb: 0000002C, Type:             0x1001, smokeRelease
 *          Parent: 00000000, End: 000007DC, Next: 00000A0C
 *          Debug start: 00000003, Debug end: 0000002A
 *          Flags: Frame Ptr Present
 * 
 * (0007DC) S_END
 * 
 * (0007E0) S_GDATA32: [0003:0097BEC0], Type:             0x13DB, freeParticle
 * (0007FC) S_GDATA32: [0003:000756B8], Type:      T_ULONG(0022), prtMaxParticles
 * (00081C) S_GDATA32: [0003:0097BCB4], Type:             0x1404, smoker
 * (000834) S_GDATA32: [0003:0097BCB0], Type:             0x13A0, smokePage
 * (00084C) S_LDATA32: [0003:0000F3F0], Type:             0x13BB, txF1
 * (000860) S_LDATA32: [0003:0000F410], Type:             0x13BB, txF2
 * (000874) S_LDATA32: [0003:0000F430], Type:             0x13BB, txG1
 * (000888) S_LDATA32: [0003:0000F450], Type:             0x13BB, txG2
 * (00089C) S_LDATA32: [0003:0000F470], Type:             0x1769, bluSmk
 * (0008B4) S_LDATA32: [0003:0000F480], Type:             0x1769, dstSmk
 * (0008CC) S_LDATA32: [0003:0000F490], Type:             0x1769, GrassdstSmk
 * (0008E8) S_LDATA32: [0003:0000F4A0], Type:             0x1769, dstSmkNight
 * (000904) S_LDATA32: [0003:0000F4B0], Type:             0x1769, grvCol
 * (00091C) S_LDATA32: [0003:00075840], Type:             0x1006, cm
 * (000930) S_LDATA32: [0003:00075820], Type:             0x1008, toS
 * (000944) S_LDATA32: [0003:00075884], Type:             0x1BA4, smokes
 * (00095C) S_LDATA32: [0003:00075880], Type:             0x1BA4, fSmk
 * (000970) S_LDATA32: [0003:00075818], Type:      T_ULONG(0022), nSmk
 * (000984) S_LDATA32: [0003:00075888], Type:      T_UCHAR(0020), mSet
 * (000998) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (0009B0) S_GDATA32: [0003:00C9A6E4], Type:             0x13EB, CurScreen
 * (0009C8) S_GDATA32: [0003:0006D318], Type:             0x1664, RS
 * (0009DC) S_GDATA32: [0003:00C97120], Type:             0x169F, RC
 * (0009F0) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * 
 * (000A0C) S_GPROC32: [0001:0002ED60], Cb: 0000006F, Type:             0x1A19, RSTATES_SetZWriteEnable
 *          Parent: 00000000, End: 00000A60, Next: 00000000
 *          Debug start: 00000004, Debug end: 0000006B
 *          Flags: Frame Ptr Present
 * 
 * (000A4C)  S_BPREL32: [00000008], Type:       T_INT4(0074), State
 * 
 * (000A60) S_END
 * 
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
 * 
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
 * 
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
 * 
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
 * 
 * (00028C) S_LPROC32: [0001:0002DDAD], Cb: 00000038, Type:             0x1408, skidHandle
 *          Parent: 00000000, End: 000002D0, Next: 000002D4
 *          Debug start: 00000003, Debug end: 00000036
 *          Flags: Frame Ptr Present
 * 
 * (0002C0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * 
 * (0002D0) S_END
 * 
 * (0002D4) S_GPROC32: [0001:0002DDE5], Cb: 000000CB, Type:             0x16A1, skidInitialize
 *          Parent: 00000000, End: 0000031C, Next: 00000320
 *          Debug start: 00000003, Debug end: 000000C9
 *          Flags: Frame Ptr Present
 * 
 * (00030C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), nsk
 * 
 * (00031C) S_END
 * 
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
 * 
 * (0003B0) S_GPROC32: [0001:0002DF1D], Cb: 00000048, Type:             0x1001, skidRelease
 *          Parent: 00000000, End: 000003E4, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000046
 *          Flags: Frame Ptr Present
 * 
 * (0003E4) S_END
 * 
 * (0003E8) S_LDATA32: [0003:0000F170], Type:             0x1ABA, vxSubSkid
 * (000400) S_LDATA32: [0003:000757FC], Type:             0x1A34, zPos
 * (000414) S_LDATA32: [0003:00075808], Type:             0x1A35, zOri
 * (000428) S_GDATA32: [0003:00075810], Type:             0x1404, skidder
 * (000440) S_LDATA32: [0003:00075814], Type:             0x13E2, skidset
 * (000458) S_LDATA32: [0003:000757F4], Type:      T_ULONG(0022), nSkids
 * (000470) S_LDATA32: [0003:000757F0], Type:      T_ULONG(0022), skidI
 * (000484) S_LDATA32: [0003:000757F8], Type:      T_UCHAR(0020), recycling
 * 
 */

