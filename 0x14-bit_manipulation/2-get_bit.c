#include"main.h"
/**
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bys = 64;

	if (index <= bys)
	{
		return((n >> index & 1) + 0);
	}

	return(-1);
}
