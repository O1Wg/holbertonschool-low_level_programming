#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the size of the table (0 to 15)
 */
void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n < 0 || n > 15)
		return;
	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		for (col = 1; col <= n; col++)
		{
			prod = row * col;
			_putchar(',');
			_putchar(' ');
			if (prod < 100)
				_putchar(' ');
			if (prod < 10)
				_putchar(' ');
			if (prod >= 100)
				_putchar(prod / 100 + '0');
			if (prod >= 10)
				_putchar(prod / 10 % 10 + '0');
			_putchar(prod % 10 + '0');
		}
		_putchar('\n');
	}
}
