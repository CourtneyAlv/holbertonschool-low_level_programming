#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the last digit
 * Return: 0
*/
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d", n, n % 10);
	if
		(n % 10 > 5)
	{
		printf("Last digit of %d is %d", n, n % 10);
	}
	else if
		(n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
