#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: parameters
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
