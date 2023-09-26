#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *freya;

	while ((freya = head) != NULL)
	{
		head = head->next;
		free(freya->str);
		free(freya);
	}
}
