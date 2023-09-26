#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that get the number of element in list.
 * @h: singly linked list
 *
 * Return: Number of elements in the list h
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
