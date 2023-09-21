#include "main.h"

/**
 * add_node_end - add node at the end of a list
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *New_node, *Last_node;
	size_t n;

	New_node = malloc(sizeof(list_t));
	if (New_node == NULL)
		return (NULL);

	New_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	New_node->len = n;
	New_node->next = NULL;
	Last_node = *head;

	if (Last_node == NULL)
	{
		*head = New_node;
	}
	else
	{
		while (Last_node->next != NULL)
			Last_node = Last_node->next;
		Last_node->next = New_node;
	}

	return (*head);
}
