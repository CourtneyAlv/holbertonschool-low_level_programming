#include "hash_tables.h"
/**
 *key_index- gives youu the index of a key in the hash table
 *@key: the key to get the index for
 *@size: the size of the array of the hash table
 *Return: the index at which the key should be stored in the hash table array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* calculates the hash value using the hash_djb2 function */
	unsigned long int hash_value = hash_djb2(key);

	/* use the hash value to determine the index in the hash table array */

	unsigned long int index = hash_value % size;

	return (index);
}
