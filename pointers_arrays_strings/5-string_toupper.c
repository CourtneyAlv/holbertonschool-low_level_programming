#include "main.h"
/**
 * string_toupper-changes all lowercase letters of a string to uppercase.
 *@ptr: will be checked for lowercase letters
 * Return: return string with all uppercase letters
*/
char *string_toupper(char *ptr)
{
	int r;

	for (r = 0; ptr[r] != '\0'; r++)
{
	if (ptr[r] >= 'a' && ptr[r] <= 'z')
	ptr[r] = ptr[r] - 'a' + 'A';
}
	return (ptr);
}
