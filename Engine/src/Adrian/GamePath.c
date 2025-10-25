
// File: C:\CodePrj\Gt2\Engine\src\Adrian\GamePath.c

/*
 * ModName: .\Debug\GamePath.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\GamePath.obj
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
 */

#include <stdio.h>

#include "GamePath.h"

/*
 * (0003CC) S_LDATA32: [0003:0091E0A8], Type:             0x153F, GPATH_Install
 * (0003E8) S_LDATA32: [0003:0091E2A8], Type:             0x153F, GPATH_CD
 * (000400) S_LDATA32: [0003:0091E4A8], Type:             0x1E96, GPATH_Filename
 */
char GPATH_Install[512];
char GPATH_CD[512];
char GPATH_Filename[1024];

/*
 * (000090) S_GPROC32: [0001:00082E30], Cb: 00000025, Type:             0x1001, GPath_SetDefaultPaths
 *          Parent: 00000000, End: 000000D0, Next: 000000D4
 *          Debug start: 00000003, Debug end: 00000023
 *          Flags: Frame Ptr Present
 * 
 * (0000D0) S_END
 */
void GPath_SetDefaultPaths()
{
	GPATH_CD[0] = '\0';
	strcpy(GPATH_Install, "CDImage\\");
}

/*
 * (0000D4) S_GPROC32: [0001:00082E55], Cb: 0000004F, Type:             0x1FCC, GPATH_FindFile
 *          Parent: 00000000, End: 00000144, Next: 00000148
 *          Debug start: 00000003, Debug end: 0000004D
 *          Flags: Frame Ptr Present
 * 
 * (00010C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (000120)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Name
 * (000134)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), Ext
 * 
 * (000144) S_END
 */
char* GPATH_FindFile(char* Path, char* Name, char* Ext)
{
	if (GPATH_DoesFileExist(GPATH_Install, Path, Name, Ext))
		return GPATH_Install;
	else if (GPATH_DoesFileExist(GPATH_CD, Path, Name, Ext))
		return GPATH_CD;

	return 0;
}

/*
 * (000148) S_LPROC32: [0001:00082EA4], Cb: 000000CF, Type:             0x1FCE, GPATH_DoesFileExist
 *          Parent: 00000000, End: 00000200, Next: 00000204
 *          Debug start: 00000009, Debug end: 000000CB
 *          Flags: Frame Ptr Present
 * 
 * (000184)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Drive
 * (000198)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Path
 * (0001AC)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), Filename
 * (0001C4)  S_BPREL32: [00000014], Type:   T_32PRCHAR(0470), extension
 * (0001DC)  S_BPREL32: [FFFFFBFC], Type:             0x1834, fh
 * (0001EC)  S_BPREL32: [FFFFFC00], Type:             0x1E96, Buffer
 * 
 * (000200) S_END
 */
int GPATH_DoesFileExist(char* Drive, char* Path, char* Filename, char* extension)
{
	FILE* fh;
	char Buffer[1024];

	sprintf(Buffer, "%s", Drive);
	if (Path)
		sprintf(Buffer, "%s%s", Buffer, Path);
	if (Filename)
		sprintf(Buffer, "%s%s", Buffer, Filename);
	if (extension)
		sprintf(Buffer, "%s%s", Buffer, extension);

	fh = fopen(Buffer, "rb");
	if (fh)
	{
		fclose(fh);
		return 1;
	}
	return 0;
}

/*
 * (000204) S_GPROC32: [0001:00082F73], Cb: 000000AB, Type:             0x1FCC, GPATH_BuildFullPathToFile
 *          Parent: 00000000, End: 00000294, Next: 00000298
 *          Debug start: 00000004, Debug end: 000000A7
 *          Flags: Frame Ptr Present
 * 
 * (000248)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (00025C)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Name
 * (000270)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), Ext
 * (000280)  S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), Drive
 * 
 * (000294) S_END
 */
char* GPATH_BuildFullPathToFile(char* Path, char* Name, char* Ext)
{
	char* Drive;

	Drive = GPATH_FindFile(Path, Name, Ext);
	if (Drive)
	{
		sprintf(GPATH_Filename, "%s", Drive);
		if (Path)
			sprintf(GPATH_Filename, "%s%s", GPATH_Filename, Path);
		if (Name)
			sprintf(GPATH_Filename, "%s%s", GPATH_Filename, Name);
		if (Ext)
			sprintf(GPATH_Filename, "%s%s", GPATH_Filename, Ext);
		
		return GPATH_Filename;
	}

	return 0;
}

/*
 * (000298) S_GPROC32: [0001:0008301E], Cb: 00000048, Type:             0x1FCF, GPATH_FindTexture
 *          Parent: 00000000, End: 00000310, Next: 00000314
 *          Debug start: 00000004, Debug end: 00000044
 *          Flags: Frame Ptr Present
 * 
 * (0002D4)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Path
 * (0002E8)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Name
 * (0002FC)  S_BPREL32: [FFFFFFFC], Type:   T_32PRCHAR(0470), Result
 * 
 * (000310) S_END
 */
void GPATH_FindTexture()
{
	// TODO: GPATH_FindTexture
}

/*
 * (000314) S_LPROC32: [0001:00083066], Cb: 0000006D, Type:             0x1FCC, GPATH_FindTex
 *          Parent: 00000000, End: 00000388, Next: 0000038C
 *          Debug start: 00000003, Debug end: 0000006B
 *          Flags: Frame Ptr Present
 * 
 * (00034C)  S_BPREL32: [00000008], Type:   T_32PRCHAR(0470), Drive
 * (000360)  S_BPREL32: [0000000C], Type:   T_32PRCHAR(0470), Path
 * (000374)  S_BPREL32: [00000010], Type:   T_32PRCHAR(0470), Name
 * 
 * (000388) S_END
 */
char* GPATH_FindTex(char* Drive, char* Path, char* Name)
{
	if (GPATH_DoesFileExist(Drive, Path, Name, ".DDS"))
		return Drive;
	else if (GPATH_DoesFileExist(Drive, Path, Name, ".MIP"))
		return Drive;
	else if (GPATH_DoesFileExist(Drive, Path, Name, ".TEX"))
		return Drive;

	return 0;
}

/*
 * (00038C) S_GPROC32: [0001:000830D3], Cb: 00000007, Type:             0x1F30, GPATH_VolatileData
 *          Parent: 00000000, End: 000003C8, Next: 00000000
 *          Debug start: 00000003, Debug end: 00000005
 *          Flags: Frame Ptr Present
 * 
 * (0003C8) S_END
 */
void GPATH_VolatileData()
{
	// TODO: GPATH_VolatileData
}

