#include <stdio.h>
/**
 * main - entry point
 * a: variable
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	printf("\n");
	return (0);
}
