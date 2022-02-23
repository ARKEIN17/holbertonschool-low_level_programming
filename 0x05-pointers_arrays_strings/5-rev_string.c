#include "main.h"

/**
 * rev_string - entry point
 * @s: Variable
 * a: Variable
 * b: Variable
 * Return: No line
 */

void rev_string(char *s)
{
	int a, b;
	char str[1000];

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		str[a] = s[a];
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		s[a] = str[b];
		b++;
		a--;
	}
}
