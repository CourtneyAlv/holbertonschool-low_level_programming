#include "lists.h"
/**
 *add_dnodeint- adds a new node at the beginning of a dlistint_tlist
 *@head: pointer to the pointer of the head
 *@n: integer value to be added to the new node
 *Return: the address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	/* return NULL if malloc failed */
		return (NULL);
	/* set the value of the new mode */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	/* updates the prev pointer of the current head */
	if (*head != NULL)
		(*head)->prev = new_node;
	/* update the head pointer to point to the new node */
	*head = new_node;
	/* return the address of the new element */
	return (new_node);
}
