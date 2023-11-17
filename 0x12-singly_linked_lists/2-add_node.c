#include "lists.h"
#include <string.h>

/**
* add_node - add node at the beginning.
* @head: the head of the list.
* @str: the string to add.
* Return: a pointer to the new list.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
