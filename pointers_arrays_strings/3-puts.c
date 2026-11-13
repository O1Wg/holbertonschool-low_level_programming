#include "main.h"

/**
 *  main - write a function that prints a string
 *
 *  Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
