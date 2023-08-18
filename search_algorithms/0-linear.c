#include "search_algos.h"
/**
 * linear_search- searching through array to find matching value
 * @array: is a pointer to the first element of the array search
 * @size: is the number of elements in the array
 * @value: is the value to search for
 * Return: if value found, returns the first index, if not, return -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1); /* return -1 if the array is NULL */
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%lu] = [%d]\n", i, array[i]);

	if (array[i] == value)
	{
		return (i); /* return the index if the value is found */
	}

	}
	return (-1);
}
