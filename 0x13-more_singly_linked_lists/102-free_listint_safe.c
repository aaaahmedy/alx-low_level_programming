#include "lists.h"

/**
* free_listint_safe -  a function that frees a listint_t list.
* @h: the head of the list.
* Return: the number of elements.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return size;
}
