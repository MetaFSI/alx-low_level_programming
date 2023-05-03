#include "lists.h"

/**
 * add_nodeint -  new node added from the beginning => linked list
 * @head: pointer => first node in the list.
 * @n: inserted data=> new node
 *
 * Return: pointer => new node || NULL if it fails
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
