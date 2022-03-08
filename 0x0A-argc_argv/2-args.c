#include "main.h"
#include <stdio.h>

/**
 * main - Principal Funtion
 * @argc: Numbers os strings
 * @argv: Content of strings
 * a: Variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
