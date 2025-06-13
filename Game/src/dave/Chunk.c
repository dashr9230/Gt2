
// File: C:\CodePrj\Gt2\Game\src\dave\Chunk.c

/*
 * ModName: .\Debug\Chunk.obj
 * (000004) Start search for segment 0x1 at symbol 0x88(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\Chunk.obj
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
 */

/*
 * (001238) S_GDATA32: [0003:0006B9F4], Type:      T_UCHAR(0020), visMipCount
 * (001254) S_GDATA32: [0003:0006C4D0], Type:             0x1A4A, DetailSettings
 * (001274) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (00128C) S_GDATA32: [0003:0091E8C4], Type:             0x100B, visVrtArray
 * (0012A8) S_GDATA32: [0003:0091E8C8], Type:             0x1D4B, visTriHeap
 * (0012C4) S_GDATA32: [0003:0091E8CC], Type:             0x13A0, visTexArray
 * (0012E0) S_GDATA32: [0003:0091E8D0], Type:             0x13A8, visMdlArray
 * (0012FC) S_GDATA32: [0003:0121E5E8], Type:      T_ULONG(0022), visNumVertices
 * (00131C) S_GDATA32: [0003:0121E5EC], Type:      T_ULONG(0022), visNumTextures
 * (00133C) S_GDATA32: [0003:0121E5E4], Type:      T_ULONG(0022), visNumModels
 * (001358) S_GDATA32: [0003:00C9D080], Type:             0x1D4C, ioPage
 * (001370) S_GDATA32: [0003:00C9CC60], Type:             0x1D4D, palette
 * (001388) S_GDATA32: [0003:00C9D060], Type:             0x1421, ioTT
 * (00139C) S_GDATA32: [0003:0121E5F0], Type:     T_USHORT(0021), ioTTi
 * (0013B0) S_GDATA32: [0003:0121E5E0], Type:      T_ULONG(0022), gFDF
 * (0013C4) S_GDATA32: [0003:0097C108], Type:    T_32PVOID(0403), hLoaderThread
 * (0013E0) S_GDATA32: [0003:0097C110], Type:    T_32PVOID(0403), hAbortLoad
 * (0013FC) S_GDATA32: [0003:011F25E0], Type:             0x1D4E, vrtTemporary
 * (001418) S_GDATA32: [0003:0097C104], Type:             0x1418, Op
 * (00142C) S_GDATA32: [0003:0099D280], Type:             0x1A44, Filez
 * (001440) S_GDATA32: [0003:0099D250], Type:      T_ULONG(0022), Filez_NumberOf
 * (001460) S_GDATA32: [0003:0099D278], Type:      T_ULONG(0022), Filez_TotalSize
 * (001480) S_GDATA32: [0003:009CF680], Type:       T_INT4(0074), Filez_Decoded
 * (00149C) S_GDATA32: [0003:0099D254], Type:       T_INT4(0074), Decoded_Mesh
 * (0014B8) S_GDATA32: [0003:0099D258], Type:       T_INT4(0074), Decoded_Models
 * (0014D8) S_GDATA32: [0003:0099D27C], Type:       T_INT4(0074), Decoded_Textures
 * (0014F8) S_GDATA32: [0003:0099D260], Type:      T_ULONG(0022), Chunkz_Size
 * (001514) S_GDATA32: [0003:0099D25C], Type:      T_ULONG(0022), Chunkz_NumberOf
 * (001534) S_GDATA32: [0003:0099D264], Type:      T_ULONG(0022), Chunkz_This
 * (001550) S_GDATA32: [0003:009CF684], Type:       T_INT4(0074), Chunkz_Failed
 * (00156C) S_GDATA32: [0003:0099D270], Type:       T_INT4(0074), Chunkz_Loaded
 * (001588) S_GDATA32: [0003:0099D26C], Type:      T_ULONG(0022), LoaderThreadId
 * (0015A8) S_GDATA32: [0003:0099D268], Type:      T_ULONG(0022), Mesh_Model
 * (0015C4) S_GDATA32: [0003:0099D274], Type:      T_ULONG(0022), Mesh_Textures
 * (0015E0) S_GDATA32: [0003:00C9B860], Type:             0x1D4F, TPAGE_Defs
 */

