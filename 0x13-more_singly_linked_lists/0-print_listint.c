#include "lists.h"

/**
 * print_listint - all the elements printed => linked list
 * @h: linked list of listint_t type => print
 *
 * Return: node numbers
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

