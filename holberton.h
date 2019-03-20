#ifndef _PRINTF
#define _PRINTF
#include <stdarg.h>
void put_string(char *str, int sizet);
int func(int f, va_list vlist, va_list vlist2, char *s);
int funs(int f, va_list vlist, va_list vlist2, char *s);
int fund(int f, va_list vlist, va_list vlist2, char *s);
char *funss(char *strr, va_list vlist2);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
char *convertd(int num, char *s);
char *print_d(int f, va_list vlist, va_list vlist2, char *s);
/**
 * struct typs - the structure of type, position and function asociate
 * @tip: tipo
 * @pos: position of typ
 * @f: pointer to the asociate function
 */
typedef struct typs
{
	char tip;
	int pos;
	int (*f)(int, va_list, va_list, char*);
} postipos;
/**
 * struct tip - structure that allocate the asociate function to the tipo
 * @tipo: tipo
 * @s: the function pointer
 */
typedef struct tip
{
	char tipo;
	int (*s)(int, va_list, va_list, char*);
} tiposf;
void paste(char *str_ptr, postipos *position, const char *format, int numf,
	   va_list vlist, va_list vlist2);
int count(const char *format);
int look(const char *fomat, postipos *position);
int _printf(const char *format, ...);
#endif
