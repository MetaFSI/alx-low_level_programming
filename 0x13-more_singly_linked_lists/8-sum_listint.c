#include "lists.h"

/**
 * sum_listint - calculates sum of * the data -> listint_t list
 * @head: first node -> linked list
 *
 * Return: resulting sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
