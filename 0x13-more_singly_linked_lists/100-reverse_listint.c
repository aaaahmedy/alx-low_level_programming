#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head: the head of the list.
* Return: the new list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	tmp2 = NULL;
	while (*head != NULL)
	{
		tmp1 = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp1;
	}
	*head = tmp2;
	return (*head);
}
