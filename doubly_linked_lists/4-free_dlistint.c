#include "lists.h"
/**
 *free_dlistint- Write a function that frees a dlistint_t list
 *@head: a pointer to the head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *present;

	while (head != NULL)
{
	present = head;
	head = head->next;
	free(present);
}
}
