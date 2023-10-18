#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - () program WILL generates random valid
* FOR PROGRAM CRACKME
*
* Return: 0 (Success)
*/
int main(void)
{
	int passkey[70], i, total = 0, n;

	srand(time(NULL));

	for (i = 0; i < 70; i++)
	{
		passkey[i] = rand() % 78;
		total += (passkey[i] + '0');
		putchar(passkey[i] + '0');
		if ((2772 - total) - '0' < 78)
		{
			n = 2772 - total - '0';
			total += n;
			putchar(n + '0');
			printf("\n");
			break;
		}
	}

	return (0);
}
