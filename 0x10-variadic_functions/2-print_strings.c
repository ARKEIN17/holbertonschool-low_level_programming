#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: string to be printed between of string
 * @n: Number os strings
 * a: Variable
 * word: Pointer to string
 * Return: no line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *word;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		word = va_arg(list, char*);
		if (word == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
