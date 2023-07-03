#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: Total
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < (unsigned int)n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
		va_end(args);
		return (sum);
}
