#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - like a printf
 * @format: the format to print
 * num_c = number of %c that apears in format
 * str_prt =  string to print when aply
 * sizef = size of format
 * Return: the lenght of the output
 */
int _printf(const char *format, ...)
{
	int sizef;
	/*int num_c;
	char *str_prt;
	int sizef;
	va_list list;

	sizef = _strlen(format);
	num_c = look(format);

	if (num_c == 0)
		_putchar(format, sizef);
	else if (num_c > 0)
	{
		va_start(list, format);
		str_ptr = malloc(sizef - num_c);*/
	sizef = count(format);
	printf("%d", sizef);
}
void func(va_list vlist)
{
	printf("%d", va_arg(vlist, int));
}
void funs(va_list vlist)
{
	printf("%d", va_arg(vlist, int));
}
void fund(va_list vlist)
{
	printf("%d", va_arg(vlist, int));
}
