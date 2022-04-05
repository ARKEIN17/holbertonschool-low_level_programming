#include "main.h"

/**
 * binary_to_uint - Function
 * @b: Pointer
 * num: Variable
 * i: Iterator
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == 0)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i]; i++)
	{
		num <<= 1;

		if (b[i] == '1')
		{
			num += 1;
		}
	}
	return (num);
}
