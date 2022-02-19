#include "main.h"
/**
 * print_line - Entry Point
 * a: Variable
 * @n: Variable
 * Return: New Line
 */
void print_line(int n)
{
	int a;

	a = 0;

	while (n > a)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
