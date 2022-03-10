#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Funtion concatenar
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * a: Pointer to return
 * b: path variable
 * c: path variable
 * d: concatenate variable
 * e: concatenate variable
 * Return: pointer a
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int b, c, d, e;

	if (s1 == NULL)
	{
		s1 = "";

		if (s2 == NULL)
		{
			s2 = "";
		}
		for (b = 0; s1[b] != '\0'; b++)
			;
		for (c = 0; s2[c] != '\0'; c++)
			;
		a = malloc((b * sizeof(*s1)) + (c * sizeof(*s2)) + 1);

		if (a == NULL)
		{
			return (NULL);
		}
		for (d = 0, e = 0; d < (b + c + 1); d++)
			if (d < b)
			{
				a[d] = s1[d];
			}
			else
			{
				a[d] = s2[e++];
			}
		return (a);
	}
