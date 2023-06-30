#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: function takes a pointer to a struct dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
