#include "lists.h"

/**
 * free_dlistint - Function frees  linked dlistint_t list.
 * @head: The Head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}

