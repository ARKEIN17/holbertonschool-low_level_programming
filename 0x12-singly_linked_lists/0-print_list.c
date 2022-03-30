#include "lists.h"

/**
 * print_list - Print content of the list
 * @h: Head of list
 * n: My variable
 * Return: n number of node
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n += 1;

		h = h->next;
	}
	return (n);
}
