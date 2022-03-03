#include "main.h"
#include <stdio.h>

/**
 * factorial - Entry Point
 * @n: Pointer
 * Return: Factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
