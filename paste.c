#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * paste - paste the args and format
 * @str_ptr: the string to allocate the input to print
 * @position: the structure that allocates the tipes of imput and the position
 * in format
 * @format: the imput format
 * @numf: the number of %c, %s in format
 * @vlist: the list of args
 * @vlist2: the copy of vlist
 */
void paste(char *str_ptr, postipos *position, const char *format, int numf,
	   va_list vlist, va_list vlist2)
{
	int s = 0, i = 0, j = 0, flg = 1;
	char *strret;
	int length;

	while (*(format + i))
	{
		while (j < numf)
		{
			if (i == position[j].pos)
			{
				length = position[j].f(flg, vlist, vlist2
						       , &strret);
				_strcpy((str_ptr + s), strret);
				if (position[i].tip == 'd' ||
				    position[i].tip == 'i')
					free(strret);
				s = s + length - 1;
				j++;
				i++;
			}
			else
			{
				if (format[i] == '%' && format[i + 1] == '%')
					i++;
				else
					str_ptr[s] = format[i];
			}
			i++, s++;
		}
		if (format[i] == '%' && format[i + 1] == '%')
			i++;
		else
		{
			str_ptr[s] = format[i];
			i++, s++;
		}
	}
	str_ptr[s] = '\0';
}
