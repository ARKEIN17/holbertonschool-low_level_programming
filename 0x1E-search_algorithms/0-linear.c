#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 *
 * H: iterater
 * @array: pointer to array
 * @size: size of array
 * @value: value to be found
 * Return: the index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t H = 0;

	while (array && H < size)
	{
		printf("Value checked array[%ld] = [%d]\n", H, array[H]);

		if (array[H] == value)
		{
			return (H);
		}
		H++;
	}
	return (-1);
}
