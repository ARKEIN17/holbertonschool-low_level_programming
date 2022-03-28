#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: of grid
 * @height: of grid
 * Return: grid or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **cuadri;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	cuadri = malloc(height * sizeof(int *));

	if (cuadri == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		cuadri[i] = malloc(width * sizeof(int));

		if (cuadri[i] == NULL)
		{
			while (i >= 0)
			{
				free(cuadri[i]);
				i--;
			}
			free(cuadri);

			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			cuadri[i][j] = 0;
		}
	}
	return (cuadri);
}
