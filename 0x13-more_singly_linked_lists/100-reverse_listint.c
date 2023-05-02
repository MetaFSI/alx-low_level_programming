#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: pointer to the first node in the list
 * @next: points to the next node.
 *
 * Description: pointer to the first node in the new list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
