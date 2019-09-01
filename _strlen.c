#include "holberton.h"
/**
 * _strlen - function that returns the long of the string
 *
 *@s: is the pointer
 *
 *Return: the extension of the string
 */
int _strlen(const char *s)
{
	int a;
	int n = 0;

	a = 0;
	while (*(s + a) != '\0')
	{
		if (s[a] == '%' && s[a + 1] == '%')
		 	n++;
		a++;
	}
	return (a - n);
}
