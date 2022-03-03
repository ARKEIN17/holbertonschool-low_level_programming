#include "main.h"
#include <stdio.h>

/**
 * num_prime - my funtion
 * @a: Variable
 * @b: Variable
 * Return: result
 */
int num_prime(int a, int b)
{
	if ((a % b == 0 && b < a) || a < 2)
	{
		return (0);
	}
	else if (a % b == 0 && b == a)
	{
		return (1);
	}
	else
	{
		return (num_prime(a, b + 1));
	}
}

/**
 * is_prime_number - Entry Point
 * @n: Int
 * Return: answer
 */

int is_prime_number(int n)
{
	return (num_prime(n, 2));
}
