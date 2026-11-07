#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100, but Fizz for multiples
 * of 3, Buzz for multiples of 5, and FizzBuzz for multiples of both
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
			printf(" ");
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	printf("\n");

	return (0);
}
