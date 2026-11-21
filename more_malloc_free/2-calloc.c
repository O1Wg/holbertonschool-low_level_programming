#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates zeroed memory for an array
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to the memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb > (unsigned int)-1 / size)
		return (NULL);

	total = nmemb * size;
	p = malloc(total);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		p[i] = 0;

	return (p);
}