/*
 * (000088) S_GPROC32: [0001:00007AF0], Cb: 0000019C, Type:             0x1001, Chunk_Init
 *          Parent: 00000000, End: 000000CC, Next: 000000D0
 *          Debug start: 00000004, Debug end: 00000198
 *          Flags: Frame Ptr Present
 * 
 * (0000BC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (0000CC) S_END
 */
void Chunk_Init()
{
	// TODO: Chunk_Init
}

/*
 * (0000D0) S_GPROC32: [0001:00007C8C], Cb: 00000040, Type:             0x1D34, Chunk_DoesFileExist
 *          Parent: 00000000, End: 00000164, Next: 00000168
 *          Debug start: 00000006, Debug end: 0000003C
 *          Flags: Frame Ptr Present
 * 
 * (00010C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (000120)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Filename
 * (000138)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), extension
 * (000150)  S_BPREL32: [FFFFFFF0], Type:             0x1004, Buffer
 * 
 * (000164) S_END
 */
void Chunk_DoesFileExist()
{
	// TODO: Chunk_DoesFileExist
}

/*
 * (000168) S_GPROC32: [0001:00007CCC], Cb: 00000047, Type:             0x1B45, Chunk_DoesTextureExist
 *          Parent: 00000000, End: 000001D4, Next: 000001D8
 *          Debug start: 00000003, Debug end: 00000045
 *          Flags: Frame Ptr Present
 * 
 * (0001A8)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (0001BC)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Filename
 * 
 * (0001D4) S_END
 */
void Chunk_DoesTextureExist()
{
	// TODO: Chunk_DoesTextureExist
}

/*
 * (0001D8) S_GPROC32: [0001:00007D13], Cb: 00000027, Type:             0x1B45, Chunk_DoesModelExist
 *          Parent: 00000000, End: 00000240, Next: 00000244
 *          Debug start: 00000003, Debug end: 00000025
 *          Flags: Frame Ptr Present
 * 
 * (000214)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (000228)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Filename
 * 
 * (000240) S_END
 */
void Chunk_DoesModelExist()
{
	// TODO: Chunk_DoesModelExist
}

/*
 * (000244) S_GPROC32: [0001:00007D3A], Cb: 00000021, Type:             0x1D36, Chunk_AddFile
 *          Parent: 00000000, End: 000002D0, Next: 000002D4
 *          Debug start: 00000003, Debug end: 0000001F
 *          Flags: Frame Ptr Present
 * 
 * (00027C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (000290)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Filename
 * (0002A8)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Mode
 * (0002BC)  S_BPREL32: [00000014], Type:   T_32PRCHAR(0470), IdStr
 * 
 * (0002D0) S_END
 */
void Chunk_AddFile()
{
	// TODO: Chunk_AddFile
}

/*
 * (0002D4) S_GPROC32: [0001:00007D5B], Cb: 000007CF, Type:             0x1D38, Chunk_AddFileEx
 *          Parent: 00000000, End: 00000470, Next: 00000474
 *          Debug start: 00000006, Debug end: 000007AB
 *          Flags: Frame Ptr Present
 * 
 * (00030C)  S_LDATA32: [0001:0000850A], Type:     T_NOTYPE(0000), (none)
 * (00031C)  S_LABEL32: [0001:00007DFC], $L77206
 * (000330)  S_LABEL32: [0001:00007EAC], $L77209
 * (000344)  S_LABEL32: [0001:00007F5C], $L77212
 * (000358)  S_LABEL32: [0001:00008031], $L77215
 * (00036C)  S_LABEL32: [0001:000081B5], $L77224
 * (000380)  S_LABEL32: [0001:0000824B], $L77227
 * (000394)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (0003A8)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Filename
 * (0003C0)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Mode
 * (0003D4)  S_BPREL32: [00000014], Type:   T_32PRCHAR(0470), IdStr
 * (0003E8)  S_BPREL32: [00000018], Type:       T_INT4(0074), GraphDetail
 * (000400)  S_BPREL32: [0000001C], Type:   T_32PRCHAR(0470), SkinName
 * (000418)  S_BPREL32: [FFFFFFF8], Type:    T_32PVOID(0403), hFile
 * (00042C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), Filez_This
 * 
 * (000444)  S_BLOCK32: [0001:000080C4], Cb: 000000DA, (none)
 *           Parent: 000002D4, End: 0000046C
 * 
 * (00045C)   S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), a
 * 
 * (00046C)  S_END
 * 
 * (000470) S_END
 */
