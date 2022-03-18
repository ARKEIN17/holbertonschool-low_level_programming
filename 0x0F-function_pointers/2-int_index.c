#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Function
 * @array: int
 * @size: Size of Array
 * @cmp: Pointer to function
 * a: Variable
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
