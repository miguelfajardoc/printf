#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * paste - paste the args and format
 *
 */
void paste(char *str_ptr, postipos *position, const char * format, int numf,
	   va_list vlist, va_list vlist2)
{
	int s = 0, i = 0, j = 0;
	int flg = 1;
	char charr[2];
	char strret[10];
	int length;

	while(*(format + i))
	{
		printf("i: %d\n", i);
		while (j < numf)
		{
			if(i == position[j].pos)
			{
				printf("i2: %d\n", i);
				if(position[j].tip == 'c')
				{
					printf("ic: %d\n", i);
					position[j].f(flg, vlist, vlist2, charr);
					str_ptr[s] = charr[0];
					j++;
					i++;
				}
				else
				{
					printf("is: %d\n", i);
					length = position[j].f(flg, vlist, vlist2,
							       strret);
					printf("length:%d\n", length);
					printf("strret:%d\n", *strret);
					printf("strret:%s\n", strret);
					_strcpy(&str_ptr[s], strret);
					printf("is2: %d\n", i);
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
		str_ptr[s] = format[i];
		i++;
		s++;
	}
	
	str_ptr[s] = '\0';
}
