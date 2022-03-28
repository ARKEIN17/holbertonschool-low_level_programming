#include "main.h"

/**
 * argstostr - that concatenates all the arguments of your program
 * @ac: integer
 * @av: doble pointer character
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, longitud;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	longitud = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			longitud++;
		}
	}
	ptr = malloc((longitud + ac + 1) * sizeof(char));

	longitud = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[longitud] = av[i][j];
			longitud++;
		}
		ptr[longitud] = '\n';
		longitud++;
	}
	return (ptr);
}
