#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int line, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (line = 1; line <= size; line++)
	{
		for (space = 0; space < size - line; space++)
			_putchar(' ');
		for (hash = 0; hash < line; hash++)
			_putchar('#');
		_putchar('\n');
	}
}
