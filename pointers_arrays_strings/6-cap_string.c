#include "main.h"
#include <string.h>
#include <stddef.h>
#include <ctype.h>
/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @str: capitalizing first letter of word.
 * Return: str
*/
char *cap_string(char *str)
{
	int c;
	char separators[] = " \t\n,;.!?\"(){}";

	for (c = 0; str[c] != '\0'; c++)
{
	if (c == 0 || strchr(separators, str[c - 1]) != NULL)
{
	if (str[c] >= 'a' && str[c] <= 'z')
		str[c] -= 32;
}
}
	return (str);
}
