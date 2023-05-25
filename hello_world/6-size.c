#include <stdio.h>
/**
 * main - Size
 * Return: 0
*/
int main(void) 
{
	char charType;
	int intType;
	long int lintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(lintType));;
	printf("Size of a long long int: %zu bytes\n", sizeof(llintType));;
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