void Chunk_AddFileEx()
{
	// TODO: Chunk_AddFileEx
}

/*
 * (000474) S_GPROC32: [0001:0000852A], Cb: 000002E4, Type:             0x1001, Chunk_Loader
 *          Parent: 00000000, End: 00000558, Next: 0000055C
 *          Debug start: 00000006, Debug end: 000002E0
 *          Flags: Frame Ptr Present
 * 
 * (0004A8)  S_BPREL32: [FFFFFFDC], Type:    T_32PVOID(0403), hFile
 * (0004BC)  S_BPREL32: [FFFFFFE0], Type:      T_ULONG(0022), i
 * (0004CC)  S_BPREL32: [FFFFFFE4], Type:      T_ULONG(0022), read
 * (0004E0)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), FilePos
 * (0004F4)  S_BPREL32: [FFFFFFEC], Type:   T_32PUCHAR(0420), Store
 * (000508)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), ToRead
 * (00051C)  S_BPREL32: [FFFFFFF4], Type:       T_INT4(0074), err
 * (00052C)  S_BPREL32: [FFFFFFF8], Type:             0x1D39, FilezPtr
 * (000544)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), ToChunk
 * 
 * (000558) S_END
 */
void Chunk_Loader()
{
	// TODO: Chunk_Loader
}

/*
 * (00055C) S_GPROC32: [0001:0000880E], Cb: 0000007E, Type:             0x16A7, Chunk_AsyncLoad
 *          Parent: 00000000, End: 000005A8, Next: 000005AC
 *          Debug start: 00000006, Debug end: 00000078
 *          Flags: Frame Ptr Present
 * 
 * (000594)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), lParam
 * 
 * (0005A8) S_END
 */
void Chunk_AsyncLoad()
{
	// TODO: Chunk_AsyncLoad
}

/*
 * (0005AC) S_GPROC32: [0001:0000888C], Cb: 0000003F, Type:             0x1001, Chunk_StartLoad
 *          Parent: 00000000, End: 000005E4, Next: 000005E8
 *          Debug start: 00000003, Debug end: 0000003D
 *          Flags: Frame Ptr Present
 * 
 * (0005E4) S_END
 */
void Chunk_StartLoad()
{
	// TODO: Chunk_StartLoad
}

/*
 * (0005E8) S_GPROC32: [0001:000088CB], Cb: 000001B1, Type:             0x1001, Chunk_Release
 *          Parent: 00000000, End: 00000630, Next: 00000634
 *          Debug start: 00000006, Debug end: 000001AD
 *          Flags: Frame Ptr Present
 * 
 * (000620)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000630) S_END
 */
void Chunk_Release()
{
	// TODO: Chunk_Release
}

/*
 * (000634) S_GPROC32: [0001:00008A7C], Cb: 000000C9, Type:             0x1001, BuildMesh
 *          Parent: 00000000, End: 0000068C, Next: 00000690
 *          Debug start: 00000006, Debug end: 000000C5
 *          Flags: Frame Ptr Present
 * 
 * (000668)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), End
 * (000678)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), Start
 * 
 * (00068C) S_END
 */
void BuildMesh()
{
	// TODO: BuildMesh
}

