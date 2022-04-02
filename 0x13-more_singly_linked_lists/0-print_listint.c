#include "lists.h"

/**
 * print_listint - Function print
 * @h: Pointer
 * a: Iterator
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
