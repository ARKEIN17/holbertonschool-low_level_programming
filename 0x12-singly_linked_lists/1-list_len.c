#include "lists.h"

/**
 * list_len - print number of elements
 * @h: Pointer to head
 * n: My variable
 * Return: n
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;

		h = h->next;
	}
	return (n);
}
