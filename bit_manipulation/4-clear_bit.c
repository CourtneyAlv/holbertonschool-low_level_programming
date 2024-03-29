#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: Pointer to the number to modify
 * @index: index of the bit to clear
 * Return: 1 if success, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	mask = 1UL << index;

	mask = ~mask;
	*n &= mask;

	return (1);
}
