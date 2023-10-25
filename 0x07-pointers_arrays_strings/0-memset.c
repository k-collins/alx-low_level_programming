#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * 
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: ()Amount to copy
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int reader = 0;

	while (reader < n)
	{
		dest[reader] = src[reader];
		reader++;
	}

	return (dest);
}
