#ifndef _PRINTF
#define _PRINTF
typedef struct t
{
	char tipo;
	int pos;
} tipos;
int look(const char *fomat);
int _printf(const char *format, ...);
#endif
