#include "lists.h"

/**
 * free_listint - Function free
 * @head: Pointer
 * node: Variable
 * release: Variable
 * Return: No Line
 */

void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *release;

	node = head;

	while (node != NULL)
	{
		release = node->next;
		free(node);
		node = release;
	}
}
