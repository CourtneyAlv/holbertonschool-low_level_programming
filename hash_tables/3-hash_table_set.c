#include "hash_tables.h"
/**
 *hash_table_set- adds an element to the hash table
 *@ht: hash table you want to add or update the key to
 *@key: the key (cant be an empty string)
 *@value: the value associated with the key
 *Return: 1 if it succeeded and 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/* calculates the index for the key */

	index = key_index((const unsigned char *)key, ht->size);
	/* check for the collisions */

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* update the value if the key already exists */
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1); }
		temp = temp->next; }
		/* if no collision, create a new node and add itat the begin of the list */
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
		{
			free(new_node);
			return (0); }
		new_node->value = strdup(value);
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (0); }
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1); }
