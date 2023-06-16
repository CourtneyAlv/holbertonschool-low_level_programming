#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Write a function that searches a string for any of a set of byte
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 * Return: NULL
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
{
	for (p = accept; *p; p++)
{
	if (*s == *p)
	return (s);
}
	s++;
}
	return (NULL);
}
