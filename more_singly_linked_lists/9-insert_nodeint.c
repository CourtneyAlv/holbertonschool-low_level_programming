#include "lists.h"
/**
 *  insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head pointer
 * @idx: where the new node should be inserted
 * @n: value to be assigned to the data (n) of the new node
 * Return: Address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int count = 0;

	if (head == NULL)
	return (NULL);

	if (idx == 0)
{
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
	current = *head;
	while (current != NULL && count < idx - 1)
{
	current = current->next;
	count++;
}
	if (current == NULL || current->next == NULL)
	return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = current->next;
	current->next = new;

	return (new);
}
