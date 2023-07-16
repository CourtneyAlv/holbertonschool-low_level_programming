#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Pointer to the head pointer
 * Return: The data (n) of the deleted head node
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
	return (0);

	/* save the current head node */
	current = *head;
	/* Save the data (n) of the current head node */
	data = current->n;
	/* Update the head pointer to the next node */
	*head = (*head)->next;
	/* free the memory of the current head node */
	free(current);

	/* return the data (n) for the deleted head node */
	return (data);
}
