
#ifndef _GT2_GAMEPATH_H
#define _GT2_GAMEPATH_H

void GPath_SetDefaultPaths();
char* GPATH_FindFile(char* Path, char* Name, char* Ext);
int GPATH_DoesFileExist(char* Drive, char* Path, char* Filename, char* extension);

#endif // _GT2_GAMEPATH_H
