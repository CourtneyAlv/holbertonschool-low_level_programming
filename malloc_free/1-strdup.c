#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in mem
 * @str: functions input parameter
 * Return: pointer to new string
*/
char *_strdup(char *str)
{
	char *d;
	size_t l;

	if (str == NULL)
	return (NULL);

	l = strlen(str) + 1;
	d = malloc(l);

	if (d == NULL)
	return (NULL);

	memcpy(d, str, l);

	return (d);
}
