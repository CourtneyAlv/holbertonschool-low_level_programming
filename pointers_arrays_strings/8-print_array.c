#include "main.h"
#include <stdio.h>
/**
 * print_array -Write a function that prints n elements of an array of integers
 * @a: find
 * @n: find
 * Return: 0
*/
void print_array(int *a, int n)
{
	int f = 0;

	while
	(f < n)
{
	printf("%d", a[f]);
	if
	(f != n - 1)
	printf(",");
	f++;
}

	printf("\n");
}
