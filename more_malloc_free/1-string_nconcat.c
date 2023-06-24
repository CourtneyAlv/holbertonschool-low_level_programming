#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -Write a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: max # of bytes to concatenate
 * Return: pointer to allocated space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int a, b;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	a = strlen(s1);
	b = strlen(s2);

	if (n >= b)
	n = b;

	m = malloc(sizeof(char) * (a + n + 1));
	if (m == NULL)
	return (NULL);

	memcpy(m, s1, a);
	memcpy(m + a, s2, n);
	m[a + n] = '\0';

	return (m);
}
