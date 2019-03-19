#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int funs(int f, va_list vlist, va_list vlist2,char *s)
{
	int i = 0;

	if (f == 0)
	{
		i = _strenlen(va_arg(vlist, char *));
		return(i);
	}
	else 
	{
		s = va_arg(vlist2, char *);
		s = va_arg(vlist2, char *);
		i = _strlen(s);
		return(i);
	}
}
