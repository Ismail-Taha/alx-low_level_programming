#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: singly linked list
 *
 * Return: Number of nodes.
 */

size_t print_listint(const list_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}

	printf("%d\n", h->n);

	return (nodes);
}
