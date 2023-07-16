#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at the given index
 * @head: Pointer to the head pointer 
 * @index: Index of the node to be deleted 
 * Return: 1 if success and -1 if not
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tempo;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
{
	tempo = *head;
	*head = (*head)->next;
	free(tempo);
	return (1);
}
	current = *head;
	while (current != NULL && count < index - 1)
{
	current = current->next;
	count++;
}
	if (current == NULL || current->next == NULL)
	return (-1);

	tempo = current->next;
	current->next = tempo->next;
	free(tempo);

	return (-1);
}
