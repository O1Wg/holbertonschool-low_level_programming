#include <stdlib.h>
#include "dog.h"

/**
 * copy_str - returns a newly allocated copy of a string
 * @s: string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
static char *copy_str(char *s)
{
	char *copy;
	int len, i;

	for (len = 0; s[len] != '\0'; len++)
		;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = s[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name (copied)
 * @age: dog's age
 * @owner: owner's name (copied)
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = copy_str(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = copy_str(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
