#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *func - the function asigned for the char
 *
 *@f: flag
 *@vlist: the list
 *@vlist2: the copy
 *@charr: pointer
 *Return: 0 or 1
 */

int func(int f, va_list vlist, va_list vlist2, char **charr)
{
	char elchar[2];

	if (f == 0)
	{
		va_arg(vlist, int);
		return (1);
	}
	else
	{
		elchar[0] = va_arg(vlist2, int);
		elchar[1] = '\0';
		*charr = elchar;
		return (1);
	}
}
