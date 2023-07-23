#include "lists.h"
/**
 * add_dnodeint_end- adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head pointer
 * @n: integer value to be added as a new node
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		/* return NULL if malloc failed */
		return (NULL);
	/* set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
{
	/* if the list is empty, make the new node the head */
	*head = new_node;
}
	else
{
	/* traverse the list tp find the last node */
	while (last->next != NULL)
{
	last = last->next;
}

	 /* update the next pointer of the last pointer of the last node */
	last->next = new_node;
	/* set the prev pointer of the new node to point to the last node */
	new_node->prev = last;
}
	/* return the address of the new element */
	return (new_node);
}
