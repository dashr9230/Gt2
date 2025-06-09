
// Original file: C:\CodePrj\Gt2\Engine\src\rstates.c

/*
 * ModName: .\Debug\rstates.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\rstates.obj
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
 * (00008C) S_GPROC32: [0001:00088AC0], Cb: 00000100, Type:             0x1001, RSTATES_Start
 *          Parent: 00000000, End: 000000D4, Next: 000000D8
 *          Debug start: 00000004, Debug end: 000000FC
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0000D4) S_END
 * 
 * (0000D8) S_GPROC32: [0001:00088BC0], Cb: 00000138, Type:             0x1001, RSTATES_Report
 *          Parent: 00000000, End: 0000013C, Next: 00000140
 *          Debug start: 00000004, Debug end: 00000134
 *          Flags: Frame Ptr Present
 * 
 * (000110)  S_BLOCK32: [0001:00088BD1], Cb: 00000123, (none)
 *           Parent: 000000D8, End: 00000138
 * 
 * (000128)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000138)  S_END
 * 
 * (00013C) S_END
 * 
 * (000140) S_GPROC32: [0001:00088CF8], Cb: 00000035, Type:             0x1B5B, RSTATES_ReportMessage
 *          Parent: 00000000, End: 00000194, Next: 00000198
 *          Debug start: 00000003, Debug end: 00000033
 *          Flags: Frame Ptr Present
 * 
 * (000180)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), String
 * 
 * (000194) S_END
 * 
 * (000198) S_GPROC32: [0001:00088D2D], Cb: 00000100, Type:             0x1001, TSTATES_DumpTextureStages
 *          Parent: 00000000, End: 000001EC, Next: 00000000
 *          Debug start: 00000004, Debug end: 000000FC
 *          Flags: Frame Ptr Present
 * 
 * (0001DC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0001EC) S_END
 * 
 * (0001F0) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * (00020C) S_GDATA32: [0003:00C970C4], Type:      T_ULONG(0022), RS_AlphaTestChge
 * (00022C) S_GDATA32: [0003:00C971B4], Type:      T_ULONG(0022), RS_ZwriteEnableChge
 * (000250) S_GDATA32: [0003:00C971A8], Type:      T_ULONG(0022), RS_AlphaBlendChge
 * (000270) S_GDATA32: [0003:00C971B0], Type:      T_ULONG(0022), RS_SrcBlendChge
 * (000290) S_GDATA32: [0003:00C971B8], Type:      T_ULONG(0022), RS_DestBlendChge
 * (0002B0) S_GDATA32: [0003:01245120], Type:             0x18FB, diKeyPressed
 * (0002CC) S_GDATA32: [0003:0006D318], Type:             0x1664, RS
 * (0002E0) S_GDATA32: [0003:00C97120], Type:             0x169F, RC
 * (0002F4) S_GDATA32: [0003:0091ED3C], Type:       T_INT4(0074), RS_AlphaTestEnable
 * (000318) S_GDATA32: [0003:0091ED38], Type:       T_INT4(0074), RS_BilinearEnable
 * (000338) S_GDATA32: [0003:0091ED40], Type:       T_INT4(0074), RS_AlphaBlendEnable
 * (00035C) S_GDATA32: [0003:0091ED44], Type:       T_INT4(0074), RS_ZWriteEnable
 * (00037C) S_GDATA32: [0003:0006D560], Type:       T_INT4(0074), RS_SrcBlend
 * (000398) S_GDATA32: [0003:0006D564], Type:       T_INT4(0074), RS_DestBlend
 * (0003B4) S_GDATA32: [0003:0091ED48], Type:             0x1F74, RS_lpCurTex
 * (0003D0) S_GDATA32: [0003:0006D3A0], Type:             0x1F75, TS
 * (0003E4) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (000400) S_GDATA32: [0003:00C970E0], Type:             0x103E, RS_TexChge
 * (00041C) S_GDATA32: [0003:00C971AC], Type:      T_ULONG(0022), RS_BilinearChge
 * (00043C) S_GDATA32: [0003:00C97118], Type:      T_ULONG(0022), RS_DPCalled
 * (000458) S_GDATA32: [0003:00C970CC], Type:      T_ULONG(0022), RS_DPVCount
 * (000474) S_GDATA32: [0003:00C97110], Type:      T_ULONG(0022), RS_DPICalled
 * (000490) S_GDATA32: [0003:00C970C8], Type:      T_ULONG(0022), RS_DPIVCount
 * (0004AC) S_GDATA32: [0003:00C971BC], Type:      T_ULONG(0022), RS_DPIICount
 * (0004C8) S_GDATA32: [0003:00C97100], Type:             0x1769, RS_TransformChge
 * (0004E8) S_GDATA32: [0003:0006D568], Type:             0x1F76, RS_PrimType
 * (000504) S_GDATA32: [0003:0006D584], Type:             0x1F77, RS_BlendType
 * (000520) S_GDATA32: [0003:0006D5BC], Type:             0x1F78, RS_ZCmp
 * (000538) S_GDATA32: [0003:0006D5E0], Type:             0x1F79, RS_ZBufferType
 * (000558) S_GDATA32: [0003:0006D5EC], Type:             0x1F7A, RS_TextureOp
 * (000574) S_GDATA32: [0003:0006D650], Type:             0x1F7B, RS_TextureArg
 * (000590) S_GDATA32: [0003:0006D6D4], Type:             0x1F7C, RS_MagFilterType
 * (0005B0) S_GDATA32: [0003:0006D6EC], Type:             0x1F7D, RS_MinFilterType
 * (0005D0) S_GDATA32: [0003:0006D6FC], Type:             0x1F7D, RS_MipFilterType
 * (0005F0) S_GDATA32: [0003:0006D70C], Type:             0x1F31, RS_TextureAddress
 * 
 * ModName: .\Debug\console.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\console.obj
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
 * (00008C) S_GPROC32: [0001:00087920], Cb: 0000005B, Type:             0x17C9, CON_ConMode
 *          Parent: 00000000, End: 000000E8, Next: 000000EC
 *          Debug start: 00000003, Debug end: 00000059
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (0000D4)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (0000E8) S_END
 * 
 * (0000EC) S_GPROC32: [0001:0008797B], Cb: 00000035, Type:             0x17C9, CON_DebugShow
 *          Parent: 00000000, End: 0000014C, Next: 00000150
 *          Debug start: 00000003, Debug end: 00000033
 *          Flags: Frame Ptr Present
 * 
 * (000124)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000138)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (00014C) S_END
 * 
 * (000150) S_GPROC32: [0001:000879B0], Cb: 000001B3, Type:             0x1B5B, CMD_ProcessScript
 *          Parent: 00000000, End: 0000023C, Next: 00000240
 *          Debug start: 00000009, Debug end: 000001AF
 *          Flags: Frame Ptr Present
 * 
 * (00018C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), lpName
 * (0001A0)  S_BPREL32: [FFFFFBEC], Type:   T_32PUCHAR(0420), lpSrc
 * (0001B4)  S_BPREL32: [FFFFFBF0], Type:   T_32PUCHAR(0420), lpDest
 * (0001C8)  S_BPREL32: [FFFFFBF4], Type:      T_ULONG(0022), Ext
 * (0001D8)  S_BPREL32: [FFFFFBF8], Type:             0x1834, fh
 * (0001E8)  S_BPREL32: [FFFFFBFC], Type:             0x1E96, FName
 * (0001FC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (00020C)  S_BLOCK32: [0001:00087A9B], Cb: 000000C4, (none)
 *           Parent: 00000150, End: 00000238
 * 
 * (000224)   S_BPREL32: [FFFFFAEC], Type:             0x1A12, String
 * 
 * (000238)  S_END
 * 
 * (00023C) S_END
 * 
 * (000240) S_GPROC32: [0001:00087B63], Cb: 0000002B, Type:             0x17C9, CON_Exec
 *          Parent: 00000000, End: 00000298, Next: 0000029C
 *          Debug start: 00000003, Debug end: 00000029
 *          Flags: Frame Ptr Present
 * 
 * (000270)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000284)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000298) S_END
 * 
 * (00029C) S_GPROC32: [0001:00087B8E], Cb: 00000153, Type:             0x1001, CMD_Init
 *          Parent: 00000000, End: 000002DC, Next: 000002E0
 *          Debug start: 00000004, Debug end: 0000014F
 *          Flags: Frame Ptr Present
 * 
 * (0002CC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0002DC) S_END
 * 
 * (0002E0) S_GPROC32: [0001:00087CE1], Cb: 00000012, Type:             0x1001, CMD_Exit
 *          Parent: 00000000, End: 00000310, Next: 00000314
 *          Debug start: 00000003, Debug end: 00000010
 *          Flags: Frame Ptr Present
 * 
 * (000310) S_END
 * 
 * (000314) S_GPROC32: [0001:00087CF3], Cb: 000002EA, Type:             0x1F7E, CMD_Process
 *          Parent: 00000000, End: 00000444, Next: 00000448
 *          Debug start: 00000006, Debug end: 000002E6
 *          Flags: Frame Ptr Present
 * 
 * (000348)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), CommandString
 * (000364)  S_CONSTANT: Type:             0x1EC3, Value: 1, MODE_NORMAL
 * (00037C)  S_BPREL32: [FFFFFFDC], Type:      T_ULONG(0022), start
 * (000390)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), len
 * (0003A0)  S_CONSTANT: Type:             0x1EC3, Value: 0, MODE_SPACE
 * (0003B8)  S_CONSTANT: Type:             0x1EC3, Value: 2, MODE_QUOTED
 * (0003D0)  S_BPREL32: [FFFFFFE4], Type:       T_INT4(0074), state
 * (0003E4)  S_BPREL32: [FFFFFFE8], Type:             0x17C7, v
 * (0003F4)  S_BPREL32: [FFFFFFEC], Type:       T_LONG(0012), Res
 * (000404)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), end
 * (000414)  S_BPREL32: [FFFFFFF4], Type:   T_32PUCHAR(0420), d
 * (000424)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), a
 * (000434)  S_BPREL32: [FFFFFFFC], Type:   T_32PUCHAR(0420), p
 * 
 * (000444) S_END
 * 
 * (000448) S_GPROC32: [0001:00087FDD], Cb: 000002AF, Type:             0x1F7F, CMD_Complete
 *          Parent: 00000000, End: 00000578, Next: 0000057C
 *          Debug start: 00000006, Debug end: 000002AB
 *          Flags: Frame Ptr Present
 * 
 * (00047C)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), CommandString
 * (000498)  S_CONSTANT: Type:             0x1EC3, Value: 1, MODE_NORMAL
 * (0004B0)  S_BPREL32: [FFFFFFDC], Type:      T_ULONG(0022), start
 * (0004C4)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), len
 * (0004D4)  S_CONSTANT: Type:             0x1EC3, Value: 0, MODE_SPACE
 * (0004EC)  S_CONSTANT: Type:             0x1EC3, Value: 2, MODE_QUOTED
 * (000504)  S_BPREL32: [FFFFFFE4], Type:       T_INT4(0074), state
 * (000518)  S_BPREL32: [FFFFFFE8], Type:             0x17C7, v
 * (000528)  S_BPREL32: [FFFFFFEC], Type:       T_LONG(0012), Res
 * (000538)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), end
 * (000548)  S_BPREL32: [FFFFFFF4], Type:   T_32PUCHAR(0420), d
 * (000558)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), a
 * (000568)  S_BPREL32: [FFFFFFFC], Type:   T_32PUCHAR(0420), p
 * 
 * (000578) S_END
 * 
 * (00057C) S_GPROC32: [0001:0008828C], Cb: 00000017, Type:             0x1F81, CMD_Add
 *          Parent: 00000000, End: 000005E0, Next: 000005E4
 *          Debug start: 00000003, Debug end: 00000015
 *          Flags: Frame Ptr Present
 * 
 * (0005AC)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), lpCommand
 * (0005C4)  S_BPREL32: [0000000C], Type:             0x17CA, CommandFunction
 * 
 * (0005E0) S_END
 * 
 * (0005E4) S_LPROC32: [0001:000882A3], Cb: 000002B7, Type:             0x1F83, cmd_add
 *          Parent: 00000000, End: 0000068C, Next: 00000690
 *          Debug start: 00000006, Debug end: 000002B3
 *          Flags: Frame Ptr Present
 * 
 * (000614)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), lpCommand
 * (00062C)  S_BPREL32: [0000000C], Type:             0x17CA, CommandFunction
 * (000648)  S_BPREL32: [00000010], Type:       T_INT4(0074), CCType
 * (00065C)  S_BPREL32: [FFFFFFF4], Type:       T_LONG(0012), Res
 * (00066C)  S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), b
 * (00067C)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (00068C) S_END
 * 
 * (000690) S_GPROC32: [0001:0008855A], Cb: 00000019, Type:             0x1F83, CMD_AddEx
 *          Parent: 00000000, End: 0000070C, Next: 00000710
 *          Debug start: 00000003, Debug end: 00000017
 *          Flags: Frame Ptr Present
 * 
 * (0006C4)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), lpCommand
 * (0006DC)  S_BPREL32: [0000000C], Type:             0x17CA, CommandFunction
 * (0006F8)  S_BPREL32: [00000010], Type:       T_INT4(0074), CCType
 * 
 * (00070C) S_END
 * 
 * (000710) S_GPROC32: [0001:00088573], Cb: 000000F0, Type:             0x1D1B, CMD_Remove
 *          Parent: 00000000, End: 0000077C, Next: 00000780
 *          Debug start: 00000006, Debug end: 000000EC
 *          Flags: Frame Ptr Present
 * 
 * (000744)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), lpCommand
 * (00075C)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), Res
 * (00076C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (00077C) S_END
 * 
 * (000780) S_GPROC32: [0001:00088663], Cb: 0000002E, Type:             0x17C9, CON_Version
 *          Parent: 00000000, End: 000007DC, Next: 000007E0
 *          Debug start: 00000003, Debug end: 0000002C
 *          Flags: Frame Ptr Present
 * 
 * (0007B4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (0007C8)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (0007DC) S_END
 * 
 * (0007E0) S_GPROC32: [0001:00088691], Cb: 0000000E, Type:             0x17C9, CON_Exit
 *          Parent: 00000000, End: 00000838, Next: 0000083C
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (000810)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000824)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000838) S_END
 * 
 * (00083C) S_GPROC32: [0001:0008869F], Cb: 00000147, Type:             0x17C9, CON_Commands
 *          Parent: 00000000, End: 00000910, Next: 00000914
 *          Debug start: 00000009, Debug end: 00000143
 *          Flags: Frame Ptr Present
 * 
 * (000870)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000884)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * (000898)  S_BPREL32: [FFFFFF48], Type:       T_LONG(0012), cLength
 * (0008AC)  S_BPREL32: [FFFFFF4C], Type:      T_ULONG(0022), BufferLength
 * (0008C8)  S_BPREL32: [FFFFFF50], Type:             0x1F84, cBuffer
 * (0008DC)  S_BPREL32: [FFFFFFA4], Type:      T_ULONG(0022), b
 * (0008EC)  S_BPREL32: [FFFFFFA8], Type:      T_ULONG(0022), a
 * (0008FC)  S_BPREL32: [FFFFFFAC], Type:             0x1F84, Buffer
 * 
 * (000910) S_END
 * 
 * (000914) S_GPROC32: [0001:000887E6], Cb: 00000019, Type:             0x17C9, CON_Quit
 *          Parent: 00000000, End: 0000096C, Next: 00000970
 *          Debug start: 00000003, Debug end: 00000017
 *          Flags: Frame Ptr Present
 * 
 * (000944)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000958)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (00096C) S_END
 * 
 * (000970) S_GPROC32: [0001:000887FF], Cb: 00000065, Type:             0x17C9, CON_Echo
 *          Parent: 00000000, End: 00000A08, Next: 00000A0C
 *          Debug start: 00000006, Debug end: 00000061
 *          Flags: Frame Ptr Present
 * 
 * (0009A0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (0009B4)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (0009C8)  S_BLOCK32: [0001:0008880B], Cb: 00000053, (none)
 *           Parent: 00000970, End: 00000A04
 * 
 * (0009E0)   S_BPREL32: [FFFFFFA8], Type:             0x1F84, Buffer
 * (0009F4)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000A04)  S_END
 * 
 * (000A08) S_END
 * 
 * (000A0C) S_GPROC32: [0001:00088864], Cb: 00000109, Type:             0x17C9, CON_ObjPos
 *          Parent: 00000000, End: 00000AA8, Next: 00000AAC
 *          Debug start: 00000006, Debug end: 00000105
 *          Flags: Frame Ptr Present
 * 
 * (000A40)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000A54)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000A68)  S_BLOCK32: [0001:00088874], Cb: 000000E4, (none)
 *           Parent: 00000A0C, End: 00000AA4
 * 
 * (000A80)   S_BPREL32: [FFFFFFA8], Type:      T_ULONG(0022), Obj
 * (000A90)   S_BPREL32: [FFFFFFAC], Type:             0x1F84, Buffer
 * 
 * (000AA4)  S_END
 * 
 * (000AA8) S_END
 * 
 * (000AAC) S_GPROC32: [0001:0008896D], Cb: 00000038, Type:             0x17C9, CON_Cls
 *          Parent: 00000000, End: 00000B14, Next: 00000B18
 *          Debug start: 00000004, Debug end: 00000034
 *          Flags: Frame Ptr Present
 * 
 * (000ADC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000AF0)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * (000B04)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000B14) S_END
 * 
 * (000B18) S_GPROC32: [0001:000889A5], Cb: 00000077, Type:             0x17C9, CON_DisplayLines
 *          Parent: 00000000, End: 00000BA4, Next: 00000BA8
 *          Debug start: 00000004, Debug end: 00000073
 *          Flags: Frame Ptr Present
 * 
 * (000B50)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000B64)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000B78)  S_BLOCK32: [0001:000889AF], Cb: 00000058, (none)
 *           Parent: 00000B18, End: 00000BA0
 * 
 * (000B90)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Num
 * 
 * (000BA0)  S_END
 * 
 * (000BA4) S_END
 * 
 * (000BA8) S_GPROC32: [0001:00088A1C], Cb: 00000014, Type:             0x17C9, CON_Reserved
 *          Parent: 00000000, End: 00000C04, Next: 00000C08
 *          Debug start: 00000003, Debug end: 00000012
 *          Flags: Frame Ptr Present
 * 
 * (000BDC)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000BF0)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000C04) S_END
 * 
 * (000C08) S_GPROC32: [0001:00088A30], Cb: 00000085, Type:             0x17C9, CON_Capture
 *          Parent: 00000000, End: 00000C64, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000083
 *          Flags: Frame Ptr Present
 * 
 * (000C3C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ACount
 * (000C50)  S_BPREL32: [0000000C], Type:             0x17C7, AList
 * 
 * (000C64) S_END
 * 
 * (000C68) S_GDATA32: [0003:00C30FB8], Type:             0x102A, hWndMain
 * (000C80) S_GDATA32: [0003:00C971C0], Type:      T_ULONG(0022), NumCommands
 * (000C9C) S_LDATA32: [0003:0091E8E0], Type:             0x1F85, ArgList
 * (000CB4) S_LDATA32: [0003:0091E8DC], Type:      T_ULONG(0022), ArgCount
 * (000CCC) S_LDATA32: [0003:0091ECE0], Type:             0x1F84, iCommandBuffer
 * (000CEC) S_GDATA32: [0003:0007B901], Type:      T_UCHAR(0020), CTP_Debug
 * (000D04) S_GDATA32: [0003:0007B902], Type:      T_UCHAR(0020), CTP_Console
 * (000D20) S_GDATA32: [0003:01256E40], Type:             0x1F86, EditMessages
 * (000D3C) S_GDATA32: [0003:0007B90C], Type:      T_UCHAR(0020), EditLine
 * (000D54) S_GDATA32: [0003:00068F18], Type:      T_UCHAR(0020), EditLinesMax
 * (000D70) S_GDATA32: [0003:0007B90F], Type:      T_UCHAR(0020), EditCapture
 * (000D8C) S_GDATA32: [0003:00931A00], Type:       T_INT4(0074), __argc
 * (000DA4) S_GDATA32: [0003:00931A04], Type:             0x171D, __argv
 * (000DBC) S_GDATA32: [0003:009CF6C0], Type:             0x1F87, ObjList
 * (000DD4) S_GDATA32: [0003:00C971E0], Type:             0x1F8A, Commands
 * (000DEC) S_GDATA32: [0003:0091ED34], Type:       T_LONG(0012), ConsoleMode
 * 
 */

