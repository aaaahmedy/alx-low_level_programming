#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list.
* @head: pointer to list head.
* @str: the string to add.
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;
	size_t i = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	while (str[i])
		i++;
	newNode->len = i;
	newNode->next = NULL;
	current = *head;
	if (current == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}
	return (*head);
}
