#include <stdio.h>

/**
 * swap_int - ()will swaps integers
 *
 * @a: pointer to first integer
 * @b: pointer to second integer
 */

void swap_int(int *a, int *b)
{
	int temp1 = *b;
	int temp2 = *a;
	*a = temp1;
	*b = temp2;
}
