#include "search_algos.h"
/**
 * binary_search- finding a value in an array using binary search
 * @array: is a pointer to the first element
 * @size: is the number of elements in tharrya
 * @value: the value to be searched for
 * Return: index where value is located, -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0; /* index of left boundary */
	int right = size - 1; /* index of right boundary */
	int i, mid;

	if (array == NULL)
	{
	return (-1);
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2; /* calculate middle index */
		printf("Searching in array: ");
		
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i < right)
			{
				printf(", ");
			}
		}
	
	printf("\n");

	if (array[mid] == value)
	{
		return (mid); /* return index if value is found */
	}
	else if (array[mid] < value)
	{
		left = mid + 1; /* adjust the left boundary */
	}
	else
	{
		right = mid - 1; /* adjust the right boundary */
	}
	}
	return (-1);}
