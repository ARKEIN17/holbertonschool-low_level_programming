#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry Point
 * @s: Variable
 * a: Variable
 * Return: Variable a
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;

	return (a);
}
