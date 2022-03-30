#include "lists.h"

/**
 * add_node - add new node
 * @head: Pointer to HeadPointer
 * @str: String
 * new_node: New node
 * i: Iterator
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	int i;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
