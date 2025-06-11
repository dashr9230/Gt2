
// File: C:\CodePrj\Gt2\Game\src\jon\lensflare.c

/*
 * ModName: .\Debug\lensflare.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\lensflare.obj
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
 * (00008C) S_GPROC32: [0001:0002F7C0], Cb: 0000016E, Type:             0x1B6E, flareAttachFlare
 *          Parent: 00000000, End: 00000128, Next: 0000012C
 *          Debug start: 00000006, Debug end: 0000016A
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:             0x1404, light
 * (0000D8)  S_BPREL32: [0000000C], Type:             0x13A1, offset
 * (0000EC)  S_BPREL32: [00000010], Type:      T_UCHAR(0020), flaretype
 * (000104)  S_BPREL32: [FFFFFFFC], Type:             0x1404, obj
 * (000114)  S_LDATA32: [0003:00075CE0], Type:             0x1008, zro
 * 
 * (000128) S_END
 * 
 * (00012C) S_LPROC32: [0001:0002F92E], Cb: 000001C5, Type:             0x1408, flareDrawTestPattern
 *          Parent: 00000000, End: 00000234, Next: 00000238
 *          Debug start: 00000006, Debug end: 000001C1
 *          Flags: Frame Ptr Present
 * 
 * (000168)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000178)  S_BPREL32: [FFFFFFD8], Type:             0x11D3, vp
 * (000188)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), z
 * (000198)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), y
 * (0001A8)  S_BPREL32: [FFFFFFE4], Type:      T_UCHAR(0020), i
 * (0001B8)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), x
 * (0001C8)  S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), vis
 * (0001D8)  S_BPREL32: [FFFFFFF0], Type:             0x1008, uvL
 * (0001E8)  S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), vc
 * 
 * (0001F8)  S_BLOCK32: [0001:0002F94F], Cb: 000000CD, (none)
 *           Parent: 0000012C, End: 00000230
 * 
 * (000210)   S_BPREL32: [FFFFFFD0], Type:     T_REAL32(0040), sy
 * (000220)   S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), sx
 * 
 * (000230)  S_END
 * 
 * (000234) S_END
 * 
 * (000238) S_LPROC32: [0001:0002FAF3], Cb: 000000C3, Type:             0x1408, flareTrackAttachment
 *          Parent: 00000000, End: 000002B4, Next: 000002B8
 *          Debug start: 00000006, Debug end: 000000BF
 *          Flags: Frame Ptr Present
 * 
 * (000274)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (000284)  S_BPREL32: [FFFFFFF4], Type:             0x1404, trg
 * (000294)  S_BPREL32: [FFFFFFF8], Type:             0x11DC, rm
 * (0002A4)  S_BPREL32: [FFFFFFFC], Type:             0x13A1, off
 * 
 * (0002B4) S_END
 * 
 * (0002B8) S_GPROC32: [0001:0002FBB6], Cb: 000002A2, Type:             0x1B70, flareMeshAllocate
 *          Parent: 00000000, End: 0000042C, Next: 00000430
 *          Debug start: 00000006, Debug end: 0000029E
 *          Flags: Frame Ptr Present
 * 
 * (0002F4)  S_BPREL32: [00000008], Type:      T_UCHAR(0020), flareTypeA
 * (00030C)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), flareTypeB
 * (000324)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000334)  S_BLOCK32: [0001:0002FBD4], Cb: 0000027B, (none)
 *           Parent: 000002B8, End: 00000428
 * 
 * (00034C)   S_BPREL32: [FFFFFFF4], Type:             0x1AC7, obj
 * (00035C)   S_BPREL32: [FFFFFFF8], Type:     T_USHORT(0021), ft
 * 
 * (00036C)   S_BLOCK32: [0001:0002FC4B], Cb: 00000204, (none)
 *            Parent: 00000334, End: 00000424
 * 
 * (000384)    S_BPREL32: [FFFFFFD8], Type:             0x13A1, pos
 * (000394)    S_BPREL32: [FFFFFFDC], Type:             0x1404, lcon
 * (0003A8)    S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), ya
 * (0003B8)    S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), xa
 * (0003C8)    S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), da
 * (0003D8)    S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), c
 * (0003E8)    S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), za
 * 
 * (0003F8)    S_BLOCK32: [0001:0002FE00], Cb: 00000040, (none)
 *             Parent: 0000036C, End: 00000420
 * 
 * (000410)     S_BPREL32: [FFFFFFCC], Type:             0x1008, p
 * 
 * (000420)    S_END
 * 
 * (000424)   S_END
 * 
 * (000428)  S_END
 * 
 * (00042C) S_END
 * 
 * (000430) S_GPROC32: [0001:0002FE58], Cb: 00000144, Type:             0x1001, flareInitialize
 *          Parent: 00000000, End: 00000468, Next: 0000046C
 *          Debug start: 00000003, Debug end: 00000142
 *          Flags: Frame Ptr Present
 * 
 * (000468) S_END
 * 
 * (00046C) S_LPROC32: [0001:0002FF9C], Cb: 00000138, Type:             0x1408, flareDrawAllFlares
 *          Parent: 00000000, End: 0000056C, Next: 00000570
 *          Debug start: 00000006, Debug end: 00000134
 *          Flags: Frame Ptr Present
 * 
 * (0004A8)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0004B8)  S_BPREL32: [FFFFFFF8], Type:             0x1404, flr
 * (0004C8)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), hErr
 * 
 * (0004DC)  S_BLOCK32: [0001:0002FFB6], Cb: 00000047, (none)
 *           Parent: 0000046C, End: 00000508
 * 
 * (0004F4)   S_BPREL32: [FFFFFFF4], Type:             0x1B71, flare
 * 
 * (000508)  S_END
 * 
 * (00050C)  S_BLOCK32: [0001:00030022], Cb: 00000038, (none)
 *           Parent: 0000046C, End: 00000538
 * 
 * (000524)   S_BPREL32: [FFFFFFF0], Type:             0x1B71, flare
 * 
 * (000538)  S_END
 * 
 * (00053C)  S_BLOCK32: [0001:00030075], Cb: 0000004A, (none)
 *           Parent: 0000046C, End: 00000568
 * 
 * (000554)   S_BPREL32: [FFFFFFEC], Type:             0x1B71, flare
 * 
 * (000568)  S_END
 * 
 * (00056C) S_END
 * 
 * (000570) S_LPROC32: [0001:000300D4], Cb: 000006EC, Type:             0x1A6A, flareDrawSpecificFlare
 *          Parent: 00000000, End: 000007D4, Next: 000007D8
 *          Debug start: 00000006, Debug end: 000006E8
 *          Flags: Frame Ptr Present
 * 
 * (0005B0)  S_BPREL32: [00000008], Type:             0x1404, obj
 * (0005C0)  S_BPREL32: [0000000C], Type:      T_UCHAR(0020), v
 * (0005D0)  S_BPREL32: [FFFFFFCC], Type:             0x1B77, flare
 * (0005E4)  S_BPREL32: [FFFFFFD0], Type:             0x1B74, lens
 * (0005F8)  S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), m
 * (000608)  S_BPREL32: [FFFFFFD8], Type:             0x1B71, lf
 * (000618)  S_BPREL32: [FFFFFFDC], Type:      T_ULONG(0022), zm
 * (000628)  S_BPREL32: [FFFFFFE0], Type:      T_UCHAR(0020), l
 * (000638)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), z
 * (000648)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), y
 * (000658)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), x
 * (000668)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), vis
 * (000678)  S_BPREL32: [FFFFFFF4], Type:             0x1008, uvL
 * 
 * (000688)  S_BLOCK32: [0001:00030260], Cb: 00000100, (none)
 *           Parent: 00000570, End: 000006D0
 * 
 * (0006A0)   S_BPREL32: [FFFFFFC0], Type:     T_REAL32(0040), tx
 * (0006B0)   S_BPREL32: [FFFFFFC4], Type:     T_REAL32(0040), tz
 * (0006C0)   S_BPREL32: [FFFFFFC8], Type:     T_REAL32(0040), ty
 * 
 * (0006D0)  S_END
 * 
 * (0006D4)  S_BLOCK32: [0001:00030379], Cb: 000002A4, (none)
 *           Parent: 00000570, End: 00000794
 * 
 * (0006EC)   S_BPREL32: [FFFFFFBC], Type:       T_LONG(0012), d
 * 
 * (0006FC)   S_BLOCK32: [0001:00030409], Cb: 00000108, (none)
 *            Parent: 000006D4, End: 00000744
 * 
 * (000714)    S_BPREL32: [FFFFFFB0], Type:     T_REAL32(0040), dy
 * (000724)    S_BPREL32: [FFFFFFB4], Type:     T_REAL32(0040), dx
 * (000734)    S_BPREL32: [FFFFFFB8], Type:      T_ULONG(0022), clr
 * 
 * (000744)   S_END
 * 
 * (000748)   S_BLOCK32: [0001:00030516], Cb: 00000107, (none)
 *            Parent: 000006D4, End: 00000790
 * 
 * (000760)    S_BPREL32: [FFFFFFA4], Type:     T_REAL32(0040), dy
 * (000770)    S_BPREL32: [FFFFFFA8], Type:     T_REAL32(0040), dx
 * (000780)    S_BPREL32: [FFFFFFAC], Type:      T_ULONG(0022), clr
 * 
 * (000790)   S_END
 * 
 * (000794)  S_END
 * 
 * (000798)  S_BLOCK32: [0001:000306BD], Cb: 000000FA, (none)
 *           Parent: 00000570, End: 000007D0
 * 
 * (0007B0)   S_BPREL32: [FFFFFF9C], Type:      T_UCHAR(0020), ab
 * (0007C0)   S_BPREL32: [FFFFFFA0], Type:      T_ULONG(0022), col
 * 
 * (0007D0)  S_END
 * 
 * (0007D4) S_END
 * 
 * (0007D8) S_LPROC32: [0001:000307C0], Cb: 000002A9, Type:             0x1B79, drawClippedColouredScreenSprite
 *          Parent: 00000000, End: 00000930, Next: 00000934
 *          Debug start: 00000006, Debug end: 000002A5
 *          Flags: Frame Ptr Present
 * 
 * (000820)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (000830)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000840)  S_BPREL32: [00000010], Type:     T_REAL32(0040), z
 * (000850)  S_BPREL32: [00000014], Type:     T_REAL32(0040), s
 * (000860)  S_BPREL32: [00000018], Type:  T_32PREAL32(0440), tex
 * (000870)  S_BPREL32: [0000001C], Type:      T_ULONG(0022), col
 * (000880)  S_BPREL32: [FFFFFFD4], Type:     T_REAL32(0040), tx
 * (000890)  S_BPREL32: [FFFFFFD8], Type:     T_REAL32(0040), lx
 * (0008A0)  S_BPREL32: [FFFFFFDC], Type:     T_REAL32(0040), sz
 * (0008B0)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), hg
 * (0008C0)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), rz
 * (0008D0)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), wd
 * (0008E0)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), rsz
 * (0008F0)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), d
 * (000900)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), iy
 * (000910)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), ix
 * (000920)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), ty
 * 
 * (000930) S_END
 * 
 * (000934) S_LPROC32: [0001:00030A69], Cb: 0000010B, Type:             0x1B7B, flareCountPurples
 *          Parent: 00000000, End: 000009F0, Next: 000009F4
 *          Debug start: 00000006, Debug end: 00000107
 *          Flags: Frame Ptr Present
 * 
 * (000970)  S_BPREL32: [00000008], Type:             0x1B71, flare
 * (000984)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), i
 * (000994)  S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), c
 * 
 * (0009A4)  S_BLOCK32: [0001:00030A77], Cb: 000000D1, (none)
 *           Parent: 00000934, End: 000009EC
 * 
 * (0009BC)   S_BPREL32: [FFFFFFEC], Type:  T_32PUSHORT(0421), dat
 * (0009CC)   S_BPREL32: [FFFFFFF0], Type:       T_LONG(0012), y
 * (0009DC)   S_BPREL32: [FFFFFFF4], Type:       T_LONG(0012), x
 * 
 * (0009EC)  S_END
 * 
 * (0009F0) S_END
 * 
 * (0009F4) S_GPROC32: [0001:00030B74], Cb: 00000062, Type:             0x1001, flareRelease
 *          Parent: 00000000, End: 00000A28, Next: 00000A2C
 *          Debug start: 00000003, Debug end: 00000060
 *          Flags: Frame Ptr Present
 * 
 * (000A28) S_END
 * 
 * (000A2C) S_GPROC32: [0001:00030BD6], Cb: 0000026D, Type:             0x1B7C, FLARES_Init
 *          Parent: 00000000, End: 00000AD8, Next: 00000ADC
 *          Debug start: 00000006, Debug end: 00000269
 *          Flags: Frame Ptr Present
 * 
 * (000A60)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), lpFileName
 * (000A78)  S_BPREL32: [0000000C], Type:       T_LONG(0012), MaxActiveLamps
 * 
 * (000A94)  S_BLOCK32: [0001:00030C8D], Cb: 0000018E, (none)
 *           Parent: 00000A2C, End: 00000AD4
 * 
 * (000AAC)   S_BPREL32: [FFFFFFF8], Type:             0x1404, lpNewFlare
 * (000AC4)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000AD4)  S_END
 * 
 * (000AD8) S_END
 * 
 * (000ADC) S_LPROC32: [0001:00030E43], Cb: 00000060, Type:             0x1408, SingleFlareDraw
 *          Parent: 00000000, End: 00000B28, Next: 00000B2C
 *          Debug start: 00000003, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (000B14)  S_BPREL32: [00000008], Type:             0x1404, lpObj
 * 
 * (000B28) S_END
 * 
 * (000B2C) S_LPROC32: [0001:00030EA3], Cb: 00000154, Type:             0x1408, FlareDraw
 *          Parent: 00000000, End: 00000BDC, Next: 00000BE0
 *          Debug start: 00000006, Debug end: 00000150
 *          Flags: Frame Ptr Present
 * 
 * (000B60)  S_BPREL32: [00000008], Type:             0x1404, lpObj
 * 
 * (000B74)  S_BLOCK32: [0001:00030EB6], Cb: 0000013D, (none)
 *           Parent: 00000B2C, End: 00000BD8
 * 
 * (000B8C)   S_BPREL32: [FFFFFFE0], Type:             0x1008, Pos
 * (000B9C)   S_LDATA32: [0003:000104B4], Type:             0x13BB, tmflare
 * (000BB4)   S_BPREL32: [FFFFFFEC], Type:             0x1769, Cols
 * (000BC8)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000BD8)  S_END
 * 
 * (000BDC) S_END
 * 
 * (000BE0) S_LPROC32: [0001:00030FF7], Cb: 0000002A, Type:             0x1B48, FLARES_LoadLamps
 *          Parent: 00000000, End: 00000C30, Next: 00000C34
 *          Debug start: 00000003, Debug end: 00000028
 *          Flags: Frame Ptr Present
 * 
 * (000C18)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), lpFileName
 * 
 * (000C30) S_END
 * 
 * (000C34) S_GPROC32: [0001:00031021], Cb: 00000098, Type:             0x1001, FLARES_Release
 *          Parent: 00000000, End: 00000C6C, Next: 000010AC
 *          Debug start: 00000003, Debug end: 00000096
 *          Flags: Frame Ptr Present
 * 
 * (000C6C) S_END
 * 
 * (000C70) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (000C8C) S_GDATA32: [0003:0097BC80], Type:      T_UCHAR(0020), seventies
 * (000CA4) S_LDATA32: [0003:0000FF18], Type:             0x1B7D, lenses
 * (000CBC) S_LDATA32: [0003:00010230], Type:             0x1B7E, flares
 * (000CD4) S_LDATA32: [0003:00010338], Type:             0x1B7F, texts
 * (000CE8) S_LDATA32: [0003:00010350], Type:             0x112A, ddsd
 * (000CFC) S_LDATA32: [0003:000103D0], Type:             0x1006, gIMx
 * (000D10) S_LDATA32: [0003:00075BB0], Type:             0x1B80, lPts
 * (000D24) S_LDATA32: [0003:00075A00], Type:             0x1B81, fPts
 * (000D38) S_LDATA32: [0003:00075B20], Type:             0x1B82, hPts
 * (000D4C) S_LDATA32: [0003:00010410], Type:             0x11CC, d3td
 * (000D60) S_LDATA32: [0003:00010444], Type:             0x1B83, tpX
 * (000D74) S_LDATA32: [0003:00010468], Type:             0x1B83, tpY
 * (000D88) S_LDATA32: [0003:0001048C], Type:             0x1B84, tpSc
 * (000D9C) S_LDATA32: [0003:00010498], Type:             0x1B85, iCon
 * (000DB0) S_LDATA32: [0003:000759CC], Type:     T_REAL32(0040), vwx1
 * (000DC4) S_LDATA32: [0003:000759D4], Type:     T_REAL32(0040), vwy1
 * (000DD8) S_LDATA32: [0003:000759D0], Type:     T_REAL32(0040), vwx2
 * (000DEC) S_LDATA32: [0003:000759D8], Type:     T_REAL32(0040), vwy2
 * (000E00) S_LDATA32: [0003:000759BC], Type:             0x1769, clr
 * (000E14) S_LDATA32: [0003:000759DC], Type:             0x13BB, ctx
 * (000E28) S_LDATA32: [0003:00075CD4], Type:     T_REAL32(0040), widy
 * (000E3C) S_LDATA32: [0003:00075CD8], Type:             0x1404, flareParent
 * (000E58) S_LDATA32: [0003:000759B8], Type:      T_ULONG(0022), flarePurple
 * (000E74) S_LDATA32: [0003:000759FC], Type:             0x13A0, lenstex
 * (000E8C) S_GDATA32: [0003:00C30EA0], Type:     T_REAL32(0040), CameraXPos
 * (000EA8) S_GDATA32: [0003:00C30FAC], Type:     T_REAL32(0040), CameraYPos
 * (000EC4) S_GDATA32: [0003:00C30FA4], Type:     T_REAL32(0040), CameraZPos
 * (000EE0) S_GDATA32: [0003:00070480], Type:             0x1006, CameraMatrix
 * (000EFC) S_LDATA32: [0003:00075CEC], Type:             0x1404, lpFlareObj
 * (000F18) S_LDATA32: [0003:00075CF0], Type:             0x1B8B, lpFlares
 * (000F30) S_LDATA32: [0003:00075CF4], Type:             0x1B8D, lpFlareDrawOrder
 * (000F50) S_LDATA32: [0003:00075CF8], Type:       T_LONG(0012), NumLampsActive
 * (000F70) S_LDATA32: [0003:00075CFC], Type:       T_LONG(0012), MaxLampsActive
 * (000F90) S_LDATA32: [0003:00075D00], Type:       T_LONG(0012), CurLampsActive
 * (000FB0) S_LDATA32: [0003:00075D04], Type:       T_LONG(0012), DrwLampsStart
 * (000FCC) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000FE4) S_GDATA32: [0003:0091ED48], Type:             0x1B2B, RS_lpCurTex
 * (001000) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (00101C) S_GDATA32: [0003:00C970E0], Type:             0x1AD2, RS_TexChge
 * (001038) S_GDATA32: [0003:00C97118], Type:      T_ULONG(0022), RS_DPCalled
 * (001054) S_GDATA32: [0003:00C970CC], Type:      T_ULONG(0022), RS_DPVCount
 * (001070) S_GDATA32: [0003:00C97100], Type:             0x1AD2, RS_TransformChge
 * (001090) S_GDATA32: [0003:0006D568], Type:             0x1B2D, RS_PrimType
 * 
 * (0010AC) S_GPROC32: [0001:000310C0], Cb: 00000078, Type:             0x1B8F, RSTATES_DrawPrimitive
 *          Parent: 00000000, End: 00001174, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000076
 *          Flags: Frame Ptr Present
 * 
 * (0010EC)  S_BPREL32: [00000008], Type:       T_INT4(0074), dptPrimitiveType
 * (00110C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), dwVertexTypeDesc
 * (00112C)  S_BPREL32: [00000010], Type:    T_32PVOID(0403), lpvVertices
 * (001144)  S_BPREL32: [00000014], Type:      T_ULONG(0022), dwVertexCount
 * (001160)  S_BPREL32: [00000018], Type:      T_ULONG(0022), dwFlags
 * 
 * (001174) S_END
 * 
 */

