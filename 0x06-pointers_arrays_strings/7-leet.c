#include <stdio.h>

/**
* leet - (this function function will encodes a string into 1337
* @main_str: string to manipulate
* Return: string
*/

char *leet(char *main_str)
{
	int str_arr[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},

		arr_int[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int a, b;

for (b = 0; main_str[b] != '\0'; b++)
{
	for (a = 0; str_arr[a] != '\0'; a++)
	{
	if (main_str[b] == str_arr[a])
	{
		main_str[b] = arr_int[a];
	}
	}
}
	return (main_str);
}
