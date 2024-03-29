#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node
 * @head: Pointer to the head of the list
 * @index: Index of the node
 * Return: Pointer to the nth node, or else NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
{
	if (count == index)
	return (current);

	current = current->next;
	count++;
}
	return (NULL);
}
