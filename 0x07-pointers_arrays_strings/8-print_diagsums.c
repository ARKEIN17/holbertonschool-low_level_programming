#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry Point
 * @a: Pointer
 * @size: Variable
 * Return: No line
 */

void print_diagsums(int *a, int size)
{
	int b;
	int sum = 0;
	int sum1 = 0;

	for (b = 0; b < size * size; b = b + size + 1)
	{
		sum = sum + a[b];
	}
	printf("%d, ", sum);
	for (b = size - 1; b < size * size - 1; b = b + size - 1)
	{
		sum1 = sum1 + a[b];
	}
	printf("%d\n", sum1);
}
