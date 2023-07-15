#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to the pointer to the head of the list
 * @str: The string to be duplicated and added as the new node
 * Return: The address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		/* Return NULL if input strng is NULL */
		return (NULL);
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		/* Return NULL if input string is NULL */
		return (NULL);
	/* Duplicate the input string */
	new_node->str = strdup(str);
	if (new_node-> == NULL)
		{
			free(new_node);
			/* Return NULL if string duplication fails */
			return(NULL);
		}
	/* Calculate the length of the string */
	new_node->len = strlen(str);
	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;
	/* Update the head pointer to point to the new node */
	*head = new_node;
	/* Return the address of the new node */
	return (new_node);
}
