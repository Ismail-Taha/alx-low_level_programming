#include "lists.h"

/**
 * pop_listint -function that deletes the Head node of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The Head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head == NULL)
		return (0);

	pop = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(pop);

	return (n);
}
