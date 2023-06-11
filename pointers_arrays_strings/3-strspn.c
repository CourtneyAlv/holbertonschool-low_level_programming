#include "main.h"
#include <stdio.h>
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 * Return: count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
{
	for (p = accept; *p; p++)
{
	if (*s == *p)
{
	count++;
	break;
}
}
	if (*p == '\0')
	break;
	s++;
}
	return (count);
}
