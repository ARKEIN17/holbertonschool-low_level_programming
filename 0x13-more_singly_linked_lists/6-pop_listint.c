#include "lists.h"

/**
 * pop_listint - Function
 * @head: Double Pointer
 * int: Variable
 * Return: Result
 */

int pop_listint(listint_t **head)
{
	int result;

	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}
	node = *head;
	result = node->n;
	*head = (*head)->next;
	free(node);

	return (result);
}
