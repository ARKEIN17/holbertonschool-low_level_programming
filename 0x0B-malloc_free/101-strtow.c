#include "main.h"

/**
 * strtow - function that splits into words
 * @str: pointer
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **ptr = NULL;
	int i, j, index = 0, words, letters;

	if (!str || str[0] == '\0')
		return (NULL);

	words = count_words(str);

	if (words == 0)
		return (NULL);
	ptr = malloc((words + 1) * sizeof(char *));

	if (!ptr)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		while (str[index] == ' ')
			index++;
		letters = len_words(str + index);
		ptr[i] = malloc(sizeof(char) * (letters + 1));

		if (!ptr[i])
		{
			for (; i >= 0; i--)
				free(ptr);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < letters; j++)
			ptr[i][j] = str[index++];
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}

/**
 * count_words - string word count
 * @str: pointer
 * Return: the number of words found in the string
 */
int count_words(char *str)
{
	int i, j = 0, len = 0;

	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			j++;
			i += len_words(str + i);
		}
	}
	return (j);
}

/**
 * len_words - length of each word found in the string
 * @str: pointer
 * Return: length of each word
 */
int len_words(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		j++;
	return (j);
}
