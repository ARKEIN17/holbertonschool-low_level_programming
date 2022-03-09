#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Funtion for array
 * @size: placer of memory
 * @c:  Variable
 * Return: a
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(*a));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
	return (a);
}
