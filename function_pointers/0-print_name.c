#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Write a function that prints a name.
 * @name: name to be printed
 * @f: function pointer
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
