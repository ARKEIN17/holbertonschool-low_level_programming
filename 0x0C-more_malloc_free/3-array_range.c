#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - range of array
 * @min: array minimo
 * @max: array maximo
 * a: pointer to min
 * b: path variable
 * Return: pointer a
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (max < min)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(*a));

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; max >= min; b++, min++)
	{
		a[b] = min;
	}
	return (a);
}
