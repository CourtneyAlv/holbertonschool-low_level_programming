#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Write a function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: points to new space in memory
*/
char *str_concat(char *s1, char *s2)
{
	char *c;
	int a, b;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	c = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (c == NULL)
	return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
	c[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++)
	c[a + b] = s2[b];
	c[a + b] = '\0';


	return (c);
}
