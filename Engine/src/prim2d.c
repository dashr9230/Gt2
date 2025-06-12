
// File: C:\CodePrj\Gt2\Engine\src\prim2d.c

/*
 * ModName: .\Debug\prim2d.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\prim2d.obj
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
 * 
 */

/*
 * (000348) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (000360) S_GDATA32: [0003:0006D318], Type:             0x1664, RS
 * (000374) S_GDATA32: [0003:00C97120], Type:             0x169F, RC
 * (000388) S_GDATA32: [0003:0091ED48], Type:             0x1B2B, RS_lpCurTex
 * (0003A4) S_GDATA32: [0003:0006D3A0], Type:             0x1B2C, TS
 * (0003B8) S_GDATA32: [0003:00C97114], Type:       T_INT4(0074), RS_DumpPacket
 * (0003D4) S_GDATA32: [0003:00C970E0], Type:             0x1AD2, RS_TexChge
 * (0003F0) S_GDATA32: [0003:00C97118], Type:      T_ULONG(0022), RS_DPCalled
 * (00040C) S_GDATA32: [0003:00C970CC], Type:      T_ULONG(0022), RS_DPVCount
 * (000428) S_GDATA32: [0003:00C97110], Type:      T_ULONG(0022), RS_DPICalled
 * (000444) S_GDATA32: [0003:00C970C8], Type:      T_ULONG(0022), RS_DPIVCount
 * (000460) S_GDATA32: [0003:00C971BC], Type:      T_ULONG(0022), RS_DPIICount
 * (00047C) S_GDATA32: [0003:0006D568], Type:             0x1B2D, RS_PrimType
 * (000498) S_GDATA32: [0003:0006D584], Type:             0x1B2D, RS_BlendType
 * (0004B4) S_GDATA32: [0003:0006D5BC], Type:             0x1B2D, RS_ZCmp
 * (0004CC) S_GDATA32: [0003:0006D5EC], Type:             0x1B2D, RS_TextureOp
 * (0004E8) S_GDATA32: [0003:0006D650], Type:             0x1B2D, RS_TextureArg
 */

/*
 * (00008C) S_GPROC32: [0001:00088E30], Cb: 0000023A, Type:             0x1F70, P2D_GetPoly
 *          Parent: 00000000, End: 00000180, Next: 00000184
 *          Debug start: 00000006, Debug end: 00000236
 *          Flags: Frame Ptr Present
 * 
 * (0000C0)  S_BPREL32: [00000008], Type:       T_INT4(0074), PType
 * (0000D4)  S_BPREL32: [0000000C], Type:      T_ULONG(0022), NumPrims
 * (0000EC)  S_BPREL32: [FFFFFFF8], Type:             0x1413, lpPrim
 * (000100)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), PrimSize
 * 
 * (000118)  S_BLOCK32: [0001:00088E7F], Cb: 000001E4, (none)
 *           Parent: 0000008C, End: 0000017C
 * 
 * (000130)   S_BPREL32: [FFFFFFF4], Type:      T_ULONG(0022), a
 * 
 * (000140)   S_BLOCK32: [0001:00088F58], Cb: 0000010B, (none)
 *            Parent: 00000118, End: 00000178
 * 
 * (000158)    S_BPREL32: [FFFFFFEC], Type:      T_ULONG(0022), b
 * (000168)    S_BPREL32: [FFFFFFF0], Type:     T_USHORT(0021), a
 * 
 * (000178)   S_END
 * 
 * (00017C)  S_END
 * 
 * (000180) S_END
 */

/*
 * (000184) S_GPROC32: [0001:0008906A], Cb: 00000017, Type:             0x1F72, P2D_FreePoly
 *          Parent: 00000000, End: 000001CC, Next: 000001D0
 *          Debug start: 00000003, Debug end: 00000015
 *          Flags: Frame Ptr Present
 * 
 * (0001B8)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * 
 * (0001CC) S_END
 */

/*
 * (0001D0) S_GPROC32: [0001:00089081], Cb: 00000025, Type:             0x1F72, P2D_FreePolyList
 *          Parent: 00000000, End: 0000021C, Next: 00000220
 *          Debug start: 00000003, Debug end: 00000023
 *          Flags: Frame Ptr Present
 * 
 * (000208)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * 
 * (00021C) S_END
 */

/*
 * (000220) S_GPROC32: [0001:000890A6], Cb: 0000029F, Type:             0x1F72, P2D_Draw
 *          Parent: 00000000, End: 00000344, Next: 00000000
 *          Debug start: 00000006, Debug end: 0000028B
 *          Flags: Frame Ptr Present
 * 
 * (000250)  S_LDATA32: [0001:00089335], Type:     T_NOTYPE(0000), (none)
 * (000260)  S_LABEL32: [0001:00089232], $L66224
 * (000274)  S_LABEL32: [0001:00089284], $L66227
 * (000288)  S_LABEL32: [0001:000892A7], $L66228
 * (00029C)  S_LABEL32: [0001:000892CB], $L66229
 * (0002B0)  S_BPREL32: [00000008], Type:             0x1413, lpPrim
 * 
 * (0002C4)  S_BLOCK32: [0001:000890B6], Cb: 0000027B, (none)
 *           Parent: 00000220, End: 00000340
 * 
 * (0002DC)   S_BPREL32: [FFFFFFFC], Type:       T_INT4(0074), CullMode
 * 
 * (0002F4)   S_BLOCK32: [0001:0008912D], Cb: 000001D1, (none)
 *            Parent: 000002C4, End: 0000033C
 * 
 * (00030C)    S_LDATA32: [0002:00002108], Type:             0x1F73, DestBlend
 * (000324)    S_LDATA32: [0002:000020F8], Type:             0x1F73, SrcBlend
 * 
 * (00033C)   S_END
 * 
 * (000340)  S_END
 * 
 * (000344) S_END
 */

