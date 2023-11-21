#include "lists.h"

/**
* free_listint2 -  frees a listint_t list.
* @head: the head of a the list
* Return: Always 0.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
