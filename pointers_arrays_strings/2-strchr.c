#include "main.h"
#include <stddef.h>
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: points to c
 * @c: an unsigned char in the string
 * Return: NULL
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
{
	if (*s == c)
	return (s);
}
	return (NULL);
}
