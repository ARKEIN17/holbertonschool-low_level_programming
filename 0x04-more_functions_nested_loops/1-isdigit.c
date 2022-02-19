#include "main.h"
/**
 * _isdigit - Entry Point
 * @c: Variable
 * Return: 1 if c is a digit or 0 if c id otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
