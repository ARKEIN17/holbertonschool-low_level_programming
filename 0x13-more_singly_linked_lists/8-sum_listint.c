#include "lists.h"

/**
 * sum_listint - Function
 * @head: Pionter
 * node: node
 * Return: Result
 */

int sum_listint(listint_t *head)
{
	listint_t *node;

	int sum = 0;

	node = head;

	for (node = head; node != NULL; node = node->next)
	{
		sum = sum + node->n;
	}
	return (sum);
}
