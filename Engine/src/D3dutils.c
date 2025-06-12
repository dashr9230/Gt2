
// File: C:\CodePrj\Gt2\Engine\src\D3dutils.c

/*
 * ModName: .\Debug\D3dutils.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\D3dutils.obj
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
 * 
 */

/*
 * (000D70) S_GDATA32: [0003:0091DB6C], Type:       T_LONG(0012), LastFileSize
 * (000D8C) S_GDATA32: [0003:0097C124], Type:      T_ULONG(0022), MessageLoopExit
 * (000DAC) S_GDATA32: [0003:00931788], Type:      T_ULONG(0022), UserTimer
 * (000DC4) S_GDATA32: [0003:0124D580], Type:      T_ULONG(0022), timeout
 * (000DDC) S_LDATA32: [0003:0091DB64], Type:      T_ULONG(0022), MEM_Used
 * (000DF4) S_LDATA32: [0003:0091DB68], Type:      T_ULONG(0022), MEM_NumBlocks
 * (000E10) S_GDATA32: [0003:0124D5A0], Type:             0x207F, MemAllocationList
 * (000E30) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000E48) S_GDATA32: [0003:00C30FB8], Type:             0x102A, hWndMain
 * (000E60) S_GDATA32: [0003:00931780], Type:      T_ULONG(0022), SystemActive
 */

/*
 * (000090) S_GPROC32: [0001:0007AA40], Cb: 000000E3, Type:             0x2065, FILE_Load
 *          Parent: 00000000, End: 00000134, Next: 00000138
 *          Debug start: 00000006, Debug end: 000000DF
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), lpFileName
 * (0000DC)  S_BPREL32: [0000000C], Type:    T_32PVOID(0403), lpDestAddr
 * (0000F4)  S_BPREL32: [FFFFFFF4], Type:       T_LONG(0012), FileLength
 * (00010C)  S_BPREL32: [FFFFFFF8], Type:             0x1834, fh
 * (00011C)  S_BPREL32: [FFFFFFFC], Type:    T_32PVOID(0403), lpLoadAddr
 * 
 * (000134) S_END
 */

/*
 * (000138) S_GPROC32: [0001:0007AB23], Cb: 00000052, Type:             0x2066, FILE_GetSize
 *          Parent: 00000000, End: 000001A8, Next: 000001AC
 *          Debug start: 00000006, Debug end: 0000004E
 *          Flags: Frame Ptr Present
 * 
 * (00016C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), lpFileName
 * (000184)  S_BPREL32: [FFFFFFF8], Type:             0x1834, fh
 * (000194)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), Size
 * 
 * (0001A8) S_END
 */

/*
 * (0001AC) S_GPROC32: [0001:0007AB75], Cb: 00000045, Type:             0x2067, FILE_GetExtension
 *          Parent: 00000000, End: 00000218, Next: 0000021C
 *          Debug start: 00000004, Debug end: 00000041
 *          Flags: Frame Ptr Present
 * 
 * (0001E8)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), lpFileName
 * (000200)  S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), lpExtension
 * 
 * (000218) S_END
 */

/*
 * (00021C) S_GPROC32: [0001:0007ABBA], Cb: 000006FF, Type:             0x2069, UTIL_SaveAsPcx
 *          Parent: 00000000, End: 000003E4, Next: 000003E8
 *          Debug start: 0000000E, Debug end: 000006FA
 *          Flags: Frame Ptr Present
 * 
 * (000254)  S_BPREL32: [00000008], Type:   T_32PUCHAR(0420), SrcPtr
 * (000268)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), Width
 * (00027C)  S_BPREL32: [00000010], Type:      T_ULONG(0022), Depth
 * (000290)  S_BPREL32: [00000014], Type:      T_ULONG(0022), Stride
 * (0002A4)  S_BPREL32: [00000018], Type:      T_ULONG(0022), SrcBitDepth
 * (0002BC)  S_BPREL32: [0000001C], Type:   T_32PUCHAR(0420), filename
 * (0002D4)  S_BPREL32: [FFFFE754], Type:             0x206D, PcxHead
 * (0002E8)  S_BPREL32: [FFFFE7D4], Type:      T_UCHAR(0020), dat
 * (0002F8)  S_BPREL32: [FFFFE7D8], Type:             0x1834, fp
 * (000308)  S_BPREL32: [FFFFE7DC], Type:   T_32PUCHAR(0420), ScrPtrOld
 * (000320)  S_BPREL32: [FFFFE7E0], Type:     T_USHORT(0021), y
 * (000330)  S_BPREL32: [FFFFE7E4], Type:             0x206E, DestG
 * (000344)  S_BPREL32: [FFFFEFE4], Type:     T_USHORT(0021), x
 * (000354)  S_BPREL32: [FFFFEFE8], Type:     T_USHORT(0021), colour
 * (000368)  S_BPREL32: [FFFFEFEC], Type:      T_UCHAR(0020), g
 * (000378)  S_BPREL32: [FFFFEFF0], Type:             0x206E, DestR
 * (00038C)  S_BPREL32: [FFFFF7F0], Type:             0x206E, DestB
 * (0003A0)  S_BPREL32: [FFFFFFF0], Type:     T_USHORT(0021), run
 * (0003B0)  S_BPREL32: [FFFFFFF4], Type:      T_UCHAR(0020), r
 * (0003C0)  S_BPREL32: [FFFFFFF8], Type:      T_UCHAR(0020), b
 * (0003D0)  S_BPREL32: [FFFFFFFC], Type:   T_32PUCHAR(0420), ScrPtr
 * 
 * (0003E4) S_END
 */

