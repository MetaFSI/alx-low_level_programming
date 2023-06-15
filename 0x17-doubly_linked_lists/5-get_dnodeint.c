#include "lists.h"

/**
 * get_dnodeint_at_index - dlistint_t linked list returens node.
 * @head:  head of list double pointer.
 * @index: return index of node.
 *
 * Return: node does not exist, other case : NULL.
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
