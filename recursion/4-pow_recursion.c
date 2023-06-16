#include "main.h"
/**
 * _pow_recursion - Write a function that returns the value of xto the power y
 * @x: value
 * @y: value
 * Return: the value x raised to the y power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	else
	return (x * _pow_recursion(x, y - 1));
}
