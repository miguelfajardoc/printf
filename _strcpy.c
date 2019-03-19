#include "holberton.h"
/**
 *_strcpy - copy the string
 *
 *@dest: the pointer
 *@src: number of the elements in the array
 *
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	/*dest[a] = '\0';*/
	return (dest);
}
