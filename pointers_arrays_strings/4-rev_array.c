#include "main.h"
/**
 * reverse_array - Write function that reverses the content of an array of int
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int b, temp;

	for (b = 0; b < n / 2; b++)
{
	temp = a[b];

	a[b] = a[n - 1 - b];
	a[n - 1 - b] = temp;
}
}
