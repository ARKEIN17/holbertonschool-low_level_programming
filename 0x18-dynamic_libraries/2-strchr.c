#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @s: Pointer
 * @c: Variable
 * Return: s + 2
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for ( ; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (NULL);
}
