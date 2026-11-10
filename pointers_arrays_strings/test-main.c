#include "main.h"
#include <stdio.h>

int main(void)
{
	int a = 0, b = -5, c = 98;
	int guard = 1234;

	reset_to_98(&a);
	reset_to_98(&b);
	reset_to_98(&c);
	printf("a=%d b=%d c=%d guard=%d\n", a, b, c, guard);
	return (0);
}
