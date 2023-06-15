#include "lists.h"

/**
 * insert_dnodeint_at_index - node in postion to be inserted.
 * @h: direction of head Pointer.
 * @n: data integer.
 * @idx: new node inserted at position.
 * Return: new node deriction.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* checking if fails*/
		return (NULL);
	new_node->n = n;

	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (i == idx - 1 && current != NULL)
	{
		new_node->prev = current;
		new_node->next = current->next;
		if (current->next != NULL)
			current->next->prev = new_node;
		else
			return (add_dnodeint_end(h, n));
		current->next = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
