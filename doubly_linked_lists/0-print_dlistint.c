#include "lists.h"
/**
 *print_dlistint- a function that prints all the elements of a dlistint_t list
 *@h: the pointer to the head pointer
 *Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t count = 0;
	/* Loops through the list until the end */
	while (h != NULL)
{
	/* Prints the value of the current node */
	printf("%d\n", h->n);
	/* Move to the next node in the list */
	h = h->next;
	/* Increment to the next node */
	count++;
}
	/* Return the number of nodes in the list */
	return (count);
}
