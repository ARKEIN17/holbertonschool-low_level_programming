#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function copy
 * @name: pointer
 * @age: Variable
 * @owner: pointer
 * Return: No Line
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;
	char *copyname, *copyowner;
	int x = 0, y = 0, z;

	my_dog = malloc(sizeof(struct dog));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	while (*(name + x) != '\0')
		x++;
	while (*(owner + y) != '\0')
		y++;
	copyname = malloc(sizeof(char) * (x + 1));
	if (copyname == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	copyowner = malloc(sizeof(char) * (y + 1));
	if (copyowner == NULL)
	{
		free(copyname);
		free(my_dog);

		return (NULL);
	}
	for (z = 0; z <= x; z++)
	{
		*(copyname + z) = *(name + z);
	}
	for (z = 0; z <= y; z++)
	{
		*(copyowner + z) = *(owner + z);
	}
	my_dog->name = copyname;
	my_dog->age = age;
	my_dog->owner = copyowner;
	return (my_dog);
}
