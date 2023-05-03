#include "lists.h"

/**
 * pop_listint - delete -> head node -> linked list
 * @head: pointer => first elements in the linked list
 *
 * Return:  inside data of the elements -> deleted,
 * or 0 if the list is empty..
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
