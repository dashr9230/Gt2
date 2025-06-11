
// File: C:\CodePrj\Gt2\Engine\src\Sound.c

/*
 * ModName: .\Debug\Sound.obj
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\Sound.obj
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
 * (00008C) S_GPROC32: [0001:0008C630], Cb: 00000194, Type:             0x16A5, MSS_Create
 *          Parent: 00000000, End: 000000C0, Next: 000000C4
 *          Debug start: 00000003, Debug end: 00000192
 *          Flags: Frame Ptr Present
 * 
 * (0000C0) S_END
 * 
 * (0000C4) S_LPROC32: [0001:0008C7C4], Cb: 00000053, Type:             0x1F16, SetupWaveFormat
 *          Parent: 00000000, End: 00000158, Next: 0000015C
 *          Debug start: 00000003, Debug end: 00000051
 *          Flags: Frame Ptr Present
 * 
 * (0000FC)  S_BPREL32: [00000008], Type:             0x1F14, Wav
 * (00010C)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), SampleRate
 * (000124)  S_BPREL32: [00000010], Type:      T_ULONG(0022), SampleQuality
 * (000140)  S_BPREL32: [00000014], Type:      T_ULONG(0022), NumChannels
 * 
 * (000158) S_END
 * 
 * (00015C) S_LPROC32: [0001:0008C817], Cb: 0000008B, Type:             0x1001, Create2DChannels
 *          Parent: 00000000, End: 000001A4, Next: 000001A8
 *          Debug start: 00000004, Debug end: 00000087
 *          Flags: Frame Ptr Present
 * 
 * (000194)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0001A4) S_END
 * 
 * (0001A8) S_LPROC32: [0001:0008C8A2], Cb: 00000050, Type:             0x1001, CreateSampleBuffers
 *          Parent: 00000000, End: 000001F4, Next: 000001F8
 *          Debug start: 00000004, Debug end: 0000004C
 *          Flags: Frame Ptr Present
 * 
 * (0001E4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0001F4) S_END
 * 
 * (0001F8) S_GPROC32: [0001:0008C8F2], Cb: 0000009B, Type:             0x16A5, MSS_Destroy
 *          Parent: 00000000, End: 0000022C, Next: 00000230
 *          Debug start: 00000003, Debug end: 00000099
 *          Flags: Frame Ptr Present
 * 
 * (00022C) S_END
 * 
 * (000230) S_LPROC32: [0001:0008C98D], Cb: 00000062, Type:             0x1001, Destroy2DChannels
 *          Parent: 00000000, End: 0000027C, Next: 00000280
 *          Debug start: 00000004, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (00026C)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (00027C) S_END
 * 
 * (000280) S_LPROC32: [0001:0008C9EF], Cb: 00000072, Type:             0x1001, DestroySampleBuffers
 *          Parent: 00000000, End: 000002CC, Next: 000002D0
 *          Debug start: 00000004, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (0002BC)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (0002CC) S_END
 * 
 * (0002D0) S_GPROC32: [0001:0008CA61], Cb: 0000002A, Type:             0x1B52, MSS_MonitorPerformance
 *          Parent: 00000000, End: 00000320, Next: 00000324
 *          Debug start: 00000004, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (000310)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Ret
 * 
 * (000320) S_END
 * 
 * (000324) S_GPROC32: [0001:0008CA8B], Cb: 0000001F, Type:             0x141A, MSS_SetMasterVolume
 *          Parent: 00000000, End: 00000374, Next: 00000378
 *          Debug start: 00000003, Debug end: 0000001D
 *          Flags: Frame Ptr Present
 * 
 * (000360)  S_BPREL32: [00000008], Type:       T_LONG(0012), Volume
 * 
 * (000374) S_END
 * 
 * (000378) S_GPROC32: [0001:0008CAAA], Cb: 0000001E, Type:             0x1B52, MSS_GetMasterVolume
 *          Parent: 00000000, End: 000003B4, Next: 000003B8
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (0003B4) S_END
 * 
 * (0003B8) S_GPROC32: [0001:0008CAC8], Cb: 00000031, Type:             0x16A1, MSS_Free
 *          Parent: 00000000, End: 000003FC, Next: 00000400
 *          Debug start: 00000003, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (0003E8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Index
 * 
 * (0003FC) S_END
 * 
 * (000400) S_GPROC32: [0001:0008CAF9], Cb: 000000A6, Type:             0x1F18, MSS_Load
 *          Parent: 00000000, End: 000004D4, Next: 000004D8
 *          Debug start: 00000004, Debug end: 000000A2
 *          Flags: Frame Ptr Present
 * 
 * (000430)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (000444)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), FileName
 * (00045C)  S_BPREL32: [00000010], Type:       T_INT4(0074), Index
 * (000470)  S_BPREL32: [00000014], Type:       T_INT4(0074), VolIndex
 * (000488)  S_BPREL32: [00000018], Type:       T_INT4(0074), SFXControl
 * 
 * (0004A0)  S_BLOCK32: [0001:0008CB0A], Cb: 0000008F, (none)
 *           Parent: 00000400, End: 000004D0
 * 
 * (0004B8)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), FileIndex
 * 
 * (0004D0)  S_END
 * 
 * (0004D4) S_END
 * 
 * (0004D8) S_GPROC32: [0001:0008CB9F], Cb: 000000B6, Type:             0x1F1B, MSS_LoadList
 *          Parent: 00000000, End: 00000550, Next: 00000554
 *          Debug start: 00000004, Debug end: 000000B2
 *          Flags: Frame Ptr Present
 * 
 * (00050C)  S_BPREL32: [00000008], Type:             0x1F19, SampleList
 * 
 * (000524)  S_BLOCK32: [0001:0008CBB0], Cb: 0000009F, (none)
 *           Parent: 000004D8, End: 0000054C
 * 
 * (00053C)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (00054C)  S_END
 * 
 * (000550) S_END
 * 
 * (000554) S_GPROC32: [0001:0008CC55], Cb: 000000DB, Type:             0x1001, MSS_ProcessSamples
 *          Parent: 00000000, End: 00000608, Next: 0000060C
 *          Debug start: 00000006, Debug end: 000000D7
 *          Flags: Frame Ptr Present
 * 
 * (000590)  S_BLOCK32: [0001:0008CC68], Cb: 000000C4, (none)
 *           Parent: 00000554, End: 00000604
 * 
 * (0005A8)   S_BPREL32: [FFFFFFD0], Type:       T_LONG(0012), SampleType
 * (0005C0)   S_BPREL32: [FFFFFFD4], Type:   T_32PULONG(0422), lpTempSample
 * (0005DC)   S_BPREL32: [FFFFFFD8], Type:             0x189F, SampleInfo
 * (0005F4)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000604)  S_END
 * 
 * (000608) S_END
 * 
 * (00060C) S_GPROC32: [0001:0008CD30], Cb: 000000BD, Type:             0x1F1C, MSS_FindChannel
 *          Parent: 00000000, End: 000006D0, Next: 000006D4
 *          Debug start: 00000006, Debug end: 000000B9
 *          Flags: Frame Ptr Present
 * 
 * (000644)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Priority
 * 
 * (00065C)  S_BLOCK32: [0001:0008CD43], Cb: 000000A3, (none)
 *           Parent: 0000060C, End: 000006CC
 * 
 * (000674)   S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), LPriority
 * (00068C)   S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), LChannel
 * (0006A4)   S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), a
 * (0006B4)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ChanStatus
 * 
 * (0006CC)  S_END
 * 
 * (0006D0) S_END
 * 
 * (0006D4) S_GPROC32: [0001:0008CDED], Cb: 00000021, Type:             0x16A1, MSS_Stop
 *          Parent: 00000000, End: 00000718, Next: 0000071C
 *          Debug start: 00000003, Debug end: 0000001F
 *          Flags: Frame Ptr Present
 * 
 * (000704)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Channel
 * 
 * (000718) S_END
 * 
 * (00071C) S_GPROC32: [0001:0008CE0E], Cb: 000000AE, Type:             0x1F1D, MSS_Play
 *          Parent: 00000000, End: 00000790, Next: 00000794
 *          Debug start: 00000004, Debug end: 000000AA
 *          Flags: Frame Ptr Present
 * 
 * (00074C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Index
 * 
 * (000760)  S_BLOCK32: [0001:0008CE1F], Cb: 00000096, (none)
 *           Parent: 0000071C, End: 0000078C
 * 
 * (000778)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Channel
 * 
 * (00078C)  S_END
 * 
 * (000790) S_END
 * 
 * (000794) S_GPROC32: [0001:0008CEBC], Cb: 00000008, Type:             0x1F1F, MSS_PlayEx
 *          Parent: 00000000, End: 0000082C, Next: 00000830
 *          Debug start: 00000003, Debug end: 00000006
 *          Flags: Frame Ptr Present
 * 
 * (0007C8)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Index
 * (0007DC)  S_BPREL32: [0000000C], Type:       T_LONG(0012), SampleRate
 * (0007F4)  S_BPREL32: [00000010], Type:       T_LONG(0012), Pan
 * (000804)  S_BPREL32: [00000014], Type:       T_LONG(0012), Volume
 * (000818)  S_BPREL32: [00000018], Type:       T_LONG(0012), Loop
 * 
 * (00082C) S_END
 * 
 * (000830) S_GPROC32: [0001:0008CEC4], Cb: 00000034, Type:             0x1A1D, MSS_SetPan
 *          Parent: 00000000, End: 00000888, Next: 0000088C
 *          Debug start: 00000003, Debug end: 00000032
 *          Flags: Frame Ptr Present
 * 
 * (000864)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Channel
 * (000878)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Pan
 * 
 * (000888) S_END
 * 
 * (00088C) S_GPROC32: [0001:0008CEF8], Cb: 00000021, Type:             0x1F1C, MSS_GetPan
 *          Parent: 00000000, End: 000008D4, Next: 000008D8
 *          Debug start: 00000003, Debug end: 0000001F
 *          Flags: Frame Ptr Present
 * 
 * (0008C0)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Channel
 * 
 * (0008D4) S_END
 * 
 * (0008D8) S_GPROC32: [0001:0008CF19], Cb: 00000034, Type:             0x1A1D, MSS_SetSampleFrequency
 *          Parent: 00000000, End: 00000940, Next: 00000944
 *          Debug start: 00000003, Debug end: 00000032
 *          Flags: Frame Ptr Present
 * 
 * (000918)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Channel
 * (00092C)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Freq
 * 
 * (000940) S_END
 * 
 * (000944) S_GPROC32: [0001:0008CF4D], Cb: 0000001E, Type:             0x1F1C, MSS_GetSampleFrequency
 *          Parent: 00000000, End: 00000998, Next: 0000099C
 *          Debug start: 00000003, Debug end: 0000001C
 *          Flags: Frame Ptr Present
 * 
 * (000984)  S_BPREL32: [00000008], Type:      T_ULONG(0022), Channel
 * 
 * (000998) S_END
 * 
 * (00099C) S_GPROC32: [0001:0008CF6B], Cb: 00000198, Type:             0x1001, MSS_Get3DAudioProviders
 *          Parent: 00000000, End: 00000A44, Next: 00000A48
 *          Debug start: 00000006, Debug end: 00000194
 *          Flags: Frame Ptr Present
 * 
 * (0009DC)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), n
 * (0009EC)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), next
 * (000A00)  S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), name
 * 
 * (000A14)  S_BLOCK32: [0001:0008CFD9], Cb: 000000EE, (none)
 *           Parent: 0000099C, End: 00000A40
 * 
 * (000A2C)   S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), result
 * 
 * (000A40)  S_END
 * 
 * (000A44) S_END
 * 
 * (000A48) S_GPROC32: [0001:0008D103], Cb: 0000013B, Type:             0x1B5B, MSS_ShowChannels3D
 *          Parent: 00000000, End: 00000B34, Next: 00000B38
 *          Debug start: 00000006, Debug end: 00000117
 *          Flags: Frame Ptr Present
 * 
 * (000A84)  S_LDATA32: [0001:0008D21E], Type:     T_NOTYPE(0000), (none)
 * (000A94)  S_LABEL32: [0001:0008D199], $L82719
 * (000AA8)  S_LABEL32: [0001:0008D1B0], $L82721
 * (000ABC)  S_LABEL32: [0001:0008D1C7], $L82723
 * (000AD0)  S_LABEL32: [0001:0008D1DE], $L82725
 * (000AE4)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Buffer
 * 
 * (000AF8)  S_BLOCK32: [0001:0008D116], Cb: 00000104, (none)
 *           Parent: 00000A48, End: 00000B30
 * 
 * (000B10)   S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), L
 * (000B20)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000B30)  S_END
 * 
 * (000B34) S_END
 * 
 * (000B38) S_GPROC32: [0001:0008D23E], Cb: 00000042, Type:             0x1001, MSS_Close3DAudio
 *          Parent: 00000000, End: 00000B70, Next: 00000B74
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000B70) S_END
 * 
 * (000B74) S_LPROC32: [0001:0008D280], Cb: 00000062, Type:             0x1001, Destroy3DChannels
 *          Parent: 00000000, End: 00000BC0, Next: 00000BC4
 *          Debug start: 00000004, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (000BB0)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000BC0) S_END
 * 
 * (000BC4) S_LPROC32: [0001:0008D2E2], Cb: 0000002D, Type:             0x1001, Destroy3DListener
 *          Parent: 00000000, End: 00000C00, Next: 00000C04
 *          Debug start: 00000003, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (000C00) S_END
 * 
 * (000C04) S_GPROC32: [0001:0008D30F], Cb: 0000010F, Type:             0x1F20, MSS_Open3DAudio
 *          Parent: 00000000, End: 00000CB4, Next: 00000CB8
 *          Debug start: 00000006, Debug end: 0000010B
 *          Flags: Frame Ptr Present
 * 
 * (000C3C)  S_BPREL32: [00000008], Type:       T_LONG(0012), ProviderIndex
 * (000C58)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), ProviderName
 * 
 * (000C74)  S_BLOCK32: [0001:0008D322], Cb: 000000F6, (none)
 *           Parent: 00000C04, End: 00000CB0
 * 
 * (000C8C)   S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), a
 * (000C9C)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), result
 * 
 * (000CB0)  S_END
 * 
 * (000CB4) S_END
 * 
 * (000CB8) S_LPROC32: [0001:0008D41E], Cb: 00000080, Type:             0x1001, Create3DChannels
 *          Parent: 00000000, End: 00000D00, Next: 00000D04
 *          Debug start: 00000004, Debug end: 0000007C
 *          Flags: Frame Ptr Present
 * 
 * (000CF0)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (000D00) S_END
 * 
 * (000D04) S_LPROC32: [0001:0008D49E], Cb: 00000028, Type:             0x1001, Create3DListener
 *          Parent: 00000000, End: 00000D3C, Next: 00000D40
 *          Debug start: 00000003, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (000D3C) S_END
 * 
 * (000D40) S_LPROC32: [0001:0008D4C6], Cb: 00000071, Type:             0x17C9, SetEAXVolume
 *          Parent: 00000000, End: 00000D9C, Next: 00000DA0
 *          Debug start: 00000003, Debug end: 0000006F
 *          Flags: Frame Ptr Present
 * 
 * (000D74)  S_BPREL32: [00000008], Type:      T_ULONG(0022), ArgC
 * (000D88)  S_BPREL32: [0000000C], Type:             0x17C7, ArgList
 * 
 * (000D9C) S_END
 * 
 * (000DA0) S_GPROC32: [0001:0008D537], Cb: 0000002E, Type:             0x1831, MSS_ChannelStatus3D
 *          Parent: 00000000, End: 00000DF0, Next: 00000DF4
 *          Debug start: 00000003, Debug end: 0000002C
 *          Flags: Frame Ptr Present
 * 
 * (000DDC)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * 
 * (000DF0) S_END
 * 
 * (000DF4) S_GPROC32: [0001:0008D565], Cb: 00000118, Type:             0x1F1D, MSS_PlaySample3D
 *          Parent: 00000000, End: 00000E74, Next: 00000E78
 *          Debug start: 00000004, Debug end: 00000114
 *          Flags: Frame Ptr Present
 * 
 * (000E2C)  S_BPREL32: [00000008], Type:       T_LONG(0012), SampleIndex
 * 
 * (000E44)  S_BLOCK32: [0001:0008D57A], Cb: 000000FF, (none)
 *           Parent: 00000DF4, End: 00000E70
 * 
 * (000E5C)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Channel
 * 
 * (000E70)  S_END
 * 
 * (000E74) S_END
 * 
 * (000E78) S_LPROC32: [0001:0008D67D], Cb: 000000EC, Type:             0x1F1D, FindChannel3D
 *          Parent: 00000000, End: 00000F50, Next: 00000F54
 *          Debug start: 00000006, Debug end: 000000E8
 *          Flags: Frame Ptr Present
 * 
 * (000EB0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Priority
 * 
 * (000EC8)  S_BLOCK32: [0001:0008D690], Cb: 000000D2, (none)
 *           Parent: 00000E78, End: 00000F4C
 * 
 * (000EE0)   S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), Active
 * (000EF4)   S_BPREL32: [FFFFFFF0], Type:       T_LONG(0012), LPriority
 * (000F0C)   S_BPREL32: [FFFFFFF4], Type:       T_LONG(0012), LChannel
 * (000F24)   S_BPREL32: [FFFFFFF8], Type:       T_LONG(0012), a
 * (000F34)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ChanStatus
 * 
 * (000F4C)  S_END
 * 
 * (000F50) S_END
 * 
 * (000F54) S_GPROC32: [0001:0008D769], Cb: 00000032, Type:             0x141A, MSS_StopChannel3D
 *          Parent: 00000000, End: 00000FAC, Next: 00000FB0
 *          Debug start: 00000003, Debug end: 00000030
 *          Flags: Frame Ptr Present
 * 
 * (000F90)  S_BPREL32: [00000008], Type:       T_LONG(0012), ChannelIndex
 * 
 * (000FAC) S_END
 * 
 * (000FB0) S_GPROC32: [0001:0008D79B], Cb: 0000003E, Type:             0x1001, MSS_StopAllChannels3D
 *          Parent: 00000000, End: 00001000, Next: 00001004
 *          Debug start: 00000004, Debug end: 0000003A
 *          Flags: Frame Ptr Present
 * 
 * (000FF0)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (001000) S_END
 * 
 * (001004) S_GPROC32: [0001:0008D7D9], Cb: 00000043, Type:             0x1B3A, MSS_SetChannelVolume3D
 *          Parent: 00000000, End: 0000106C, Next: 00001070
 *          Debug start: 00000003, Debug end: 00000041
 *          Flags: Frame Ptr Present
 * 
 * (001044)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (001058)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Volume
 * 
 * (00106C) S_END
 * 
 * (001070) S_GPROC32: [0001:0008D81C], Cb: 00000033, Type:             0x1F1D, MSS_GetChannelVolume3D
 *          Parent: 00000000, End: 000010C4, Next: 000010C8
 *          Debug start: 00000003, Debug end: 00000031
 *          Flags: Frame Ptr Present
 * 
 * (0010B0)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * 
 * (0010C4) S_END
 * 
 * (0010C8) S_GPROC32: [0001:0008D84F], Cb: 0000004B, Type:             0x1F22, MSS_SetChannelLoopStatus3D
 *          Parent: 00000000, End: 00001134, Next: 00001138
 *          Debug start: 00000003, Debug end: 00000049
 *          Flags: Frame Ptr Present
 * 
 * (00110C)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (001120)  S_BPREL32: [0000000C], Type:       T_INT4(0074), Loop
 * 
 * (001134) S_END
 * 
 * (001138) S_GPROC32: [0001:0008D89A], Cb: 00000045, Type:             0x1B3A, MSS_SetChannelPlaybackFrequency3D
 *          Parent: 00000000, End: 000011B0, Next: 000011B4
 *          Debug start: 00000003, Debug end: 00000043
 *          Flags: Frame Ptr Present
 * 
 * (001184)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (001198)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Frequency
 * 
 * (0011B0) S_END
 * 
 * (0011B4) S_GPROC32: [0001:0008D8DF], Cb: 00000033, Type:             0x1F1D, MSS_GetChannelPlaybackFrequency3D
 *          Parent: 00000000, End: 00001214, Next: 00001218
 *          Debug start: 00000003, Debug end: 00000031
 *          Flags: Frame Ptr Present
 * 
 * (001200)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * 
 * (001214) S_END
 * 
 * (001218) S_GPROC32: [0001:0008D912], Cb: 0000003E, Type:             0x1F24, MSS_SetChannelPos3D
 *          Parent: 00000000, End: 000012A4, Next: 000012A8
 *          Debug start: 00000003, Debug end: 0000003C
 *          Flags: Frame Ptr Present
 * 
 * (001254)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (001268)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), XPos
 * (00127C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), YPos
 * (001290)  S_BPREL32: [00000014], Type:     T_REAL32(0040), ZPos
 * 
 * (0012A4) S_END
 * 
 * (0012A8) S_GPROC32: [0001:0008D950], Cb: 00000047, Type:             0x1F24, MSS_SetChannelOri3D
 *          Parent: 00000000, End: 00001334, Next: 00001338
 *          Debug start: 00000003, Debug end: 00000045
 *          Flags: Frame Ptr Present
 * 
 * (0012E4)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (0012F8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), Xface
 * (00130C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), Yface
 * (001320)  S_BPREL32: [00000014], Type:     T_REAL32(0040), Zface
 * 
 * (001334) S_END
 * 
 * (001338) S_GPROC32: [0001:0008D997], Cb: 0000003E, Type:             0x1F24, MSS_SetChannelVel3D
 *          Parent: 00000000, End: 000013C4, Next: 000013C8
 *          Debug start: 00000003, Debug end: 0000003C
 *          Flags: Frame Ptr Present
 * 
 * (001374)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (001388)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), XMov
 * (00139C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), YMov
 * (0013B0)  S_BPREL32: [00000014], Type:     T_REAL32(0040), ZMov
 * 
 * (0013C4) S_END
 * 
 * (0013C8) S_GPROC32: [0001:0008D9D5], Cb: 00000042, Type:             0x1F26, MSS_SetSampleDistances3D
 *          Parent: 00000000, End: 0000144C, Next: 00001450
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (001408)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (00141C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), MinFront
 * (001434)  S_BPREL32: [00000010], Type:     T_REAL32(0040), MaxFront
 * 
 * (00144C) S_END
 * 
 * (001450) S_GPROC32: [0001:0008DA17], Cb: 0000003E, Type:             0x1F28, MSS_GetSampleDistances3D
 *          Parent: 00000000, End: 000014D4, Next: 000014D8
 *          Debug start: 00000003, Debug end: 0000003C
 *          Flags: Frame Ptr Present
 * 
 * (001490)  S_BPREL32: [00000008], Type:       T_LONG(0012), Channel
 * (0014A4)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), MinFront
 * (0014BC)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), MaxFront
 * 
 * (0014D4) S_END
 * 
 * (0014D8) S_GPROC32: [0001:0008DA55], Cb: 0000003A, Type:             0x1F29, MSS_SetListenerOri3D
 *          Parent: 00000000, End: 00001550, Next: 00001554
 *          Debug start: 00000003, Debug end: 00000038
 *          Flags: Frame Ptr Present
 * 
 * (001514)  S_BPREL32: [00000008], Type:     T_REAL32(0040), XPos
 * (001528)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), YPos
 * (00153C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), ZPos
 * 
 * (001550) S_END
 * 
 * (001554) S_GPROC32: [0001:0008DA8F], Cb: 00000031, Type:             0x1F29, MSS_SetListenerVel3D
 *          Parent: 00000000, End: 000015CC, Next: 000015D0
 *          Debug start: 00000003, Debug end: 0000002F
 *          Flags: Frame Ptr Present
 * 
 * (001590)  S_BPREL32: [00000008], Type:     T_REAL32(0040), XPos
 * (0015A4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), YPos
 * (0015B8)  S_BPREL32: [00000010], Type:     T_REAL32(0040), ZPos
 * 
 * (0015CC) S_END
 * 
 * (0015D0) S_GPROC32: [0001:0008DAC0], Cb: 0000001A, Type:             0x1B52, MSS_ReportNumberActiveSamples3D
 *          Parent: 00000000, End: 00001618, Next: 0000161C
 *          Debug start: 00000003, Debug end: 00000018
 *          Flags: Frame Ptr Present
 * 
 * (001618) S_END
 * 
 * (00161C) S_GPROC32: [0001:0008DADA], Cb: 0000008E, Type:             0x141A, MSS_SetEAXRoomType
 *          Parent: 00000000, End: 00001718, Next: 0000171C
 *          Debug start: 00000004, Debug end: 0000008A
 *          Flags: Frame Ptr Present
 * 
 * (001658)  S_BPREL32: [00000008], Type:       T_LONG(0012), RoomType
 * 
 * (001670)  S_BLOCK32: [0001:0008DAF0], Cb: 00000074, (none)
 *           Parent: 0000161C, End: 00001714
 * 
 * (001688)   S_UDT:             0x1F2B, tagEAX_INFO
 * (00169C)   S_UDT:             0x1F2B, EAX_INFO
 * (0016B0)   S_LDATA32: [0003:00931758], Type:       T_LONG(0012), CurRoomType
 * (0016CC)   S_LDATA32: [0003:0006EA20], Type:             0x1F2C, EaxList
 * 
 * (0016E4)   S_BLOCK32: [0001:0008DB03], Cb: 00000061, (none)
 *            Parent: 00001670, End: 00001710
 * 
 * (0016FC)    S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), fVal
 * 
 * (001710)   S_END
 * 
 * (001714)  S_END
 * 
 * (001718) S_END
 * 
 * (00171C) S_GPROC32: [0001:0008DB68], Cb: 000000D4, Type:             0x1F2D, MSS_StartMusic
 *          Parent: 00000000, End: 000017C8, Next: 000017CC
 *          Debug start: 00000009, Debug end: 000000D0
 *          Flags: Frame Ptr Present
 * 
 * (001754)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), FileName
 * (00176C)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Volume
 * 
 * (001780)  S_BLOCK32: [0001:0008DB7E], Cb: 000000B8, (none)
 *           Parent: 0000171C, End: 000017C4
 * 
 * (001798)   S_BPREL32: [FFFFFBFC], Type:             0x1E96, MusicName
 * (0017B0)   S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), Drive
 * 
 * (0017C4)  S_END
 * 
 * (0017C8) S_END
 * 
 * (0017CC) S_GPROC32: [0001:0008DC3C], Cb: 00000007, Type:             0x1F2D, MSS_PreLoadStartMusic
 *          Parent: 00000000, End: 00001838, Next: 0000183C
 *          Debug start: 00000003, Debug end: 00000005
 *          Flags: Frame Ptr Present
 * 
 * (00180C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), FileName
 * (001824)  S_BPREL32: [0000000C], Type:       T_LONG(0012), Volume
 * 
 * (001838) S_END
 * 
 * (00183C) S_GPROC32: [0001:0008DC43], Cb: 00000037, Type:             0x1001, MSS_StopMusic
 *          Parent: 00000000, End: 00001874, Next: 00001878
 *          Debug start: 00000003, Debug end: 00000035
 *          Flags: Frame Ptr Present
 * 
 * (001874) S_END
 * 
 * (001878) S_GPROC32: [0001:0008DC7A], Cb: 00000060, Type:             0x141A, MSS_SetMusicVolume
 *          Parent: 00000000, End: 000018CC, Next: 000018D0
 *          Debug start: 00000003, Debug end: 0000005E
 *          Flags: Frame Ptr Present
 * 
 * (0018B4)  S_BPREL32: [00000008], Type:       T_LONG(0012), NewVolume
 * 
 * (0018CC) S_END
 * 
 * (0018D0) S_GPROC32: [0001:0008DCDA], Cb: 0000000A, Type:             0x1B52, MSS_GetMusicVolume
 *          Parent: 00000000, End: 0000190C, Next: 00001910
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (00190C) S_END
 * 
 * (001910) S_GPROC32: [0001:0008DCE4], Cb: 00000024, Type:             0x1001, MSS_PushMusicVolume
 *          Parent: 00000000, End: 0000194C, Next: 00001950
 *          Debug start: 00000003, Debug end: 00000022
 *          Flags: Frame Ptr Present
 * 
 * (00194C) S_END
 * 
 * (001950) S_GPROC32: [0001:0008DD08], Cb: 00000029, Type:             0x1001, MSS_PopMusicVolume
 *          Parent: 00000000, End: 0000198C, Next: 00001990
 *          Debug start: 00000003, Debug end: 00000027
 *          Flags: Frame Ptr Present
 * 
 * (00198C) S_END
 * 
 * (001990) S_GPROC32: [0001:0008DD31], Cb: 00000028, Type:             0x141A, MSS_PauseMusic
 *          Parent: 00000000, End: 000019E0, Next: 000019E4
 *          Debug start: 00000003, Debug end: 00000026
 *          Flags: Frame Ptr Present
 * 
 * (0019C8)  S_BPREL32: [00000008], Type:       T_LONG(0012), PauseStatus
 * 
 * (0019E0) S_END
 * 
 * (0019E4) S_GPROC32: [0001:0008DD59], Cb: 0000001D, Type:             0x141A, MSS_PauseAllSound
 *          Parent: 00000000, End: 00001A38, Next: 00001A3C
 *          Debug start: 00000003, Debug end: 0000001B
 *          Flags: Frame Ptr Present
 * 
 * (001A20)  S_BPREL32: [00000008], Type:       T_LONG(0012), PauseStatus
 * 
 * (001A38) S_END
 * 
 * (001A3C) S_LPROC32: [0001:0008DD76], Cb: 0000009F, Type:             0x141A, MSS_Pause3DSound
 *          Parent: 00000000, End: 00001AB8, Next: 00001ABC
 *          Debug start: 00000004, Debug end: 0000009B
 *          Flags: Frame Ptr Present
 * 
 * (001A74)  S_BPREL32: [00000008], Type:       T_LONG(0012), PauseStatus
 * 
 * (001A8C)  S_BLOCK32: [0001:0008DD87], Cb: 0000008A, (none)
 *           Parent: 00001A3C, End: 00001AB4
 * 
 * (001AA4)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), a
 * 
 * (001AB4)  S_END
 * 
 * (001AB8) S_END
 * 
 * (001ABC) S_GPROC32: [0001:0008DE15], Cb: 00000051, Type:             0x1001, MSS_AcquireSound
 *          Parent: 00000000, End: 00001B20, Next: 00001B24
 *          Debug start: 00000004, Debug end: 0000004D
 *          Flags: Frame Ptr Present
 * 
 * (001AF4)  S_BLOCK32: [0001:0008DE2B], Cb: 00000037, (none)
 *           Parent: 00001ABC, End: 00001B1C
 * 
 * (001B0C)   S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Res
 * 
 * (001B1C)  S_END
 * 
 * (001B20) S_END
 * 
 * (001B24) S_GPROC32: [0001:0008DE66], Cb: 0000002D, Type:             0x1001, MSS_UnacquireSound
 *          Parent: 00000000, End: 00001B60, Next: 00001B64
 *          Debug start: 00000003, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (001B60) S_END
 * 
 * (001B64) S_GPROC32: [0001:0008DE93], Cb: 000000FE, Type:             0x1F2F, MSS_ConfigMenu
 *          Parent: 00000000, End: 00001BDC, Next: 00001BE0
 *          Debug start: 00000004, Debug end: 000000FA
 *          Flags: Frame Ptr Present
 * 
 * (001B9C)  S_BPREL32: [00000008], Type:             0x102A, thWnd
 * 
 * (001BB0)  S_BLOCK32: [0001:0008DEA4], Cb: 000000E9, (none)
 *           Parent: 00001B64, End: 00001BD8
 * 
 * (001BC8)   S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (001BD8)  S_END
 * 
 * (001BDC) S_END
 * 
 * (001BE0) S_GPROC32: [0001:0008DF91], Cb: 00000078, Type:             0x1F2F, MSS_ConfigMenuResult
 *          Parent: 00000000, End: 00001C48, Next: 00001C4C
 *          Debug start: 00000004, Debug end: 00000074
 *          Flags: Frame Ptr Present
 * 
 * (001C1C)  S_BPREL32: [00000008], Type:             0x102A, thWnd
 * (001C30)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Selection
 * 
 * (001C48) S_END
 * 
 * (001C4C) S_GPROC32: [0001:0008E009], Cb: 0000000A, Type:             0x1F30, MSS_GetSoundProvider
 *          Parent: 00000000, End: 00001C88, Next: 00001C8C
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (001C88) S_END
 * 
 * (001C8C) S_GPROC32: [0001:0008E013], Cb: 0000000A, Type:             0x1F30, MSS_GetSoundQuality
 *          Parent: 00000000, End: 00001CC8, Next: 00001CCC
 *          Debug start: 00000003, Debug end: 00000008
 *          Flags: Frame Ptr Present
 * 
 * (001CC8) S_END
 * 
 * (001CCC) S_GPROC32: [0001:0008E01D], Cb: 00000016, Type:             0x1B5B, MSS_SetSoundProvider
 *          Parent: 00000000, End: 00001D24, Next: 00001D28
 *          Debug start: 00000003, Debug end: 00000014
 *          Flags: Frame Ptr Present
 * 
 * (001D08)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), ProviderName
 * 
 * (001D24) S_END
 * 
 * (001D28) S_GPROC32: [0001:0008E033], Cb: 00000016, Type:             0x1B5B, MSS_SetSoundQuality
 *          Parent: 00000000, End: 00001D80, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000014
 *          Flags: Frame Ptr Present
 * 
 * (001D64)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), ProviderQuality
 * 
 * (001D80) S_END
 * 
 * (001D84) S_LDATA32: [0003:0006EA60], Type:             0x1F31, SoundQualitySettings
 * (001DA8) S_GDATA32: [0003:00931730], Type:       T_INT4(0074), MSS_Active
 * (001DC4) S_GDATA32: [0003:0006E9F8], Type:             0x183B, MSS_SfxVolumes
 * (001DE4) S_GDATA32: [0003:00931748], Type:       T_INT4(0074), MSS_SamplesLoaded
 * (001E04) S_GDATA32: [0003:0093174C], Type:       T_INT4(0074), MSS_EaxSupported
 * (001E24) S_GDATA32: [0003:00C30FB8], Type:             0x102A, hWndMain
 * (001E3C) S_GDATA32: [0003:0099D280], Type:             0x1A44, Filez
 * (001E50) S_LDATA32: [0003:0006EA08], Type:       T_LONG(0012), MSS_SelectedProvider
 * (001E74) S_LDATA32: [0003:00931734], Type:       T_LONG(0012), MSS_Active3DChannels
 * (001E98) S_LDATA32: [0003:00931738], Type:       T_LONG(0012), MSS_Active2DChannels
 * (001EBC) S_LDATA32: [0003:00931510], Type:             0x1F34, MSS_Channel2D
 * (001ED8) S_LDATA32: [0003:009315B0], Type:             0x1F37, MSS_Channel3D
 * (001EF4) S_LDATA32: [0003:00931270], Type:             0x1F3A, MSS_Sample
 * (001F10) S_LDATA32: [0003:0093173C], Type:      T_ULONG(0022), MSS_NumSamplesLoaded
 * (001F34) S_LDATA32: [0003:0006EA0C], Type:      T_ULONG(0022), MSS_NumFreeSamples
 * (001F58) S_LDATA32: [0003:00931740], Type:      T_ULONG(0022), MSS_CurSampleIndex
 * (001F7C) S_LDATA32: [0003:00931508], Type:             0x1885, MSS_DigDevice
 * (001F98) S_LDATA32: [0003:009314F8], Type:             0x1843, MSS_SoundFormat
 * (001FB8) S_LDATA32: [0003:00931744], Type:             0x18BE, MSS_Listener
 * (001FD4) S_LDATA32: [0003:009314F0], Type:      T_ULONG(0022), NumberOf3DAudioProviders
 * (001FFC) S_LDATA32: [0003:0092FF30], Type:             0x1F3D, AudioProviders
 * (00201C) S_LDATA32: [0003:0092FE90], Type:             0x1835, MSS_ProviderNameToUse
 * (002040) S_LDATA32: [0003:0092FF10], Type:             0x139D, MSS_ProviderQuality
 * (002064) S_GDATA32: [0003:0006EA10], Type:     T_REAL32(0040), MSS_EaxVolume
 * (002080) S_LDATA32: [0003:0006EA14], Type:       T_INT4(0074), MSS_AudioFocus
 * (0020A0) S_LDATA32: [0003:00931750], Type:       T_INT4(0074), MSS_MusicPlaying
 * (0020C0) S_LDATA32: [0003:00931754], Type:             0x18D5, MSS_hMusic
 * (0020DC) S_LDATA32: [0003:0006EA18], Type:       T_LONG(0012), MSS_MusicVolume
 * (0020FC) S_LDATA32: [0003:00931230], Type:             0x189B, VolumeStack
 * (002118) S_LDATA32: [0003:0006EA1C], Type:       T_LONG(0012), VolumeStackPos
 * 
 */

