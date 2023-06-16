#include "main.h"

int _prime(int, int);

/**
 * is_prime_number - checks if integer is prime
 * @n: integer to be checked
 * Return: 1 if n is prime
*/
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - to check if prime number
 * @n: integer to check
 * @b: whats tested
 * Return: 1 if prime
*/
int _prime(int n, int b)
{
	if (n <= 1)
	return (0);

	if (n % b == 0 && b > 1)
	return (0);

	if ((n / b) < b)
	return(1);

	return (_prime(n, b + 1));
}
