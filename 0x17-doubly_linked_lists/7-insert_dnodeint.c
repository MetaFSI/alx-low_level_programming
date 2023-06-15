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
	dlistint_t *newNode, *curr;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL) /* checking if fails*/
		return (NULL);
	newNode->n = n;

	curr = *h;
	for (i = 0; i < idx - 1 && curr != NULL; i++)
		curr = curr->next;

	if (i == idx - 1 && curr != NULL)
	{
		newNode->prev = curr;
		newNode->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = newNode;
		else
			return (add_dnodeint_end(h, n));
		curr->next = newNode;
		return (newNode);
	}
	else
	{
		free(newNode);
		return (NULL);
	}
}
