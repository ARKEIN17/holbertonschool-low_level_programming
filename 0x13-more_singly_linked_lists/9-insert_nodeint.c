#include "lists.h"

/**
 * insert_nodeint_at_index - Function
 * @idx: Position of node
 * @n: node
 * @head: Pointer
 * i: Iterator
 * new_node: Node added
 * tour: head
 * Return: new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *new_node, *tour;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx != 0)
	{
		tour = *head;

		for (i = 1; i < idx && tour != NULL; i++)
		{
			tour = tour->next;
		}
		if (tour == NULL)
		{
			return (NULL);
		}
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	new_node->next = tour->next;
	tour->next = new_node;

	return (new_node);
}
