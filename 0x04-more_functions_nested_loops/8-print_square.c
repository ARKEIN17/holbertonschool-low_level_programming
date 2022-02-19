#include "main.h"

/**
 * print_square - Entry Point
 * @size: Variable
 * a: Variable
 * b: Variable
 * Return: No
 */
void print_square(int size)
{
	int a;
	int b;

	a = 0;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar(35);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
