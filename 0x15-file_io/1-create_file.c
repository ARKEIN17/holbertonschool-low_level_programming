#include "main.h"
/**
 * create_file - funtion
 * @filename: file create
 * @text_content: file for stored
 * Return: 1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;
	write(op, text_content, i);
	if (op == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
