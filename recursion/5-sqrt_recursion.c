#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: calculate the square root
 * Return: the square root
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the natural square root
 * @n: calculate square root
 * @i: tested as the square root of n
 * Return: square root
*/

int _sqrt(int n, int i)
{
	int s = i * i;

	if (s > n)
	return (-1);

	if (s == n)
	return (i);

	return (_sqrt(n, i + 1));
}
