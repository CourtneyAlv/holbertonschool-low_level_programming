#include "main.h"
#include <string.h>
/**
 * puts_half - Write a function that prints half of a string,
 * @str: second half of string
 * Return: 0
*/
void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
{
	b++;
	a++;
}
	if
	(b % 2 == 0)
	a = b / 2;

	else
	a = (b + 1) / 2;

	while
	(str[a] != '\0')
{
	_putchar(str[a]);
	a++;
}
	_putchar('\n');
}