/*
 * (0003E8) S_GPROC32: [0001:0007B2B9], Cb: 000000BC, Type:             0x1001, UTIL_ScreenShot
 *          Parent: 00000000, End: 0000045C, Next: 00000460
 *          Debug start: 00000009, Debug end: 000000B8
 *          Flags: Frame Ptr Present
 * 
 * (000420)  S_LDATA32: [0003:0091DB70], Type:      T_ULONG(0022), ShotNum
 * (000438)  S_BPREL32: [FFFFFEFC], Type:             0x18FB, Name
 * (00044C)  S_BPREL32: [FFFFFFFC], Type:             0x1834, fh
 * 
 * (00045C) S_END
 */

/*
 * (000460) S_GPROC32: [0001:0007B375], Cb: 0000001C, Type:             0x2071, PCX_GetHeader
 *          Parent: 00000000, End: 000004BC, Next: 000004C0
 *          Debug start: 00000003, Debug end: 0000001A
 *          Flags: Frame Ptr Present
 * 
 * (000498)  S_BPREL32: [00000008], Type:             0x1834, fp
 * (0004A8)  S_BPREL32: [0000000C], Type:             0x206F, Header
 * 
 * (0004BC) S_END
 */

/*
 * (0004C0) S_GPROC32: [0001:0007B391], Cb: 00000A33, Type:             0x2073, PCX_LoadToSurface
 *          Parent: 00000000, End: 00000714, Next: 00000718
 *          Debug start: 0000000D, Debug end: 00000A2F
 *          Flags: Frame Ptr Present
 * 
 * (0004FC)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), filename
 * (000514)  S_BPREL32: [0000000C], Type:             0x112D, lpSurface
 * (00052C)  S_BPREL32: [FFFFD43C], Type:      T_UCHAR(0020), dat
 * (00053C)  S_BPREL32: [FFFFD440], Type:      T_ULONG(0022), DEST_Height
 * (000554)  S_BPREL32: [FFFFD444], Type:             0x1834, fp
 * (000564)  S_BPREL32: [FFFFD448], Type:             0x18FB, PalBlue
 * (000578)  S_BPREL32: [FFFFD548], Type:      T_ULONG(0022), FileLength
 * (000590)  S_BPREL32: [FFFFD54C], Type:      T_ULONG(0022), ImagePos
 * (0005A8)  S_BPREL32: [FFFFD550], Type:      T_ULONG(0022), DEST_Width
 * (0005C0)  S_BPREL32: [FFFFD554], Type:   T_32PUCHAR(0420), DEST_PtrStart
 * (0005DC)  S_BPREL32: [FFFFD558], Type:             0x2074, Pixels
 * (0005F0)  S_BPREL32: [FFFFED58], Type:      T_ULONG(0022), y
 * (000600)  S_BPREL32: [FFFFED5C], Type:      T_ULONG(0022), FilePos
 * (000614)  S_BPREL32: [FFFFED60], Type:      T_ULONG(0022), x
 * (000624)  S_BPREL32: [FFFFED64], Type:             0x18FB, PalRed
 * (000638)  S_BPREL32: [FFFFEE64], Type:      T_ULONG(0022), DEST_Pitch
 * (000650)  S_BPREL32: [FFFFEE68], Type:   T_32PUCHAR(0420), DEST_Ptr
 * (000668)  S_BPREL32: [FFFFEE6C], Type:      T_ULONG(0022), PCX_Height
 * (000680)  S_BPREL32: [FFFFEE70], Type:      T_ULONG(0022), count
 * (000694)  S_BPREL32: [FFFFEE74], Type:             0x206D, PCX_Head
 * (0006AC)  S_BPREL32: [FFFFEEF4], Type:      T_ULONG(0022), PCX_Width
 * (0006C4)  S_BPREL32: [FFFFEEF8], Type:             0x2075, DiskBuffer
 * (0006DC)  S_BPREL32: [FFFFFEF8], Type:      T_ULONG(0022), run
 * (0006EC)  S_BPREL32: [FFFFFEFC], Type:             0x18FB, PalGreen
 * (000704)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000714) S_END
 */

