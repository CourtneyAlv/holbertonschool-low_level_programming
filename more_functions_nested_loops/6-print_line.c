#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the termina
 * @n: Where n is the number of times the character _ should print
 * Return: 0
*/
void print_line(int n)
{
	int i;

	if
	(n <= 0)
{
	_putchar('\n');
	return;
}
	for (i = 0; i < n; i++)
{
	_putchar('_');
}
	_putchar('\n');
}
