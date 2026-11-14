#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Description: every '-' before the first digit flips the sign;
 * the number is built as a negative value so that INT_MIN fits
 * without overflowing, then flipped at the end if needed.
 *
 * Return: the converted integer, or 0 if s contains no digits
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 - (s[i] - '0');
		i++;
	}

	if (sign == 1)
		result = -result;

	return (result);
}

