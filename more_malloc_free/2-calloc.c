#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: # of elements to be allocated
 * @size: size of elements in bytes
 * Return: pointer to memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
