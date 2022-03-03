#include "main.h"

/**
 *  _puts_recursion - Entry Point
 *  @s: Pointer
 *  Return: No line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
