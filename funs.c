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
int funs(int f, va_list vlist, __attribute__((unused)) va_list vlist2, char *s)
{
	int i = 0;

	if (f == 0)
	{
		s = va_arg(vlist, char *);
		if (s == NULL)
			s = "(null)";

		i = _strlen(s);
		return (i);
	}
	else
	{
		return (i);
	}
}
/**
 *funss - the function for strings
 *
 *@vlist2: the copy
 *@strr: pointer leng
 *Return: strr
 */
char *funss(char *strr, va_list vlist2)
{
	strr = va_arg(vlist2, char *);
	if (strr == NULL)
		strr = "(null)";
	return (strr);
}
