#include "main.h"
#include <stdio.h>
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring,
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
{
	char *s = haystack;
	char *f = needle;

	while (*haystack && *f && *haystack == *f)
{
	haystack++;
	f++;
}
	if (!*f)
	return (s);

	haystack = s + 1;
}
	return (NULL);
}
