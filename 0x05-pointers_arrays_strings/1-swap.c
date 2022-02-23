#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry Point
 * @a: Variable
 * @b: Variable
 * i: Variable
 * Return: no line
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;
	*b = i;
}
