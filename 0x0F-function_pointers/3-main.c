#include "3-calc.h"

/**
 *  * main - function
 *   * @argc: number of arguments
 *    * @argv: arguments
 *     *
 *      * Return: NULL
 *       */
int main(int argc, char *argv[])
{
		int num1, num2;
			int (*opera)(int, int);

				if (argc == 4)
						{
									num1 = atoi(argv[1]);
											num2 = atoi(argv[3]);

													opera = get_op_func(argv[2]);
															printf("%d\n", opera(num1, num2));
																	return (0);
																		}
					printf("Error\n");
						exit(98);
}
