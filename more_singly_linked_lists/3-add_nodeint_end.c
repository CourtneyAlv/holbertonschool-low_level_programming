#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: pointer to the head pointer of the list
 * @n: The value to set for the new node
 * Return: The address of the new element, or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *present;

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
{
	*head = new_node;
}
	else
{
	present = *head;
	while (present->next != NULL)
{
	present = present->next;
}
	present->next = new_node;
}
	return (new_node);
}
