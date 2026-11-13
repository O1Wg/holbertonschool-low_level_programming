#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
