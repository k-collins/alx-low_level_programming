#include "main.h"

/**
 * _memset - () the function fills the first
 * n bytes of the memory area pointed to by s with the constant byte b
 * 
 * @s: to be pointed to
 * @b: Bytes to fill in 
 * @n: Amount it will fill in
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int read = 0;

	while (read < n)
	{
		s[read] = b;
		read++;
	}

	return (s);
}
