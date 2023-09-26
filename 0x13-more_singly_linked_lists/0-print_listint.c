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

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);

}