/*
 * (000690) S_GPROC32: [0001:00008B45], Cb: 00000159, Type:             0x1001, BuildTextures
 *          Parent: 00000000, End: 00000718, Next: 0000071C
 *          Debug start: 00000006, Debug end: 00000155
 *          Flags: Frame Ptr Present
 * 
 * (0006C8)  S_BPREL32: [FFFFFFF0], Type:      T_ULONG(0022), GraphicSteps
 * (0006E4)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), i
 * (0006F4)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), End
 * (000704)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), Start
 * 
 * (000718) S_END
 */
void BuildTextures()
{
	// TODO: BuildTextures
}

/*
 * (00071C) S_GPROC32: [0001:00008C9E], Cb: 000002EF, Type:             0x1001, Filez_Dump
 *          Parent: 00000000, End: 00000760, Next: 00000764
 *          Debug start: 00000006, Debug end: 000002EB
 *          Flags: Frame Ptr Present
 * 
 * (000750)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000760) S_END
 */
void Filez_Dump()
{
	// TODO: Filez_Dump
}

/*
 * (000764) S_GPROC32: [0001:00008F8D], Cb: 00000089, Type:             0x1A13, TP_Search
 *          Parent: 00000000, End: 000007DC, Next: 000007E0
 *          Debug start: 00000006, Debug end: 00000085
 *          Flags: Frame Ptr Present
 * 
 * (000798)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Filename
 * (0007B0)  S_BPREL32: [FFFFFFF8], Type:             0x13A0, ThisTex
 * (0007C4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), TexIndex
 * 
 * (0007DC) S_END
 */
void TP_Search()
{
	// TODO: TP_Search
}

/*
 * (0007E0) S_GPROC32: [0001:00009016], Cb: 0000052C, Type:             0x1D3B, TP_AddFile
 *          Parent: 00000000, End: 000008E4, Next: 000008E8
 *          Debug start: 00000009, Debug end: 00000528
 *          Flags: Frame Ptr Present
 * 
 * (000814)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (000828)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Filename
 * (000840)  S_BPREL32: [00000010], Type:      T_ULONG(0022), FilezId
 * (000854)  S_BPREL32: [FFFFFEF4], Type:   T_32PRCHAR(0470), RealFilename
 * (000870)  S_BPREL32: [FFFFFEF8], Type:      T_ULONG(0022), TpID
 * (000884)  S_BPREL32: [FFFFFEFC], Type:    T_32PVOID(0403), hFile
 * (000898)  S_BPREL32: [FFFFFF00], Type:             0x1A12, TestFilename
 * 
 * (0008B4)  S_BLOCK32: [0001:000094CF], Cb: 00000030, (none)
 *           Parent: 000007E0, End: 000008E0
 * 
 * (0008CC)   S_BPREL32: [FFFFFEF0], Type:      T_ULONG(0022), error
 * 
 * (0008E0)  S_END
 * 
 * (0008E4) S_END
 */
void TP_AddFile()
{
	// TODO: TP_AddFile
}

