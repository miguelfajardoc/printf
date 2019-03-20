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
int funs(int f, va_list vlist, __attribute__((unused)) va_list vlist2,
	 __attribute__((unused))char *s)
{
	int i = 0;

	if (f == 0)
	{
		i = _strlen(va_arg(vlist, char *));
		return (i);
	}
	else
	{
		return (i);
	}
}
/**
 *funs - the function for strings
 *
 *@vlist2: the copy
 *@strr: pointer leng
 *Return: strr
 */
char *funss(char *strr, va_list vlist2)
{
	strr = va_arg(vlist2, char *);
	return (strr);
}
