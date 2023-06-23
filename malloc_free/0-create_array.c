#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array- function that creates an array of chars, and initializes it
 * @size: number of elements in the created array
 * @c: used to initialize each element
 * Return: a pointer to the created array, NULL if = zero
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int j;

	if (size == 0)
	return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	return (NULL);

	for (j = 0; j < size; j++)
	ar[j] = c;

	return (ar);

}
