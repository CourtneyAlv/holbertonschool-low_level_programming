#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to the pointer to the head of the list
 * @str: The string to be duplicated and adderd as the new node.
 * Return: The address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *end;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	end = *head;
	while (end->next != NULL)
	end = end->next;

	end->next = node;
	return (node);
}
