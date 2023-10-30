#include "main.h"

/**
 * print_square - this function will prints a square
 * @size: sizes of square to draw
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
