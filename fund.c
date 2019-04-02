#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * fund - the int
 * @f: the format to print
 * @vlist: the list
 * @vlist2: the copy of the list
 * @s: the string
 * Return: the length
 */
int fund(int f, va_list vlist, va_list vlist2, char **s)
{
	int i = 0;
	int output;

	if (f == 0)
	{
		output = va_arg(vlist, int);
		*s = convertd(output, *s);
		i = _strlen(*s);
		return (i);
	}
	else
	{
		output = va_arg(vlist2, long int);
		*s = convertd(output, *s);
		i = _strlen(*s);
		return (i);
	}
}
