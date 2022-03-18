#include "3-calc.h"

/**
 * op_add - returns the sum
 * @a: first number
 * @b: second number
 * Return: result of function
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference
 * @a: first number
 * @b: second number
 * Return: result of function
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product
 * @a: first number
 * @b: second number
 * Return: result of function
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return ther result of the division
 * @a: first number
 * @b: second number
 * Return: result of function
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - return the remainder of the division
 * @a: first number
 * @b: second number
 * Return: result of function
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
