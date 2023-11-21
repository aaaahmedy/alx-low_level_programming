#include "lists.h"

/**
* sum_listint - the sum of all the data (n) of a list.
* @head: the head.
* Return: returns the sum.
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
