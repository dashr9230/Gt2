
#ifndef _GT2_LOGFILE_H
#define _GT2_LOGFILE_H

short OpenMeALogfile(char* filename);
void CloseLogfile();
void LogFile(char* FormatString, ...);

void NET_LogInit();
void NET_LogFile(char* FormatString, ...);
void NET_LogSave(unsigned char* message);
void NET_DumpLogFile();

#endif // _GT2_LOGFILE_H
