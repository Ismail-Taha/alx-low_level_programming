#include "lists.h"

/**
 * list_looper - Counts the Number of unique Nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the Head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t list_looper(const listint_t *head)
{
	const listint_t *A, *B;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	A = head->next;
	B = (head->next)->next;

	while (B)
	{
		if (A == B)
		{
			A = head;
			while (A != B)
			{
				nodes++;
				A = A->next;
				B = B->next;
			}

			A = A->next;
			while (A != B)
			{
				nodes++;
				A = A->next;
			}

			return (nodes);
		}

		A = A->next;
		B = (B->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -function prints a listint_t list safely.
 * @head: A pointer to the Head of the listint_t list.
 *
 * Return: The Number of Nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = list_looper(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
