#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Funtion
 * @x: int
 * @y: int
 * Return: p
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	p = x * _pow_recursion(x, (y - 1));
	return (p);
}
