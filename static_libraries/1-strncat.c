#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: find value
 * @src: find value
 * @n: number of bytes
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while
	(dest[c] != '\0')
{
	c++;
}
	while
	(d < n && src[d] != '\0')
{
	dest[c] = src[d];
	c++;
	d++;
}
	dest[c] = '\0';
	return (dest);
}
