
#ifndef _GT2_ENGINE_LOGFILE_H
#define _GT2_ENGINE_LOGFILE_H

short OpenMeALogfile(char* filename);
void CloseLogfile();
void LogFile(char* FormatString, ...);

void NET_DumpLogFile();

#endif // _GT2_ENGINE_LOGFILE_H
