#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, a = 0, b = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a < i)
	{
		ptr[a] = s1[a];
		a++;
	}
	while (b < j)
	{
		ptr[a] = s2[b];
		b++;
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
