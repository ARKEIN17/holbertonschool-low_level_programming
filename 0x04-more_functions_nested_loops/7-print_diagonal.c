#include "main.h"

/**
 * print_diagonal - Entry Point
 * @n: Variable
 * a: Variable
 * b: Variable
 * Raturn: No
 */
void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;

	while (n > 0)
	{
		b = a;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar(92);
		_putchar('\n');
		a++;
		n--;
	}
	if (a < 1)
	{
		_putchar('\n');
	}
}
