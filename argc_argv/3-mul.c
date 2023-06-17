#include "main.h"
/**
 * main - Write a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success 1 if error
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
