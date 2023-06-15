#include "lists.h"

/**
 * dlistint_len - elements number in a linked dlistint_t.
 * @h: head from pointer of list.
 *
 * Return: nodes number.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
