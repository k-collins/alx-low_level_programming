#include "main.h"

/**
 * print_diagonal - this function will print a diagonal line on the terminal
 * @n: number of characters to i
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
