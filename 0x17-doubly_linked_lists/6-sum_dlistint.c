#include "lists.h"

/**
 * sum_dlistint - function sums all the Data of dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the Data.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
