#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: pointer to an array of 8 characters
 * Return: void
*/
void print_chessboard(char (*a)[8])
{
	int d, e;

	for (d = 0; d < 8; d++)
{
	for (e = 0; e < 8; e++)
{
	_putchar(a[d][e]);
}
	_putchar('\n');
}
}
