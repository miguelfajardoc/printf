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
 * flg = the flag to functions
 * strret = pointer that return the content of va_args
 * Return: the lenght of the output
 */
int _printf(const char *format, ...)
{
	int sizef, num_f, size_args = 0;
	postipos *position;
	va_list vlist;
	va_list vlist2;
	int flg = 0;
	char *str_prt, *strret;
	int i = 0;
	int sizet;

	va_start(vlist, format);
	sizef = _strlen(format);
	num_f = count(format);
	position = malloc (sizeof(postipos) * num_f);

	printf("%p\n", position);
	if (position == NULL)
	{
		printf("malloc error");
		return (1);
	}
	va_copy(vlist2, vlist);
	look(format, position);
	printf("position[%d].tip:%c\n", 0, position[0].tip);
	printf("position[%d].pos:%d\n", 0, position[0].pos);
	for (i = 0; i< num_f; i++)
	{
		size_args +=  position[i].f(flg, vlist, vlist2, strret);
	}
	printf("size_args:%d\n", size_args);
	sizet = sizef + size_args - (2 * num_f) + 1;
	printf("sizet:%d\n", sizet);
	str_prt = malloc(sizeof(char) * sizet);
	if (position == NULL)
	{
		printf("malloc error");
		return (1);
	}
	paste(str_prt, position, format, num_f, vlist, vlist2);
	printf("%s", str_prt);
	free(position);
	free(str_prt);
	va_end(vlist);
	va_end(vlist2);
	return (sizet);

}
int fund(int f, va_list vlist, va_list vlist2, char* s)
{
	printf("%d%d", f, va_arg(vlist, int));
	s = va_arg(vlist2, char*);
	return (0);
}
