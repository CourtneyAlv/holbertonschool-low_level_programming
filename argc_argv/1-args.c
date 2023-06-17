#include "main.h"
/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
