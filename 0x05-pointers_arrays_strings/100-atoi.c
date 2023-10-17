#include <stdio.h>
#include "2-strlen.b"

/**
 * _atoi - ()will onverts string to integer
 * @str: str to convert
 *
 * Return: returns integer
 */
int _atoi(char *str)
{
	int i;
	int a = 0;
	int b;
	int c = 1;
	int num = 0;

	for (i = 0; i < _strlen(str); i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9') && b > 0)
			break;
		if (str[i] == '-')
			a--;
		if (str[i] == '+')
			a++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			b++;
		}
	}
	while (b > 0)
	{
		num += ((str[i - 1] - '0') * c);
		i--;
		b--;
		c *= 10;
	}
	if (a >= 0)
	{
		num *= 1;
	} else
	{
		num *= -1;
	}
	return (num);
}
