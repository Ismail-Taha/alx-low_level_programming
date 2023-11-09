#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a New node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the New node.
 * @n: The integer for the New node to contain.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		prev_node = prev_node->next;
		if (prev_node == NULL)
			return (NULL);
	}

	if (prev_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev_node;
	new_node->next = prev_node->next;
	prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
