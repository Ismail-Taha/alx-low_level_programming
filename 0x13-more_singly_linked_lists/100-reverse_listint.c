#include "lists.h"

/**
 * reverse_listint -function reverses a listint_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *z;

	if (head == NULL || *head == NULL)
		return (NULL);

	z = NULL;

	while ((*head)->next != NULL)
	{
		a = (*head)->next;
		(*head)->next = z;
		z = *head;
		*head = a;
	}

	(*head)->next = z;

	return (*head);
}
