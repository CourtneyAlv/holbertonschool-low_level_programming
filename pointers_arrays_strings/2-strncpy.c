#include "main.h"
/**
 * _strncpy - Write a function that copies a string.
 * @dest: find value
 * @src: find value
 * @n: max number of bytes
 * Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while
	(a < n && src[a] != '\0')
{
	a++;
}
	while
	(a < n)
{
	dest[a] = '\0';
	a++;
}
	return (dest);
}
