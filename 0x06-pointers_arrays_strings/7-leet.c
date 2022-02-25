#include "main.h"
#include <stdio.h>

/**
 * leet - Entry Point
 * @s: Pointer
 * a: Variable
 * b: Variable
 * Return: a
 */
char *leet(char *s)
{
	int a;
	int b;
	char c[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (a = 0; s[a]; a++)
	{
		for (b = 0; c[b]; b++)
			if (s[a] == c[b])
				s[a] = c2[b];
	}
	return (s);
}
