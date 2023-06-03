#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 * @s: print
 * Return: 0
*/
void print_rev(char *s)
{
	int y = 0;

	while
	(s[y] != '\0')
{
	y++;
}

	for (y -= 1; y >= 0; y--)
{
	_putchar(s[y]);
}
	_putchar('\n');
}
