
// File: C:\CodePrj\Gt2\Engine\src\D3dmath.c

/*
 * ModName: .\Debug\D3dmath.obj
 * 
 * (000004) Start search for segment 0x1 at symbol 0x8C(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\D3dmath.obj
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

#include <math.h>

#include <d3d9types.h>

/*
 * (0007CC) S_GDATA32: [0003:0007B920], Type:  T_32PREAL32(0440), MATH_SinTable
 * (0007E8) S_GDATA32: [0003:0007B924], Type:  T_32PREAL32(0440), MATH_CosTable
 * (000804) S_GDATA32: [0003:0007B928], Type:  T_32PUSHORT(0421), MATH_ArcTanTable
 */

/*
 * (00008C) S_GPROC32: [0001:000734A0], Cb: 000000AC, Type:             0x20C1, D3DVECTORNormalise
 *          Parent: 00000000, End: 0000011C, Next: 00000120
 *          Debug start: 00000006, Debug end: 000000A8
 *          Flags: Frame Ptr Present
 * 
 * (0000C8)  S_BPREL32: [00000008], Type:             0x1473, v
 * (0000D8)  S_BPREL32: [FFFFFFF0], Type:     T_REAL32(0040), vz
 * (0000E8)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), vy
 * (0000F8)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), vx
 * (000108)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), inv_mod
 * 
 * (00011C) S_END
 */
void D3DVECTORNormalise()
{
	// TODO: D3DVECTORNormalise
}

/*
 * (000120) S_GPROC32: [0001:0007354C], Cb: 00000063, Type:             0x20C3, D3DVECTORCrossProduct
 *          Parent: 00000000, End: 00000190, Next: 00000194
 *          Debug start: 00000003, Debug end: 00000061
 *          Flags: Frame Ptr Present
 * 
 * (000160)  S_BPREL32: [00000008], Type:             0x1473, lpd
 * (000170)  S_BPREL32: [0000000C], Type:             0x1473, lpa
 * (000180)  S_BPREL32: [00000010], Type:             0x1473, lpb
 * 
 * (000190) S_END
 */
D3DVECTOR* D3DVECTORCrossProduct(D3DVECTOR* lpd, D3DVECTOR* lpa, D3DVECTOR* lpb)
{
	lpd->x = lpa->y * lpb->z - lpa->z * lpb->y;
	lpd->y = lpa->z * lpb->x - lpa->x * lpb->z;
	lpd->z = lpa->x * lpb->y - lpa->y * lpb->x;

	return lpd;
}

/*
 * (000194) S_GPROC32: [0001:000735AF], Cb: 000000D9, Type:             0x20C4, MultiplyD3DMATRIX
 *          Parent: 00000000, End: 00000278, Next: 0000027C
 *          Debug start: 00000008, Debug end: 000000D3
 *          Flags: Frame Ptr Present
 * 
 * (0001D0)  S_BPREL32: [00000008], Type:             0x11DC, lpSrc1
 * (0001E4)  S_BPREL32: [0000000C], Type:             0x11DC, lpSrc2
 * (0001F8)  S_BPREL32: [00000010], Type:             0x11DC, lpDst
 * (00020C)  S_BPREL32: [FFFFFFE8], Type:      T_ULONG(0022), i
 * (00021C)  S_BPREL32: [FFFFFFEC], Type:  T_32PREAL32(0440), src2
 * (000230)  S_BPREL32: [FFFFFFF0], Type:  T_32PREAL32(0440), src1
 * (000244)  S_BPREL32: [FFFFFFF4], Type:  T_32PREAL32(0440), dest
 * (000258)  S_BPREL32: [FFFFFFF8], Type:      T_ULONG(0022), c
 * (000268)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), r
 * 
 * (000278) S_END
 */
void MultiplyD3DMATRIX()
{
	// TODO: MultiplyD3DMATRIX
}

