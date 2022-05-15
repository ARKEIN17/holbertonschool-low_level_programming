#include "lists.h"
/**
 * insert_dnodeint_at_index - instert a node given an index
 * @h: head of the list
 * @idx: index to input the node
 * @n: new node value
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, a = 0;
	dlistint_t *head = *h;
	dlistint_t *add_node;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);
	if (idx == a)
	{
		free(add_node);
		return (add_dnodeint(h, n));
	}
	while (i < idx - 1)
	{
		head = head->next;
		if (head == NULL)
		{
			free(add_node);
			return (NULL);
		}
		i++;
	}
	add_node->n = n;
	add_node->next = head->next;
	head->next = add_node;
	add_node->prev = head;
	if (add_node->next != NULL)
		add_node->next->prev = add_node;
	return (add_node);
}
