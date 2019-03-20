#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * put_string - print all
 * @str: the string to print
 * @sizet: the size of the string;
 *
 */
void put_string(char *str, int sizet)
{
	write(1, str, sizet);
}
