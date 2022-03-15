#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init a variable
 * @d: Pointer
 * @name: Variale string
 * @age: Variable int
 * @owner: Variable string
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
