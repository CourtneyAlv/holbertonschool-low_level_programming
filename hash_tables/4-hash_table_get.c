#include "hash_tables.h"
/**
 *hash_table_get- retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key: the key you are looking for
 *Return: value associated with the element, or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	/* calculate the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/*traverse the linked list at the index to find the key */
	temp = ht->array[index];
	while (temp != NULL)
	{
	if (strcmp(temp->key, key) == 0)
		return (temp->value);
	temp = temp->next;
	}

	/* key couldnt be found */

	return (NULL);
}
