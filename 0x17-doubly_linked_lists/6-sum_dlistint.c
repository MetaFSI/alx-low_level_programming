#include "lists.h"

/**
 *  sum_dlistint - sum of ll returned.
 * @head: list head double pointer.
 *
 * Return: in case list is empty, other return 0.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