/*
 * (000718) S_GPROC32: [0001:0007BDC4], Cb: 0000064F, Type:             0x2077, PCX_LoadToMemory
 *          Parent: 00000000, End: 00000908, Next: 0000090C
 *          Debug start: 0000000D, Debug end: 0000064B
 *          Flags: Frame Ptr Present
 * 
 * (000750)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), filename
 * (000768)  S_BPREL32: [0000000C], Type:   T_32PUCHAR(0420), DEST_Ptr
 * (000780)  S_BPREL32: [00000010], Type:             0x206F, PCX_Head
 * (000798)  S_BPREL32: [00000014], Type:   T_32PULONG(0422), Palette
 * (0007AC)  S_BPREL32: [FFFFECCC], Type:      T_UCHAR(0020), dat
 * (0007BC)  S_BPREL32: [FFFFECD0], Type:             0x1834, fp
 * (0007CC)  S_BPREL32: [FFFFECD4], Type:             0x18FB, PalBlue
 * (0007E0)  S_BPREL32: [FFFFEDD4], Type:      T_ULONG(0022), FileLength
 * (0007F8)  S_BPREL32: [FFFFEDD8], Type:      T_ULONG(0022), ImagePos
 * (000810)  S_BPREL32: [FFFFEDDC], Type:   T_32PUCHAR(0420), DEST_PtrStart
 * (00082C)  S_BPREL32: [FFFFEDE0], Type:      T_ULONG(0022), y
 * (00083C)  S_BPREL32: [FFFFEDE4], Type:      T_ULONG(0022), FilePos
 * (000850)  S_BPREL32: [FFFFEDE8], Type:      T_ULONG(0022), x
 * (000860)  S_BPREL32: [FFFFEDEC], Type:             0x18FB, PalRed
 * (000874)  S_BPREL32: [FFFFEEEC], Type:      T_ULONG(0022), PCX_Height
 * (00088C)  S_BPREL32: [FFFFEEF0], Type:      T_ULONG(0022), count
 * (0008A0)  S_BPREL32: [FFFFEEF4], Type:      T_ULONG(0022), PCX_Width
 * (0008B8)  S_BPREL32: [FFFFEEF8], Type:             0x2075, DiskBuffer
 * (0008D0)  S_BPREL32: [FFFFFEF8], Type:      T_ULONG(0022), run
 * (0008E0)  S_BPREL32: [FFFFFEFC], Type:             0x18FB, PalGreen
 * (0008F8)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000908) S_END
 */

/*
 * (00090C) S_GPROC32: [0001:0007C413], Cb: 0000002F, Type:             0x1001, UTIL_WaitKeyPress
 *          Parent: 00000000, End: 00000958, Next: 0000095C
 *          Debug start: 00000006, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (000948)  S_BPREL32: [FFFFFFE8], Type:             0x1BF3, Joy
 * 
 * (000958) S_END
 */

/*
 * (00095C) S_GPROC32: [0001:0007C442], Cb: 0000002F, Type:             0x1001, UTIL_WaitKeyRelease
 *          Parent: 00000000, End: 000009A8, Next: 000009AC
 *          Debug start: 00000006, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (000998)  S_BPREL32: [FFFFFFE8], Type:             0x1BF3, Joy
 * 
 * (0009A8) S_END
 */

/*
 * (0009AC) S_GPROC32: [0001:0007C471], Cb: 0000003C, Type:             0x1B5B, UTIL_DisplayPcxAndWaitForKeyPress
 *          Parent: 00000000, End: 00000A10, Next: 00000A14
 *          Debug start: 00000003, Debug end: 0000003A
 *          Flags: Frame Ptr Present
 * 
 * (0009F8)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), filename
 * 
 * (000A10) S_END
 */

