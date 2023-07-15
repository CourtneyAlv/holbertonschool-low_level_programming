#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list
 *@h: A pointer to the head of the list
 * Return: The number of elements in the list
*/
size_t list_len(const list_t *h)
{
	/* Variable to keep track of the number of elements */
	size_t count = 0;

	while (h != NULL)
{
	/* Increment the count for each element */
	count++;
	/* Move to the next element */
	h = h->next;
}
	/* Return the number of elements in the list */
	return (count);
}
