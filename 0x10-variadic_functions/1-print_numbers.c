#include "variadic_functions.h"

/**
 * print_numbers - Function
 * @separator: string
 * @n: number of strings
 * Return: No line
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	unsigned int num;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
