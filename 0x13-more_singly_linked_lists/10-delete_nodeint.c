#include "lists.h"

/**
 * delete_nodeint_at_index - Function
 * @head: Pointer
 * @index: is the node to delete
 * i: iterador
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *end, *new;

	end = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(end);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (end == NULL)
		{
			return (-1);
		}
		end = end->next;
	}
	new = end->next;
	end->next = new->next;
	free(new);
	return (1);
}
