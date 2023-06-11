#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of the two diagonals
 * @a: pointer to an array of integers representing the square matrix
 * @size: size of the matrix
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int l;
	int t = 0;
	int v = 0;

	for (l = 0; l < size; l++)
{
	t += a[(size + 1) * l];
	v += a[(size - 1) * (l + 1)];
}
	printf("%d, %d\n", t, v);
}
