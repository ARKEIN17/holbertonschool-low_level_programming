#include "main.h"

/**
 * clear_bit - Function
 * @n: Variable
 * @index: index starting in 0
 * i: Iterator
 * b: index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int b;

	if (index > 64)
	{
		return (-1);
	}
	b = index;

	for (i = 1; b > 0; i *= 2, b--)
		;
	if ((*n >> index) & 1)
	{
		*n -= i;
	}
	return (1);
}
