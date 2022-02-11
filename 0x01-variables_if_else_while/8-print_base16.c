#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
		putchar('\n');
	}
		return (0);
}