/*
 * (00027C) S_GPROC32: [0001:00073688], Cb: 000000C6, Type:             0x20C6, D3DMATRIXInvert
 *          Parent: 00000000, End: 000002D4, Next: 000002D8
 *          Debug start: 00000003, Debug end: 000000C4
 *          Flags: Frame Ptr Present
 * 
 * (0002B4)  S_BPREL32: [00000008], Type:             0x11DC, d
 * (0002C4)  S_BPREL32: [0000000C], Type:             0x11DC, a
 * 
 * (0002D4) S_END
 */
void D3DMATRIXInvert()
{
	// TODO: D3DMATRIXInvert
}

/*
 * (0002D8) S_GPROC32: [0001:0007374E], Cb: 000000FA, Type:             0x20C8, D3DMATRIXSetRotation
 *          Parent: 00000000, End: 00000384, Next: 00000388
 *          Debug start: 00000006, Debug end: 000000F6
 *          Flags: Frame Ptr Present
 * 
 * (000314)  S_BPREL32: [00000008], Type:             0x11DC, lpM
 * (000324)  S_BPREL32: [0000000C], Type:             0x1473, lpD
 * (000334)  S_BPREL32: [00000010], Type:             0x1473, lpU
 * (000344)  S_BPREL32: [FFFFFFD8], Type:             0x11B1, u
 * (000354)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), t
 * (000364)  S_BPREL32: [FFFFFFE8], Type:             0x11B1, d
 * (000374)  S_BPREL32: [FFFFFFF4], Type:             0x11B1, r
 * 
 * (000384) S_END
 */
void D3DMATRIXSetRotation()
{
	// TODO: D3DMATRIXSetRotation
}

/*
 * (000388) S_GPROC32: [0001:00073848], Cb: 00000165, Type:             0x20CA, spline
 *          Parent: 00000000, End: 00000478, Next: 0000047C
 *          Debug start: 00000006, Debug end: 00000161
 *          Flags: Frame Ptr Present
 * 
 * (0003B8)  S_BPREL32: [00000008], Type:             0x1473, p
 * (0003C8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), t
 * (0003D8)  S_BPREL32: [00000010], Type:             0x1473, p1
 * (0003E8)  S_BPREL32: [00000014], Type:             0x1473, p2
 * (0003F8)  S_BPREL32: [00000018], Type:             0x1473, p3
 * (000408)  S_BPREL32: [0000001C], Type:             0x1473, p4
 * (000418)  S_BPREL32: [FFFFFFE0], Type:     T_REAL32(0040), m4
 * (000428)  S_BPREL32: [FFFFFFE4], Type:     T_REAL32(0040), m3
 * (000438)  S_BPREL32: [FFFFFFE8], Type:     T_REAL32(0040), m2
 * (000448)  S_BPREL32: [FFFFFFEC], Type:     T_REAL32(0040), m1
 * (000458)  S_BPREL32: [FFFFFFF0], Type:     T_REAL64(0041), t3
 * (000468)  S_BPREL32: [FFFFFFF8], Type:     T_REAL64(0041), t2
 * 
 * (000478) S_END
 */
void spline()
{
	// TODO: spline
}

/*
 * (00047C) S_GPROC32: [0001:000739AD], Cb: 00000070, Type:             0x20CC, MATH_RotatePoint
 *          Parent: 00000000, End: 00000528, Next: 0000052C
 *          Debug start: 00000003, Debug end: 0000006E
 *          Flags: Frame Ptr Present
 * 
 * (0004B4)  S_BPREL32: [00000008], Type:             0x11DC, MatRot
 * (0004C8)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (0004D8)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (0004E8)  S_BPREL32: [00000014], Type:     T_REAL32(0040), z
 * (0004F8)  S_BPREL32: [00000018], Type:  T_32PREAL32(0440), rx
 * (000508)  S_BPREL32: [0000001C], Type:  T_32PREAL32(0440), ry
 * (000518)  S_BPREL32: [00000020], Type:  T_32PREAL32(0440), rz
 * 
 * (000528) S_END
 */
void MATH_RotatePoint()
{
	// TODO: MATH_RotatePoint
}

