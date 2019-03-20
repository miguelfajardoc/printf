#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_d - print digits
 *
 *@vlist
 *Return: count
 */
int print_d(va_list vlist)
{
	int output;
	int count;

	output = va_arg(vlist, int);
	count = convertd(output);
	return (count);
}
