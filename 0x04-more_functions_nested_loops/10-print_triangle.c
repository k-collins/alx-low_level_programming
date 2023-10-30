#include "main.h"

/**
 * print_triangle - this function will prints a triangle
 * of a specific given size
 * @size: the given size
 */

void print_triangle(int size)
{
	int height, width, hashes;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
		{
			putchar(' ');
		}

		for (hashes = 1; hashes <= height; hashes++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}
