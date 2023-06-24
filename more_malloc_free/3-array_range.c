#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Write a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
*/
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
	return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	return (NULL);

	for (b = 0; min <= max; b++, min++)
	a[b] = min;

	return (a);
}
