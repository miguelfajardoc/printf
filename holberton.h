#ifndef _PRINTF
#define _PRINTF
#include <stdarg.h>
int func(int f, va_list vlist, va_list vlist2, char* s);
int funs(int f, va_list vlist, va_list vlist2, char* s);
int fund(int f, va_list vlist, va_list vlist2, char* s);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
typedef struct typs
{
	char tip;
	int pos;
	int (*f)(int, va_list, va_list, char*);
} postipos;
typedef struct tip
{
	char tipo;
	int (*s)(int, va_list, va_list, char*);
} tiposf;
void paste(char* str_ptr, postipos *position, const char * format, int numf,
	   va_list vlist, va_list vlist2);
int count(const char *format);
int look(const char *fomat, postipos * position);
int _printf(const char *format, ...);
#endif
