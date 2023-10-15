#include "main.h"

/**
 * print_to_98 - function to print to 98
 *
 * @n: argument to print from
 *
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

	if (n == 98)
	{
		printf("%d\n", n);
	}
}
