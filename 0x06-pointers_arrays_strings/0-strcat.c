#include "main.h"

/**
 * _strcat - ()this function will concatenate two string
 * @str1: string to be appended to
 * @str2: string to append
 * Return: () this will return concatenated string
 */

char *_strcat(char *str1, char *str2)
{
	int count_str1 = 0, count_str2 = 0;

	while (str1[count_str1] != '\0')
		count_str1++;

	while (str2[count_str2] != '\0')
	{
		str1[count_str1] = str2[count_str2];
		count_str1++;
		count_str2++;
	}
	str1[count_str1] = '\0';

	return (str1);
}
