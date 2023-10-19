#include <stdio.h>

/**
 * _atoi -  function will convert a string to an integer
 * @var:  the string to convert to int
 *
 * Return: returns integer value
 */

int _atoi(char *var)
{
	int negsum = 1;
	unsigned int number = 0;
	char *str = var;

	while (*str != '\0' && (*str < '0' || *str > '9'))
	{
		if (*str == '-')
			negsum *= -1;
		str++;
	}
	if (*str != '\0')
	{
		do {
			number = number * 10 + (*str - '0');
			str++;
		} while (*str >= '0' && *str <= '9');
	}
	return (number * negsum);
}
