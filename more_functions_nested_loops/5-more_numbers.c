#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers
 * Return: 0
*/
void more_numbers(void)
{
	int a;
	int b;

	b = 0;
	while
	(b < 10)
{
	a = 0;
	while
	(a <= 14)
{
	if
	(a > 9)
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	a++;
}
	_putchar('\n');
	b++;
}
}
