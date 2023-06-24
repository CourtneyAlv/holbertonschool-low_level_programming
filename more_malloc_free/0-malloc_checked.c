#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - allocates memory
 * @b: # of bytes to allocate
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	exit(98);

	return (i);
}
