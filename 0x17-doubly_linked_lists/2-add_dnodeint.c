#include "lists.h"

/**
 * add_dnodeint - on th begening of list adding odd.
 * @head: head of list from double pointer.
 * @n: add data.
 *
 * Return: new element adress, null in case failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
