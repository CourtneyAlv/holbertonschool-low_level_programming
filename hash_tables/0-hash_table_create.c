#include "hash_tables.h"
/**
 *hash_table_create- Creates a hash table
 *@size: size of array in the hash table
 *Return: a pointer to the new hash table, or NULL if error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
		return (NULL);

	/* Allocates memorey for thr hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocates memory for the array of hash_node_t pointer */
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	return (new_table);
}

