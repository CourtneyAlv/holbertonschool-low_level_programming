#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -function that executes a function given as a parameter
 * @array: pointer to an integer array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*declares variable i, use to iterate over array*/
	size_t i;

	/*checks if NULL*/
	if (array && action)
	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
