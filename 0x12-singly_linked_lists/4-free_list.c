#include "lists.h"

/**
 * free_list - Function free list
 * @head: Pointer
 * node: variable
 * release: Variable
 * Return: No line
 */

void free_list(list_t *head)
{
	list_t *node;
	list_t *release;

	node = head;

	while (node != NULL)
	{
		release = node->next;
		free(node->str);
		free(node);
		node = release;
	}
}
