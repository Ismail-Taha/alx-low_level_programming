#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *temp = *head;
	unsigned int Node;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = temp;
		*head = new_n;
		return (new_n);
	}

	for (Node = 0; Node < (idx - 1); Node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new_n->next = temp->next;
	temp->next = new_n;

	return (new_n);
}
