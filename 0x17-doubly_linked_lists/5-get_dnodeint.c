#include "lists.h"
/**
 * get_dnodeint_at_index - get reurn index
 * * @head: head of linked list
 * @index: index
 *  * Return: index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next
			return (head);
}
