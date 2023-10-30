#include <stdio.h>

/**
 * main - This is a fizz buzz program,
 * multiples of 3 print will print Fizz,
 * multiples of 5 print will print Buzz
 * and multiple of both 3 and 5 will print print FizzBuzz
 * Return: will returns 0 on success
 */

int main(void)
{
	int times;

	for (times = 1; times <= 100; times++)
	{
		if (times % 3 == 0 && times % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (times % 3 == 0)
		{
			printf("Fizz");
		}
		else if (times % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", times);
		}

		if (times < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
