#include "main.h"
/**
 * puts2 - Write a function that prints every other character of a string
 * @str: find the string
 * Return: 0
*/
void puts2(char *str)
{
	int p = 0;

	while
	(str[p] != '\0')
{
	if
	(p % 2 == 0)
	_putchar(str[p]);
	p++;
}
	_putchar('\n');
}
