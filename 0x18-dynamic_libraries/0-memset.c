#include "main.h"

/**
 * _memset - Entry Point
 * @s: Pointer
 * @b: Variable
 * @n: Variable
 * a: Variable
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
