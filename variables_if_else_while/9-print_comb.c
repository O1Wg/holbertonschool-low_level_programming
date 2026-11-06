#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers,
 * separated by a comma and a space, followed by a new line
 *
 * Return: Always (0);
 */
int main(void)
{
	int n;


	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
