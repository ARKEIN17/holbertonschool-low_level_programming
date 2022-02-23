#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry Point
 * @a: Variable
 * @n: Variable
 * b: Variable
 * Return: No line
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b])
			;
		if (b != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
