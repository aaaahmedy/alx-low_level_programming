#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a list.
* @head: the head of a the list
* @n: the data to add.
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->next = *head;
	*head = node;
	node->n = n;
	return (node);
}
