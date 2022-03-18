#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function print name
 * @name: pointer
 * @f: Pointer to function
 * Return: No Line
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
