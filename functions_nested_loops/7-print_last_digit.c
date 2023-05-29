#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @n: find n
 * Return: 0
*/
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if
	(digit < 0)
{
	digit = digit * -1;
}
	_putchar(digit + '0');
	return (digit);
}
