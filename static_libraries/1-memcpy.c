#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @dest: a pointer to the destination array
 * @src: pointer to the source data to be copied
 * @n: is the number of bytes to be copied
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	dest[z] = src[z];
	return (dest);
}
