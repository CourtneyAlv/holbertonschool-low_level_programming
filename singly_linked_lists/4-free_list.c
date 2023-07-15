#include "lists.h"
/**
 * free_list - Free a list_t list
 * @head: A pointer to the head of the list
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *thenode;

	while (head != NULL)
	{
	thenode = head;
	head = head->next;
	free(thenode->str);
	free(thenode);
	}
}