/*
 * (0008E8) S_GPROC32: [0001:00009542], Cb: 0000075F, Type:             0x16A1, BuildTexture
 *          Parent: 00000000, End: 00000AA4, Next: 00000AA8
 *          Debug start: 00000007, Debug end: 0000075A
 *          Flags: Frame Ptr Present
 * 
 * (00091C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), FilezId
 * (000930)  S_BPREL32: [FFFFFFC0], Type:      T_ULONG(0022), TpID
 * (000944)  S_BPREL32: [FFFFFFC4], Type:   T_32PUCHAR(0420), fn
 * (000954)  S_BPREL32: [FFFFFFC8], Type:             0x13A0, tex
 * (000964)  S_BPREL32: [FFFFFFCC], Type:      T_ULONG(0022), TexPage
 * (000978)  S_BPREL32: [FFFFFFD0], Type:      T_ULONG(0022), FileType
 * (000990)  S_BPREL32: [FFFFFFD4], Type:             0x1D3D, tpd
 * (0009A0)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), c
 * (0009B0)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), stage
 * 
 * (0009C4)  S_BLOCK32: [0001:0000962C], Cb: 00000071, (none)
 *           Parent: 000008E8, End: 000009F4
 * 
 * (0009DC)   S_BPREL32: [FFFFFFBC], Type:       T_LONG(0012), DetailLevel
 * 
 * (0009F4)  S_END
 * 
 * (0009F8)  S_BLOCK32: [0001:000096AC], Cb: 00000253, (none)
 *           Parent: 000008E8, End: 00000A74
 * 
 * (000A10)   S_BPREL32: [FFFFFFA4], Type:   T_32PUCHAR(0420), dat
 * (000A20)   S_BPREL32: [FFFFFFA8], Type:      T_ULONG(0022), id
 * (000A30)   S_BPREL32: [FFFFFFAC], Type:      T_ULONG(0022), lv
 * (000A40)   S_BPREL32: [FFFFFFB0], Type:      T_ULONG(0022), i
 * (000A50)   S_BPREL32: [FFFFFFB4], Type:      T_ULONG(0022), version
 * (000A64)   S_BPREL32: [FFFFFFB8], Type:      T_ULONG(0022), e
 * 
 * (000A74)  S_END
 * 
 * (000A78)  S_BLOCK32: [0001:0000990E], Cb: 0000034C, (none)
 *           Parent: 000008E8, End: 00000AA0
 * 
 * (000A90)   S_BPREL32: [FFFFFFA0], Type:      T_ULONG(0022), fs
 * 
 * (000AA0)  S_END
 * 
 * (000AA4) S_END
 */
void BuildTexture()
{
	// TODO: BuildTexture
}

/*
 * (000AA8) S_GPROC32: [0001:00009CA1], Cb: 00000042, Type:             0x16A1, TP_ReleaseLoadBuffer
 *          Parent: 00000000, End: 00000AF8, Next: 00000AFC
 *          Debug start: 00000003, Debug end: 00000040
 *          Flags: Frame Ptr Present
 * 
 * (000AE4)  S_BPREL32: [00000008], Type:      T_ULONG(0022), FilezId
 * 
 * (000AF8) S_END
 */
void TP_ReleaseLoadBuffer()
{
	// TODO: TP_ReleaseLoadBuffer
}

/*
 * (000AFC) S_LPROC32: [0001:00009CE3], Cb: 000000DB, Type:             0x1D3F, texDecompress
 *          Parent: 00000000, End: 00000BDC, Next: 00000BE0
 *          Debug start: 00000006, Debug end: 000000D7
 *          Flags: Frame Ptr Present
 * 
 * (000B34)  S_BPREL32: [00000008], Type:      T_ULONG(0022), d
 * (000B44)  S_BPREL32: [0000000C], Type:   T_32PUCHAR(0420), ptr
 * (000B54)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), y
 * (000B64)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), s
 * 
 * (000B74)  S_BLOCK32: [0001:00009CFC], Cb: 000000AB, (none)
 *           Parent: 00000AFC, End: 00000BD8
 * 
 * (000B8C)   S_BPREL32: [FFFFFFF0], Type:      T_UCHAR(0020), cmd
 * (000B9C)   S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), x
 * 
 * (000BAC)   S_BLOCK32: [0001:00009D20], Cb: 0000003E, (none)
 *            Parent: 00000B74, End: 00000BD4
 * 
 * (000BC4)    S_BPREL32: [FFFFFFEC], Type:      T_UCHAR(0020), dat
 * 
 * (000BD4)   S_END
 * 
 * (000BD8)  S_END
 * 
 * (000BDC) S_END
 */
void texDecompress()
{
	// TODO: texDecompress
}

/*
 * (000BE0) S_GPROC32: [0001:00009DBE], Cb: 0000030C, Type:             0x1D3B, MODEL_AddFile
 *          Parent: 00000000, End: 00000CD4, Next: 00000CD8
 *          Debug start: 00000009, Debug end: 00000308
 *          Flags: Frame Ptr Present
 * 
 * (000C18)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (000C2C)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Filename
 * (000C44)  S_BPREL32: [00000010], Type:      T_ULONG(0022), FilezId
 * (000C58)  S_BPREL32: [FFFFFDF4], Type:      T_ULONG(0022), id
 * (000C68)  S_BPREL32: [FFFFFDF8], Type:       T_LONG(0012), FirstTexture
 * (000C84)  S_BPREL32: [FFFFFDFC], Type:      T_ULONG(0022), ModelID
 * (000C98)  S_BPREL32: [FFFFFE00], Type:             0x1A12, TestFilename
 * (000CB4)  S_BPREL32: [FFFFFF00], Type:             0x1A12, WorkingNameBuffer
 * 
 * (000CD4) S_END
 */
