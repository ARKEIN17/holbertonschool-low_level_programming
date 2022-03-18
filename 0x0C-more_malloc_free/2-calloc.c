#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Funtion Calloc
 * @nmemb: variable
 * @size: Variable
 * a: Pointer to size
 * b: Variable
 * Return: a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * size); b++)
	{
		a[b] = 0;
	}
	return (a);
}
