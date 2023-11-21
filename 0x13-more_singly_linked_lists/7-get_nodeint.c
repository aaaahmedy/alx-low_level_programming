#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a list.
* @head: the head.
* @index: the index of the node.
* Return: returns the nth node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
