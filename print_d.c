#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_d - print digits
 *@f: the flag
 *@vlist: list
 *@vlist2: copy list
 *Return: count
 */
char *print_d(int f, va_list vlist, va_list vlist2, char *s)
{
	int output;

	if (f == 0)
	{	output = va_arg(vlist, int);
		s = convertd(output, s);
		return (s);
	}
	else
	{
		output = va_arg(vlist2, int);
		s = convertd(output, s);
		return (s);
	}
	return (s);
}
