#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * count - count the number of arguments
 * @format: the string to check
 * Return: the number of arguments
 */
int count(const char *format)
{
	int count = 0;
	int i, j;
	tiposf tipos[] = {
		{ 'c', func},
		{ 'd', fund},
		{ 's', funs}
	};
	for (i = 0; format[i]; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (format[i] == '%' && format[i + 1] == tipos[j].tipo)
				count++;
		}
	}
	return (count);
}
