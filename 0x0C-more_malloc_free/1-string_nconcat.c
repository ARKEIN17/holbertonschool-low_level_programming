#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * @n: variable
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int b;
	unsigned int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	b = 0;
	while (s1[b] != '\0')
		b++;
	a = malloc(sizeof(char) * (b + n + 1));

	if (a == NULL)
		return (NULL);
	b = c = 0;
	while (s1[b] != '\0')
	{
		a[b] = s1[b];
		b++;
	}
	while (c < n && s2[c] != '\0')
	{
		a[b] = s2[c];
		b++, c++;
	}
	a[b] = '\0';
	return (a);
}