void MODEL_AddFile()
{
	// TODO: MODEL_AddFile
}

/*
 * (000CD8) S_GPROC32: [0001:0000A0CA], Cb: 0000008F, Type:             0x1001, BuildModels
 *          Parent: 00000000, End: 00000D1C, Next: 00000D20
 *          Debug start: 00000004, Debug end: 0000008B
 *          Flags: Frame Ptr Present
 * 
 * (000D0C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), i
 * 
 * (000D1C) S_END
 */
void BuildModels()
{
	// TODO: BuildModels
}

/*
 * (000D20) S_GPROC32: [0001:0000A159], Cb: 000002DA, Type:             0x16A1, BuildModel
 *          Parent: 00000000, End: 00000E08, Next: 00000E0C
 *          Debug start: 00000009, Debug end: 000002D6
 *          Flags: Frame Ptr Present
 * 
 * (000D54)  S_BPREL32: [00000008], Type:      T_ULONG(0022), FilezId
 * (000D68)  S_BPREL32: [FFFFFEE8], Type:      T_ULONG(0022), id
 * (000D78)  S_BPREL32: [FFFFFEEC], Type:       T_INT4(0074), FirstTexture
 * (000D94)  S_BPREL32: [FFFFFEF0], Type:      T_ULONG(0022), ModelID
 * (000DA8)  S_BPREL32: [FFFFFEF4], Type:             0x13A0, pLTx
 * (000DBC)  S_BPREL32: [FFFFFEF8], Type:      T_ULONG(0022), LastTextureId
 * (000DD8)  S_BPREL32: [FFFFFEFC], Type:             0x13A8, mdl
 * (000DE8)  S_BPREL32: [FFFFFF00], Type:             0x1A12, WorkingNameBuffer
 * 
 * (000E08) S_END
 */
void BuildModel()
{
	// TODO: BuildModel
}

