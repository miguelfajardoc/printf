#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 *funs - the function for strings
 *
 *@f: flag
 *@vlist: the list
 *@vlist2: the copy
 *@s: pointer leng
 *Return: i
 */
int funs(int f, va_list vlist, va_list vlist2, char **s)
{
	int i = 0;

	if (f == 0)
	{
		*s = va_arg(vlist, char *);
		if (*s == NULL)
			*s = "(null)";
		i = _strlen(*s);
		return (i);
	}
	else
	{
		*s = va_arg(vlist2, char *);
		if (*s == NULL)
			*s = "(null)";
		i = _strlen(*s);
		return (i);
	}
}
