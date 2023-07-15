#include "main.h"
/**
 * binary_to_uint - Coverts a binary number to an unsigned int
 *@b: Pointer to a string of binary digits
 * Return: The number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	if (b[0] == '\0')
	return (0);

	while (b[i] != '\0')
{
	if (b[i] == '0')
{
	outcome = (outcome << 1) + 0;
}
	else if (b[i] == '1')
{
	outcome = (outcome << 1) + 1;
}
	else
{
	return (0);
}
	i++;
}
	return (outcome);
}
