#include "lists.h"

/**
 * struct listint_s - prints elements
 * @n: list of that's type listint_t to print
 * @next: points to the next node.
 *
 * Description: numbers of node
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
