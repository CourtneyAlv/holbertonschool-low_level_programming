#include "main.h"
#include <ctype.h>
/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @str: capitalizing first letter of word.
 * Return: str
*/
char *cap_string(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
{
	if (c == 0 || isspace(str[c - 1]))
		str[c] = toupper(str[c]);
}
	return (str);
}
