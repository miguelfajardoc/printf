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
	char charr[2];
	char *strret;
	int length;

	while (*(format + i))
	{
		while (j < numf)
		{
			if (i == position[j].pos)
			{
				if (position[j].tip == 'c')
				{
					position[j].f(flg, vlist, vlist2, charr);
					str_ptr[s] = charr[0];
					j++;
					i++;
				}
				else
				{
					if (position[j].tip == 's')
						strret = funss(strret, vlist2);
					else
						strret = print_d(flg, vlist,
								 vlist2, strret);
					_strcpy((str_ptr + s), strret);
					length = _strlen(strret);
					s = s + length - 1;
					j++;
					i++;
				}
			}
			else
				str_ptr[s] = format[i];
			i++, s++;
		}
		str_ptr[s] = format[i];
		i++, s++;
	}
	str_ptr[s] = '\0';
}
