#include "hash_tables.h"
/**
 *hash_djb2- implements the djb2 hash
 *@str: input string to hash
 *Return: computed hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	/* initial hash value */
	unsigned long int hash = 5381;

	int c;

	while ((c = *str++))
	{
	/* hash is calculated a (hash * 33) + c */
	/* where 'c' is the ASCII value of the current characterin the string */
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
