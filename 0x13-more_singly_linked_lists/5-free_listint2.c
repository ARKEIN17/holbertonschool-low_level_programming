#include "lists.h"

/**
 * free_listint2 - Function free
 * @head: Double Pointer
 * release: Variable
 * Return: No line
 */

void free_listint2(listint_t **head)
{
	listint_t *release;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		release = *head;
		*head = (*head)->next;
		free(release);
	}
}
