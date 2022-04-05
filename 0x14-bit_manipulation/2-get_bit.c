#include"main.h"
/**
 * get_bit - Function
 * @n: name variable
 * @index: index starting in 0
 * Return: -1 in case to wrong
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bys = 64;

	if (index <= bys)
	{
		return ((n >> index & 1) + 0);
	}

	return (-1);
}
