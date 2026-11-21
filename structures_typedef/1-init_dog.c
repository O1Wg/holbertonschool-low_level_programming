#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type strcut dog
 * @d: pointer to the strcut to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
