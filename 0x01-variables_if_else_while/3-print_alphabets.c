#include <stdio.h>
/**
 * main -entry point
 * c: variable
 * Return: o
 */

int main(void)
{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
		for (c = 'A'; c <= 'Z'; c++)
			putchar(c);
		printf("\n");
		return (0);
}
