#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 */

int func(int f, va_list vlist, va_list vlist2, array charr)
{
	if (f == 0)
	{
		va_arg (vlist, char);
		return(1)
	}
	else 
	{
		charr[0] = va_arg(vlist2, int);
		charr[1] = '\0'
		return(0)
	}
}
