#include "main.h"

/**
 * append_text_to_file - Function
 * @filename: Name of the file
 * @text_content: Where the text is stored
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(op, text_content, i);
		if (op == -1)
		{
			return (-1);
		}
	}
	close(op);
	return (1);
}
