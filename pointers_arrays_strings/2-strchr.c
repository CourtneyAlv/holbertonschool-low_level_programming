#include "main.h"
#include <stdio.h>
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: points to c
 * @c: an unsigned char in the string
 * Return: NULL
*/
char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++)
{
	if (s[r] == c)
	return (s + r);
}
	return (NULL);
}
