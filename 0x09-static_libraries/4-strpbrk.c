#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry Point
 * @s: Pointer
 * @accept: Variable
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	for ( ; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (NULL);
}
