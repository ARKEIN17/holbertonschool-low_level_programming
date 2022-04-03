#include "lists.h"

/**
 * listint_len - Function
 * @h: Pointer
 * a: Iterator
 * Return: a
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;

		h = h->next;
	}
	return (a);
}

