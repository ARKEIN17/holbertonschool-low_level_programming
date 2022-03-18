#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - entry point
 * @dest: Variable
 * @src: variable
 * a: variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = src[a];
	return (dest);
}
