#include "lists.h"

/**
* list_len -  returns the number of elements
* @h: the list.
* Return: number of elements.
*/

size_t list_len(const list_t *h)
{
	size_t cmp = 0;

	while (h)
	{
		cmp++;
		h = h->next;
	}
	return (cmp);
}
