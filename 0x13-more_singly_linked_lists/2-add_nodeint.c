#include "lists.h"

/**
 * struct listint_s -adds a new node at the beginning of a linked list
 * @n:data to insert in that new node
 * @next:pointer to the first node in the list
 *
 * Description:pointer to the new node, or NULL if it fails
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
