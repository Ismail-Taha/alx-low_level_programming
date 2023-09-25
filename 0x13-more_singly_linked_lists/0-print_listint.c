#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: singly linked list
 *
 * Return: Number of element in the list h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);

}
