#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Funtion duplicate
 *@str: Pointer
 *a: my pointer
 *b: Variable
 *c: Variable
 *Return: a
 */

char *_strdup(char *str)
{
	char *a;
	int b, c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
		;
	a = malloc((b + 1) * sizeof(*a));

	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < b; c++)
	{
		a[c] = str[c];
	}
	return (a);
}
