#include "main.h"

/**
 * flip_bits - Function
 * @n: Variable
 * @m: Variable
 * i: Iterator
 * index: index
 * Return: index
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 0;
	unsigned long int i;

	i = n ^ m;

	while (i != 0)
	{
		if ((i & 1) == 1)
			index++;
		i = i >> 1;
	}
	return (index);
}
