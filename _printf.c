#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
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
	int sizef, num_f, size_args = 0, i = 0, flg = 0, sizet;
	postipos *position;
	va_list vlist, vlist2;
	char *str_prt, *strret = NULL;

	if (format == NULL)
		return (-1);
	sizef = _strlen(format);
	if (sizef == 1 && format[0] == '%')
		return (-1);
	va_start(vlist, format);
	num_f = count(format);
	position = malloc(sizeof(postipos) * num_f);
	if (position == NULL)
	{
		free(position);
		return (-1);
	}
	va_copy(vlist2, vlist);
	look(format, position);
	for (i = 0; i < num_f; i++)
	{
		size_args +=  position[i].f(flg, vlist, vlist2, &strret);
		if (position[i].tip == 'd' || position[i].tip == 'i')
			free(strret);
	}
	sizet = sizef + size_args - (2 * num_f);
	str_prt = malloc(sizeof(char) * sizet);
	if (str_prt == NULL)
	{
		free(position), free(str_prt);
		return (-1);
	}
	paste(str_prt, position, format, num_f, vlist, vlist2);
	put_string(str_prt, sizet);
	free(position), free(str_prt);
	va_end(vlist);
	return (sizet);
}
