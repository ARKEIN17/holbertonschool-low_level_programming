#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Funtion free
 * @d: pointer
 * Return: Noline
 */

void free_dog(dog_t *d)
{
	dog_t *my_dog = d;

	if (d)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
	}
}