/*
 * (000E0C) S_LPROC32: [0001:0000A433], Cb: 00000A84, Type:             0x1D41, visParseVisual
 *          Parent: 00000000, End: 0000117C, Next: 00001180
 *          Debug start: 00000009, Debug end: 000009E7
 *          Flags: Frame Ptr Present
 * 
 * (000E44)  S_LDATA32: [0001:0000AE6E], Type:     T_NOTYPE(0000), (none)
 * (000E54)  S_LDATA32: [0001:0000AE1E], Type:     T_NOTYPE(0000), (none)
 * (000E64)  S_LABEL32: [0001:0000A527], $L77746
 * (000E78)  S_LABEL32: [0001:0000AC14], brakes
 * (000E8C)  S_LABEL32: [0001:0000A546], $L77750
 * (000EA0)  S_LABEL32: [0001:0000A6C1], $L77768
 * (000EB4)  S_LABEL32: [0001:0000A7A5], $L77774
 * (000EC8)  S_LABEL32: [0001:0000A7EB], $L77779
 * (000EDC)  S_LABEL32: [0001:0000A831], $L77784
 * (000EF0)  S_LABEL32: [0001:0000A877], $L77789
 * (000F04)  S_LABEL32: [0001:0000A8B9], $L77794
 * (000F18)  S_LABEL32: [0001:0000A8FB], $L77799
 * (000F2C)  S_LABEL32: [0001:0000A93D], $L77804
 * (000F40)  S_LABEL32: [0001:0000A97F], $L77809
 * (000F54)  S_LABEL32: [0001:0000A9C1], $L77814
 * (000F68)  S_LABEL32: [0001:0000AA03], $L77819
 * (000F7C)  S_LABEL32: [0001:0000AA45], $L77824
 * (000F90)  S_LABEL32: [0001:0000AA87], $L77829
 * (000FA4)  S_LABEL32: [0001:0000AAC9], $L77834
 * (000FB8)  S_LABEL32: [0001:0000AB0B], $L77839
 * (000FCC)  S_LABEL32: [0001:0000AB4D], $L77844
 * (000FE0)  S_LABEL32: [0001:0000AB8F], $L77849
 * (000FF4)  S_BPREL32: [00000008], Type:             0x13A0, pChr
 * (001008)  S_BPREL32: [0000000C], Type:             0x13A8, pModel
 * (00101C)  S_BPREL32: [FFFFFED8], Type:      T_UCHAR(0020), cmd
 * (00102C)  S_BPREL32: [FFFFFEDC], Type:             0x1A12, ChildName
 * (001044)  S_BPREL32: [FFFFFFDC], Type:      T_ULONG(0022), id
 * (001054)  S_BPREL32: [FFFFFFE0], Type:     T_USHORT(0021), csi
 * (001064)  S_BPREL32: [FFFFFFE4], Type:      T_UCHAR(0020), cmet
 * (001078)  S_BPREL32: [FFFFFFE8], Type:     T_USHORT(0021), tc
 * (001088)  S_BPREL32: [FFFFFFEC], Type:             0x13A8, mdl
 * (001098)  S_BPREL32: [FFFFFFF0], Type:             0x1D44, ctl
 * (0010A8)  S_BPREL32: [FFFFFFF4], Type:             0x1D47, crc
 * (0010B8)  S_BPREL32: [FFFFFFF8], Type:     T_USHORT(0021), vc
 * (0010C8)  S_BPREL32: [FFFFFFFC], Type:      T_UCHAR(0020), ctx
 * 
 * (0010D8)  S_BLOCK32: [0001:0000A5E2], Cb: 00000048, (none)
 *           Parent: 00000E0C, End: 00001100
 * 
 * (0010F0)   S_BPREL32: [FFFFFED4], Type:             0x100B, vx
 * 
 * (001100)  S_END
 * 
 * (001104)  S_BLOCK32: [0001:0000A62C], Cb: 0000005F, (none)
 *           Parent: 00000E0C, End: 0000112C
 * 
 * (00111C)   S_BPREL32: [FFFFFED0], Type:             0x17BD, vx
 * 
 * (00112C)  S_END
 * 
 * (001130)  S_BLOCK32: [0001:0000AC14], Cb: 000001FE, (none)
 *           Parent: 00000E0C, End: 00001178
 * 
 * (001148)   S_BPREL32: [FFFFFE88], Type:             0x13A8, kd
 * (001158)   S_BPREL32: [FFFFFE8C], Type:             0x1006, mx
 * (001168)   S_BPREL32: [FFFFFECC], Type:      T_ULONG(0022), fd
 * 
 * (001178)  S_END
 * 
 * (00117C) S_END
 */
void visParseVisual()
{
	// TODO: visParseVisual
}

/*
 * (001180) S_LPROC32: [0001:0000AEB7], Cb: 0000000E, Type:             0x1A2F, REND_SetCallback
 *          Parent: 00000000, End: 000011D8, Next: 000011DC
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (0011B8)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (0011C8)  S_BPREL32: [0000000C], Type:             0x13A7, F
 * 
 * (0011D8) S_END
 */
void REND_SetCallback()
{
	// TODO: REND_SetCallback
}

/*
 * (0011DC) S_LPROC32: [0001:0000AEC5], Cb: 0000000E, Type:             0x1A31, REND_SetCallData
 *          Parent: 00000000, End: 00001234, Next: 00000000
 *          Debug start: 00000003, Debug end: 0000000C
 *          Flags: Frame Ptr Present
 * 
 * (001214)  S_BPREL32: [00000008], Type:             0x13A8, M
 * (001224)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), D
 * 
 * (001234) S_END
 */
void REND_SetCallData()
{
	// TODO: REND_SetCallData
}

