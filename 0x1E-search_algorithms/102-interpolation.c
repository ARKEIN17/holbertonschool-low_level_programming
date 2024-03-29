#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - interpolation_search
 *
 * @array: index array
 * @size: size of array
 * @value: value to be found
 * Return: pos or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos = 0, high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = low + (
			((double)(high - low) / (array[high] - array[low])) * (value - array[low])
			);

		if (array[high] < value)
			break;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
	}

	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
