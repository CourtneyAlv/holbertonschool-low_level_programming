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
	char *p;
	int h;

	for (h = 0; haystack[h]; h++)
{
	for (p = needle; *p; p++)
{
	if (haystack[h] == *p)
	return (&haystack[h]);
}
}
	return (NULL);
}
