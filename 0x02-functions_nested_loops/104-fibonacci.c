#include <stdio.h>

/**
 * main - main execution code
 *
 * This will prints the first 98 Fibonacci numbers
 * 
 * Return: this will return nothing
 */

int main(void)
{
	int loop = 2;

	float i = 1;
	float j = i + 1;
	float k = i + j;

	printf("%.0f, ", i);
	printf("%.0f, ", j);
	while (loop < 98)
	{
		loop++;
		printf("%.0f", k);
		i = j;
		j = k;
		k = i + j;
		if (loop < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}