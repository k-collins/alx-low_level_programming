#include <stdio.h>

/**
* _strncpy - ()this function that copies a string.
* @str1: copy str2 to this buffer
* @str2: this is the str2 to copy
* @bytes_n: bytes_n bytes to be copied
* Return: ()this will return copied string
*/

char *_strncpy(char *str1, char *str2, int bytes_n)
{
	int counter = 0;

	while (counter < bytes_n && str2[counter] != '\0')
	{
		str1[counter] = str2[counter];
		counter++;
	}

	while (counter < bytes_n)
	{
		str1[counter] = '\0';
		counter++;
	}

	return (str1);
}
