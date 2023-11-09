#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes a Node from  dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the Node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (del_node == NULL)
			return (-1);
		del_node = del_node->next;
	}

	if (del_node == *head)
	{
		*head = del_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		del_node->prev->next = del_node->next;
		if (del_node->next != NULL)
			del_node->next->prev = del_node->prev;
	}

	free(del_node);
	return (1);
}
