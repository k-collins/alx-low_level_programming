#include <stdio.h>

/**
 * swap_int - ()will swaps integers
 *
 * @a: pointer to first integer
 * @b: pointer to second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = *a;
}
