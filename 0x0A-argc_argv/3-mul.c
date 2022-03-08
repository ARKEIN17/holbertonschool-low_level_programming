#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Principal Funtion
 * @argc: Numbers os strings
 * @argv: Content of strings
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
