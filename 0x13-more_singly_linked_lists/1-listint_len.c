#include "lists.h"

/**
* listint_len - the number of elements in a list.
* @h: the head of a the list
* Return: number of elements.
*/

size_t listint_len(const listint_t *h)
{
	size_t cmpt = 0;

	while (h != NULL)
	{
		cmpt++;
		h = h->next;
	}
	return (cmpt);
}
