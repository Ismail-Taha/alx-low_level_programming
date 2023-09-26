#include "lists.h"

/**
 * free_listint2 -function that frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *freya;

	if (head == NULL)
		return;

	while (*head)
	{
		freya = (*head)->next;
		free(*head);
		*head = freya;
	}

	head = NULL;
}