/*
 * (000A14) S_GPROC32: [0001:0007C4AD], Cb: 0000003D, Type:             0x1001, UTIL_WaitKeyPressTimeout
 *          Parent: 00000000, End: 00000A64, Next: 00000A68
 *          Debug start: 00000006, Debug end: 00000039
 *          Flags: Frame Ptr Present
 * 
 * (000A54)  S_BPREL32: [FFFFFFE8], Type:             0x1BF3, Joy
 * 
 * (000A64) S_END
 */

/*
 * (000A68) S_GPROC32: [0001:0007C4EA], Cb: 0000004F, Type:             0x1C43, UTIL_DisplayPcxAndWaitForKeyPressTimeout
 *          Parent: 00000000, End: 00000AE4, Next: 00000AE8
 *          Debug start: 00000003, Debug end: 0000004D
 *          Flags: Frame Ptr Present
 * 
 * (000AB8)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), filename
 * (000AD0)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), ticks
 * 
 * (000AE4) S_END
 */

/*
 * (000AE8) S_GPROC32: [0001:0007C539], Cb: 00000022, Type:             0x1B5B, UTIL_DisplayPcx
 *          Parent: 00000000, End: 00000B38, Next: 00000B3C
 *          Debug start: 00000003, Debug end: 00000020
 *          Flags: Frame Ptr Present
 * 
 * (000B20)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), filename
 * 
 * (000B38) S_END
 */

/*
 * (000B3C) S_GPROC32: [0001:0007C55B], Cb: 0000002D, Type:             0x1001, MEM_Init
 *          Parent: 00000000, End: 00000B6C, Next: 00000B70
 *          Debug start: 00000003, Debug end: 0000002B
 *          Flags: Frame Ptr Present
 * 
 * (000B6C) S_END
 */

/*
 * (000B70) S_GPROC32: [0001:0007C588], Cb: 00000052, Type:             0x1001, MEM_Close
 *          Parent: 00000000, End: 00000BB4, Next: 00000BB8
 *          Debug start: 00000004, Debug end: 0000004E
 *          Flags: Frame Ptr Present
 * 
 * (000BA4)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000BB4) S_END
 */

/*
 * (000BB8) S_GPROC32: [0001:0007C5DA], Cb: 00000005, Type:             0x1001, MEM_Report
 *          Parent: 00000000, End: 00000BEC, Next: 00000BF0
 *          Debug start: 00000003, Debug end: 00000003
 *          Flags: Frame Ptr Present
 * 
 * (000BEC) S_END
 */

/*
 * (000BF0) S_GPROC32: [0001:0007C5DF], Cb: 0000000F, Type:             0x2078, MEM_Size
 *          Parent: 00000000, End: 00000C34, Next: 00000C38
 *          Debug start: 00000003, Debug end: 0000000D
 *          Flags: Frame Ptr Present
 * 
 * (000C20)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), Memory
 * 
 * (000C34) S_END
 */

/*
 * (000C38) S_GPROC32: [0001:0007C5EE], Cb: 000000CF, Type:             0x2079, MEM_Malloc
 *          Parent: 00000000, End: 00000CFC, Next: 00000D00
 *          Debug start: 00000006, Debug end: 000000CB
 *          Flags: Frame Ptr Present
 * 
 * (000C6C)  S_BPREL32: [00000008], Type:      T_ULONG(0022), AmountOfMemoryRequired
 * (000C90)  S_BPREL32: [0000000C], Type:   T_32PUCHAR(0420), BlockName
 * (000CA8)  S_BPREL32: [FFFFFFF0], Type:             0x207D, FreeBlock
 * (000CC0)  S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), FreeBlockNum
 * (000CDC)  S_BPREL32: [FFFFFFF8], Type:             0x1014, Mem
 * (000CEC)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000CFC) S_END
 */

/*
 * (000D00) S_GPROC32: [0001:0007C6BD], Cb: 000000B8, Type:             0x207E, MEM_free
 *          Parent: 00000000, End: 00000D6C, Next: 00000E7C
 *          Debug start: 00000006, Debug end: 000000B4
 *          Flags: Frame Ptr Present
 * 
 * (000D30)  S_BPREL32: [00000008], Type:    T_32PVOID(0403), MemoryToFree
 * (000D4C)  S_BPREL32: [FFFFFFF8], Type:             0x1014, Mem
 * (000D5C)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (000D6C) S_END
 */

/*
 * (000E7C) S_GPROC32: [0001:0007C780], Cb: 0000001B, Type:             0x2080, UnlockSurface
 *          Parent: 00000000, End: 00000ECC, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000019
 *          Flags: Frame Ptr Present
 * 
 * (000EB4)  S_BPREL32: [00000008], Type:             0x112D, lpSurface
 * 
 * (000ECC) S_END
 */

