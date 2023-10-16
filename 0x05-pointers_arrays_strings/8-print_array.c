#include <stdio.h>
#include <stdio.h>
/**
 * print_array - ()will print array
 * @arr: pointer of array
 * @num: how many times to prints
 *
 */
void print_array(int *arr, int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		printf("%d", arr[i]);
		if (i != num - 1)
			printf(", ");
	}
	printf("\n");
}
