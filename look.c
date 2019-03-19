#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
/**
 */

int look(const char *format, postipos *position)
{
	int i;
	int j;
	int k = 0;
	int count = 0;

	tiposf tf[] = {
		{'c', func},
		{'s', funs},
		{'d', fund},
	};

	for(i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 3; j++)
			{
				if (format[i+1] == tf[j].tipo)
				{
					position[k].tip = tf[j].tipo;
					position[k].pos = i;
					position[k].f = tf[j].s;
					count++;
					k++;
				}
			}
		}
	}

	return (count);
}
