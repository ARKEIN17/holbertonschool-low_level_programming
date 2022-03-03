#include "main.h"
#include <stdio.h>

/**
 * square - my funtion
 * @n: variable
 * @a: Variable
 * Return: number square
 */
int square(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (square(n, a + 1));
}

/**
 * _sqrt_recursion - Entry Point
 * @n: int
 * Return: Result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(n, 1));
}
