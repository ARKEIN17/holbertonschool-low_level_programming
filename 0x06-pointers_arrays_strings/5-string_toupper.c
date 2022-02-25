#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Entry Point
 * @a: Point
 * b: Variable
 * Return: a
 */

char *string_toupper(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			a[b] -= 32;
		}
	}
	return (a);
}
