#include "lists.h"

/**
 * list_len - function that get the number of element in list.
 * @h: singly linked list
 *
 * Return: Number of elements in the list h
 */

size_t listint_len(const list_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
