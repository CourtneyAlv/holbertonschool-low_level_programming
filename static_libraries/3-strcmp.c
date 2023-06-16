#include "main.h"
/**
 * _strcmp - Write a function that compares two strings
 * @s1: find the value
 * @s2: find the value
 * Return: s1
*/
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
{
	if (s1[c] != s2[c])
{
	return (s1[c] - s2[c]);
}
	c++;
}
	return (0);
}
