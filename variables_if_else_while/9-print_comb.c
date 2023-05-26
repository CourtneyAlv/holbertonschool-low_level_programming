#include <stdio.h>
/**
 * main - print all combos
 * Return: 0
*/
int main(void)
{
	int x = 48;

	while
	(x < 58)
{
	putchar(x);
	if
	(x < 57)
{
	putchar(44);
	putchar(32);
}
	(x++);
}
	putchar('\n');
	return (0);
}
