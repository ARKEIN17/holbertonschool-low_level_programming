#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry Point
 * @s: Pointer
 * @accept: Pointer
 * Return: c
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;
	int c = 0;

	for ( ; accept[a]; a++)
	{
		for (b = 0; s[b] != 32; b++)
		{
			if (accept[a] == s[b])
			{
				c++;
			}
		}
	}
	return (c);
}
