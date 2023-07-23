#include "lists.h"
/**
 *dlistint_len- returns the number of elements in a linked dlistint_t list.
 *@h: Pointer to the head
 *Return: The number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize a variable to count the number */
	size_t count = 0;
	/*loops through the list until the end */
	while (h != NULL)
{
	/* move to the next node */
	h = h->next;
	/*increment the node count */
	count++;
}
	/* return the number of nodes */
	return (count);
}
