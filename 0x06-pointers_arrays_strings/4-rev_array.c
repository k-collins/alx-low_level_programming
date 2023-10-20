#include <stdio.h>

/**
 * reverse_array - ()this function will reverses the elements of an array of ints
 * @arr_param: array
 * @number: the number of elements in array
 */

void reverse_array(int *arr_param, int number)
{
	int tmp, i = 0, j = number - 1;

	while (i < j)
	{
		tmp = *(arr_param + i);
		*(arr_param + i) = *(arr_param + j);
		*(arr_param + j) = tmp;
		i++, j--;
	}
}
