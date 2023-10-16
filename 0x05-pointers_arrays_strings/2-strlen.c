#include <stdio.h>

/**
 *_strlen - () will compute string length
 *
 * @str: argument to take in
 *
 * Return: will return the length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
