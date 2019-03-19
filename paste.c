#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * paste - paste the args and format
 *
 */
void paste(char* str_ptr, postipos position, const char * format, int numf,
	   va_list vlist, va_list vlist2)
{
	int s, i, j = 0;
	int flg = 1;
	char charr[2];
	char *strret;
	int length;

	while(*(format + i))
	{
		while (j < numf)
		{
			if(i == position[j].pos)
			{
				if(position[j].tip == 'c')
				{
					position[j].f(flg, vlist, vlist2, charr);
					str_ptr[s] = charr[0];
					j++;
					i++;
				}
				else
				{
					length = position[j].f(flg, vlist, vlist2,
							       strret);
					_strcpy(str_ptr + s, strret);
					s = s + length - 1;
					j++;
					i++;
				}
			}
			else
				str_ptr[s] = format[i];
			i++;
			s++;
		}
	}
	str_prt[s] = '\0';
}
