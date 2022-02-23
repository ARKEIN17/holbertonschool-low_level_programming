#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry Point
 * @str: Variable
 * a: Variable
 * Return: No line
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
