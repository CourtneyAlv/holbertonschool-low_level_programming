#include "main.h"
/**
 * rev_print -Write a function that prints a string, in reverse,
 * @s: print
 * Return: 0
*/
void rev_string(char *s)
{
	int a = 0;
	int b;
	char temp;

	while
	(*(s + a) != '\0')
	a++;

	for (b = 0; b < a / 2; b++)
{
	temp = *(s + b);
	*(s + b) = *(s + a - b - 1);
	*(s + a - b - 1) = temp;
}
}
