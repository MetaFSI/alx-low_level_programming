#include "lists.h"

/**
 * free_listint2
 * @n:free_listint2 listing 
 * @next: 
 *
 * Description: lopping to an free list
 * 
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
