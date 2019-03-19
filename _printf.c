#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * _printf - like a printf
 * @format: the format to print
 * num_f = number of %c, %s o %d that apears in format
 * str_prt =  string to print when aply
 * sizef = size of format
 * size_args = the size of the args that is introduced
 * position = a pointer type struct postipos to save the allocation
 * type and function of the %args thar is introduced
 * iter = a symple iterator to call the functions
 * str_ptr = the pointer that allocates the string with the args to be printed
 * Return: the lenght of the output
 */
int _printf(const char *format, ...)
{
	int sizef, num_f, size_args = 0;
	postipos *position;
	va_list vlist;
	int iter;
	char *str_prt;

	sizef = _strlen(format);
	num_f = count(format);
	position = malloc (sizeof(postipos) * num_f);

	look(format, position);
	for (i = 0; i< num_f; i++)
	{
		size_args += position[i].f(vlist);
	}
	str_prt = malloc(sizeof(char) * (sizef + size_args - (2 * num_f)));
	/*printf("%c", position[0].tip);
	printf("%c", position[1].tip);
	printf("%c", position[2].tip);*/
/*
	sizef = _strlen(format);
	num_c = look(format);

	if (num_c == 0)
		_putchar(format, sizef);
	else if (num_c > 0)
	{
		va_start(list, format);
		str_ptr = malloc(sizef - num_c);*/
	
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
