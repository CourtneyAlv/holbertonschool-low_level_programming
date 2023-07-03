#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Write a function that searches for an integer.
 * @array: pointer to array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: no element or size <= 0; return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)

	{
	if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
