#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *convertd - convert a int to a string
 *
 *@num: number to convert
 *Return: 0
 */
int convertd(int num)
{
	int i, rem, len = 0, n;
	char *str[10];

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
	printf("%s", str);
	return (str);
}
