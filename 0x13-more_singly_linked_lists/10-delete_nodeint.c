#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a list.
* @head: the head.
* @index: the index of the node.
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *previous = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = temp->next;
	i++;
	while (temp != NULL)
	{
		if (i == index)
		{
			previous->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		previous = previous->next;
		i++;
	}
	return (-1);
}
