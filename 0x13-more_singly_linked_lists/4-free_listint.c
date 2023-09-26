#include "lists.h"

/**
 * free_listint -function that frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *freya;

	while (head)
	{
		freya = head->next;
		free(head);
		head = freya;
	}
}
