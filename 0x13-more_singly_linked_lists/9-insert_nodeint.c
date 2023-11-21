#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: the head.
* @idx: the index of the node.
* @n: the data.
* Return:  the address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	else if (idx != 0)
	{
		while (temp != NULL)
		{
			if (i == idx - 1)
			{
				node->next = temp->next;
				temp->next = node;
				return (node);
			}
			if (temp == NULL)
			{
				free(node);
				return (NULL);
			}
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}
