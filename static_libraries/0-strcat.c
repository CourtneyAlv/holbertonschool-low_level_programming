#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: string to be modified by appending the source string
 * @src: string will be appended to the destination
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while
	(dest[a] != '\0')
{
	a++;
}
	while
	(src[b] != '\0')
{
	dest[a] = src[b];
	a++;
	b++;
}
	dest[a] = '\0';
	return (dest);
}
