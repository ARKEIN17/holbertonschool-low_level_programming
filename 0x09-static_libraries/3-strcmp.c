#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare two strings
 * @s1: Pointer
 * @s2: Pointer
 * a: Variable
 * Return: Igualdad
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != 0; a++)
		;

	for (a = 0; s2[a] != 0; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
