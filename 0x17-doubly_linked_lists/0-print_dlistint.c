#include "list.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the beginning of a linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; h = h->next; i++)
	{
		printf("%d\n", h->n)
	}
	return (i);
}
