#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the first elemnt of the array
 * @n: number of elemnts to print
 *
 * Description: elements are separated by ", " and followed by a new line
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i< n; i++)
	{
		printf("%d", a[i]); 
		if (i < n -1)
			printf(", ");
	}
	printf("\n");
}
