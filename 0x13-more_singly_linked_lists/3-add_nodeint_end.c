#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: The Address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		last_n = *head;
		while (last_n->next != NULL)
			last_n = last_n->next;
		last_n->next = new_n;
	}

	return (*head);
}
