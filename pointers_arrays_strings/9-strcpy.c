#include "main.h"
/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @src: find
 * @dest: find
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';
	return (ptr);
}
