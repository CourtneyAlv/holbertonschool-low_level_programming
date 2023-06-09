#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog variable to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 *
 * Description: takes a pointer to a struct dog varaiable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
