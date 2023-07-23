#include "lists.h"
/**
 *get_dnodeint_at_index- returns the nth node of a dlistint_t linked list.
 *@head: a pointer to the head
 *@index: index of the node starring from 0
 *Return: pointer to the nth node or NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
{
	/* if the current node is the nth node */
	if (count == index)
	/*return a pointer the nth node */
	return (head);

	/* move to the next node */
	head = head->next;
	/*increment the next node */
	count++;
}
	/* if node does not exsist return NULL */
	return (NULL);
}
