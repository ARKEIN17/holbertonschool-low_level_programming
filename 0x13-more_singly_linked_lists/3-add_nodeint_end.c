#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: Double Pointer
 * @n: Variable
 * Return: end_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *list_new = *head;

	int x;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	for (x = 0; list_new->next != NULL; x++)
	{
		list_new = list_new->next;
	}
	list_new->next = end_node;
	return (end_node);
}
