#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all integers from n to 98, followed by a new line
 * @n: the number to start from
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
