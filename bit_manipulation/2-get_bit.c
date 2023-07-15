#include "main.h"
/**
 * get_bit - returns the value of a bit at a given time
 * @n: The number to extract the bit from
 * @index: The index of the bit to get
 * Return: The value of the bit at the given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
