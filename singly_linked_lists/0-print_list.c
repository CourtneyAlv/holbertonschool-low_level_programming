#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
	/* variable to keep tracke of the number of nodes in the list*/
	size_t count = 0;

	while (h != NULL)
{
	if (h->str != NULL)
	/* Print the lngth and string if not NULL */
		printf("[%d] %s\n", h->len, h->str);
	else
		/* Print (nil) if the string is NULL */
		printf("[0] (nil)\n");
	/* Move to the next node */
	h = h->next;
	/* Increment the count of nodes */
	count++;
}
	/* Return the number of nodes in the list */
	return (count);
}
