#ifndef _PRINTF
#define _PRINTF
#include <stdarg.h>
void func(va_list vlist);
void funs(va_list vlist);
void fund(va_list vlist);
typedef struct typs
{
	char tip;
	int pos;
	void (*f)(va_list);
} postipos;
typedef struct tip
{
	char tipo;
	void (*s)(va_list);
} tiposf;
int count(const char *format);
int look(const char *fomat, postipos * position);
int _printf(const char *format, ...);
#endif
