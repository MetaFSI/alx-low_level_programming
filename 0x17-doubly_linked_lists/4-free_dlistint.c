#include "lists.h"

/**
 * free_dlistint - dlistint_t list to be free.
 * @head: head of list pointer.
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
