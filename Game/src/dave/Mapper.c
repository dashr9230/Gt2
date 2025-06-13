
// File: C:\CodePrj\Gt2\Game\src\dave\Mapper.c

/*
 * ModName: .\Debug\Mapper.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\Game\Debug\Mapper.obj
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
 * (000318) S_GDATA32: [0003:01255DF0], Type:             0x1ACA, MESH_Header
 * (000334) S_GDATA32: [0003:00C9A980], Type:             0x1656, VidCtrl
 * (00034C) S_GDATA32: [0003:0121EFC0], Type:             0x1A2B, Mouse
 */

/*
 * (00008C) S_GPROC32: [0001:000168C0], Cb: 000000E1, Type:             0x1CCF, Mapper_GetMousePos
 *          Parent: 00000000, End: 00000110, Next: 00000114
 *          Debug start: 00000006, Debug end: 000000DD
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:  T_32PREAL32(0440), x
 * (0000D8)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), y
 * (0000E8)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), mousey
 * (0000FC)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), mousex
 * 
 * (000110) S_END
 */
void Mapper_GetMousePos()
{
	// TODO: Mapper_GetMousePos
}

/*
 * (000114) S_GPROC32: [0001:000169A1], Cb: 000000C7, Type:             0x1CD1, Mapper_WorldToScreen
 *          Parent: 00000000, End: 000001DC, Next: 000001E0
 *          Debug start: 00000006, Debug end: 000000C3
 *          Flags: Frame Ptr Present
 * 
 * (000150)  S_BPREL32: [00000008], Type:  T_32PREAL32(0440), lpwx
 * (000164)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), lpwz
 * (000178)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), lpsx
 * (00018C)  S_BPREL32: [00000014], Type:  T_32PREAL32(0440), lpsy
 * (0001A0)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), sclz
 * (0001B4)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), sclx
 * (0001C8)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), scale
 * 
 * (0001DC) S_END
 */
void Mapper_WorldToScreen()
{
	// TODO: Mapper_WorldToScreen
}

/*
 * (0001E0) S_GPROC32: [0001:00016A68], Cb: 000000CB, Type:             0x1CD1, Mapper_ScreenToWorld
 *          Parent: 00000000, End: 000002A8, Next: 000002AC
 *          Debug start: 00000006, Debug end: 000000C7
 *          Flags: Frame Ptr Present
 * 
 * (00021C)  S_BPREL32: [00000008], Type:  T_32PREAL32(0440), lpsx
 * (000230)  S_BPREL32: [0000000C], Type:  T_32PREAL32(0440), lpsy
 * (000244)  S_BPREL32: [00000010], Type:  T_32PREAL32(0440), lpwx
 * (000258)  S_BPREL32: [00000014], Type:  T_32PREAL32(0440), lpwz
 * (00026C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), sclz
 * (000280)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), sclx
 * (000294)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), scale
 * 
 * (0002A8) S_END
 */
void Mapper_ScreenToWorld()
{
	// TODO: Mapper_ScreenToWorld
}

/*
 * (0002AC) S_GPROC32: [0001:00016B33], Cb: 000000C4, Type:             0x1BF9, Mapper_DrawMouse
 *          Parent: 00000000, End: 00000314, Next: 00000000
 *          Debug start: 00000006, Debug end: 000000C0
 *          Flags: Frame Ptr Present
 * 
 * (0002E4)  S_BPREL32: [00000008], Type:     T_REAL32(0040), x
 * (0002F4)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), y
 * (000304)  S_BPREL32: [FFFFFFD0], Type:             0x1ABB, tri
 * 
 * (000314) S_END
 */
void Mapper_DrawMouse()
{
	// TODO: Mapper_DrawMouse
}

