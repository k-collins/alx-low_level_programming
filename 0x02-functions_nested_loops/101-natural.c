#include <stdio.h>

/**
 * main - printinng the total of all multiples of 3,5 below 1024
 *
 * Return: terminate and return 0
 * 
 */

int main(void)
{
	int n, total = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			total += n;
		}
	}
	printf("%d\n", total);

	return (0);
}
