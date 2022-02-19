#include "main.h"

/**
 * print_most_numbers - Print Numbers
 * a: Variable
 * Return: no
 */
void print_most_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
