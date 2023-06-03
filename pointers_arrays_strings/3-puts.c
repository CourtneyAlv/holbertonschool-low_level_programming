#include "main.h"
/**
 * _puts - Write a function that prints a string, followed by a new line
 * @str: I do not fear computers. I fear the lack of them
 * Return: 0
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
{
	_putchar(*str);
}
	_putchar('\n');
}
