#include "lists.h"

/**
 * struct listint_s -returns the number of elements in a linked lists
 * @n: linked list of type listint_t to traverse
 * @next:linked list ..
 *
 * Description:number of nodes.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
