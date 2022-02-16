#include "main.h"
/**
 * _abs - Entry Point
 * @c: Variables
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
	_putchar('\n');
}
