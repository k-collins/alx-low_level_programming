#include <stdio.h>

/**
 * main - main execution
 *
 * This program will print the sum of even valued fibonacci below 400000
 *
 * Return: execute and return 0
 */

int main(void)
{
	int loop = 0;
	long int i = 1, j = i, k = i + j;

	while (k < 4000000)
	{
		if (k % 2 == 0)
		{
			loop += k;
		}
		i = j;
		j = k;
		k = i + j;
	}
	printf("%d\n", loop);
	return (0);
}
