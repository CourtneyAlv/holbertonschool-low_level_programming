#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Description: defines a new type called dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