/*
 * (00052C) S_GPROC32: [0001:00073A1D], Cb: 00000082, Type:             0x20CC, MATH_ApplyMatrix
 *          Parent: 00000000, End: 000005D8, Next: 000005DC
 *          Debug start: 00000003, Debug end: 00000080
 *          Flags: Frame Ptr Present
 * 
 * (000564)  S_BPREL32: [00000008], Type:             0x11DC, MatRot
 * (000578)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (000588)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (000598)  S_BPREL32: [00000014], Type:     T_REAL32(0040), z
 * (0005A8)  S_BPREL32: [00000018], Type:  T_32PREAL32(0440), rx
 * (0005B8)  S_BPREL32: [0000001C], Type:  T_32PREAL32(0440), ry
 * (0005C8)  S_BPREL32: [00000020], Type:  T_32PREAL32(0440), rz
 * 
 * (0005D8) S_END
 */
void MATH_ApplyMatrix()
{
	// TODO: MATH_ApplyMatrix
}

/*
 * (0005DC) S_GPROC32: [0001:00073A9F], Cb: 000000D4, Type:             0x20CC, MATH_ApplyProjMatrix
 *          Parent: 00000000, End: 0000069C, Next: 000006A0
 *          Debug start: 00000004, Debug end: 000000D0
 *          Flags: Frame Ptr Present
 * 
 * (000618)  S_BPREL32: [00000008], Type:             0x11DC, MatRot
 * (00062C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), x
 * (00063C)  S_BPREL32: [00000010], Type:     T_REAL32(0040), y
 * (00064C)  S_BPREL32: [00000014], Type:     T_REAL32(0040), z
 * (00065C)  S_BPREL32: [00000018], Type:  T_32PREAL32(0440), rx
 * (00066C)  S_BPREL32: [0000001C], Type:  T_32PREAL32(0440), ry
 * (00067C)  S_BPREL32: [00000020], Type:  T_32PREAL32(0440), rz
 * (00068C)  S_BPREL32: [FFFFFFFC], Type:     T_REAL32(0040), id
 * 
 * (00069C) S_END
 */
void MATH_ApplyProjMatrix()
{
	// TODO: MATH_ApplyProjMatrix
}

/*
 * (0006A0) S_GPROC32: [0001:00073B73], Cb: 00000111, Type:             0x1001, MATH_CreateTrigTables
 *          Parent: 00000000, End: 000006F0, Next: 000006F4
 *          Debug start: 00000006, Debug end: 0000010D
 *          Flags: Frame Ptr Present
 * 
 * (0006E0)  S_BPREL32: [FFFFFFFC], Type:      T_ULONG(0022), a
 * 
 * (0006F0) S_END
 */
void MATH_CreateTrigTables()
{
	// TODO: MATH_CreateTrigTables
}

/*
 * (0006F4) S_GPROC32: [0001:00073C84], Cb: 0000001C, Type:             0x1001, MATH_DestroyTrigTables
 *          Parent: 00000000, End: 00000734, Next: 00000738
 *          Debug start: 00000003, Debug end: 0000001A
 *          Flags: Frame Ptr Present
 * 
 * (000734) S_END
 */
void MATH_DestroyTrigTables()
{
	// TODO: MATH_DestroyTrigTables
}

/*
 * (000738) S_GPROC32: [0001:00073CA0], Cb: 00000187, Type:             0x20CD, MATH_ArcTan
 *          Parent: 00000000, End: 000007C8, Next: 00000000
 *          Debug start: 00000006, Debug end: 00000183
 *          Flags: Frame Ptr Present
 * 
 * (00076C)  S_BPREL32: [00000008], Type:     T_REAL32(0040), Opp
 * (00077C)  S_BPREL32: [0000000C], Type:     T_REAL32(0040), Adj
 * (00078C)  S_BPREL32: [FFFFFFF4], Type:     T_REAL32(0040), AbsAdj
 * (0007A0)  S_BPREL32: [FFFFFFF8], Type:     T_REAL32(0040), AbsOpp
 * (0007B4)  S_BPREL32: [FFFFFFFC], Type:       T_LONG(0012), angle
 * 
 * (0007C8) S_END
 */
void MATH_ArcTan()
{
	// TODO: MATH_ArcTan
}

