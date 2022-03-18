#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copy memorie
 * @dest: Destiny of copy
 * @src: Pointer
 * @n: Variable
 * a: Varaible
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;

	for (a = 0; n > a; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
