#ifndef _EXCEPTION_H
#define _EXCEPTION_H
///*
typedef struct Exception exception;
struct exception{
	int errorCode;
	char* errorMsg;
};


void throwError(int errorCode, char *format, ...);
void freeError(Exception *ex);
//*/
#endif // _EXCEPTION_H
