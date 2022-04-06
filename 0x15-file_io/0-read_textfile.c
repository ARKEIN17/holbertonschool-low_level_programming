#include "main.h"

/**
 * read_textfile - Function Only read
 * @filename: File to read
 * @letters: numbers of letters to read
 * i: Iterator
 * Return: read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, rd;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		return (0);
	}
	rd = read(i, buff, letters);
	write(STDOUT_FILENO, buff, rd);
	close(i);
	free(buff);

	return (rd);
}

