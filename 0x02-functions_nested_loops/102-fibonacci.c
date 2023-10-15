#include <stdio.h>

/**
 * main - main execution
 *
 * This program will prints the first 50 Fibonacci numbers.
 *
 * Return: terminate and return 0;
 */

int main(void)
{
	int loop = 2;
	long int i = 1, j = i + 1, k = i + j;

	printf("%ld, %ld, ", i, j);
	while (loop < 50)
	{
		printf("%ld", k);
		loop++;
		i = j;
		j = k;
		k = i + j;
		if (loop < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
