#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - joins s1 and the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to use
 *
 * Return: new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	out = malloc(len1 + n + 1);
	if (out == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		out[i] = s1[i];
	for (i = 0; i < n; i++)
		out[len1 + i] = s2[i];
	out[len1 + n] = '\0';

	return (out);
}
