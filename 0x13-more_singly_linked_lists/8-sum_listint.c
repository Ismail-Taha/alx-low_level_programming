#include "lists.h"

/**
 * sum_listint -function that calculates the sum of all the
 *               data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
