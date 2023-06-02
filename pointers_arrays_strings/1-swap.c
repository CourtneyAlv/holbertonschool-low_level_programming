#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: is 98
 * @b: is 42
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
