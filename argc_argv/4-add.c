#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Write a program that adds positive numbers.
 * @argc: arguement count
 * @argv: argument vector
 * Return: 0 if success 1 if error
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
{
	if (argv[i][j] < '0' || argv[i][j] > '9')
{
	printf("Error\n");
	return (1);
}
}
	sum += atoi(argv[i]);
}
	printf("%d\n", sum);
	return (0);
}
