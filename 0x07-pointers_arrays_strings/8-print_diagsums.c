#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - this () function will prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: The matrix
 * @size: The lengn of the arrays
 */

void print_diagsums(int *a, int size)
{
	int read = 0, add1, add2, lengn;

	add1 = add2 = 0;
	lengn = size * size;

	while (read < lengn)
	{
		if (read % (size - 1) == 0 && read < lengn - 1 && read > 0)
		{
			add2 += *(a + read);
		}

		if (read % (size + 1) == 0 || read == 0)
		{
			add1 += *(a + read);
		}

		read++;
	}

	printf("%d, %d\n", add1, add2);
}
