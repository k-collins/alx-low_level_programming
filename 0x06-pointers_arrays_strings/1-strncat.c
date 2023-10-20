#include "main.h"

/**
 * _strncat - () this function that concatenates two strings
 * 
 * @str1: string to be appended to
 * @str2: string to append
 * @bytes_n: append bytes_n number of bytes(chars)
 * Return: ()it will return concatenated string
 */

char *_strncat(char *str1, char *str2, int bytes_n)
{
	int count_str1 = 0, count_str2 = 0;

	while (str1[count_str1] != '\0')
		count_str1++;

	while (str2[count_str2] != str2[bytes_n])
	{
		str1[count_str1] = str2[count_str2];
		count_str1++;
		count_str2++;
	}
	str1[count_str1] = '\0';

	return (str1);
}
