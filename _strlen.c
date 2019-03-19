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

	a = 0;
	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
