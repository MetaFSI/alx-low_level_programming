#include "lists.h"

/**
 * print_dlistint - all of elements prented on dlistint_t.
 * @h: head from pointer of list.
 *
 * Return: nodes number.
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
