#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add node to front of doubly linked list.
 * @head: Pointer to head of list.
 * @n: Node data.
 * Return: Address of new node OR Null if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* Malloc and set new node data */
	new_node = malloc(sizeof(struct dlistint_s));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	/* Account for empty linked list */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	/* Account for regular linked list */
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
