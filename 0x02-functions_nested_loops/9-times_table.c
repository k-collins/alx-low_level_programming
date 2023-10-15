#include "main.h"

/**
 * times_table - Function to print time table from 0 to 9
 */

void times_table(void) 
{
        int table, times, results;

        for (table = 0; table <= 9; table++)
	{
                for (times = 0; times <= 9; times++)
                {
                        results = table * times;

                        if (times == 0)
                        {
                                putchar('0' + results);
                        }
                        else if (results <= 9)
                        {
                                putchar(',');
                                putchar(' ');
                                putchar(' ');
                                putchar('0' + results);
                        }
                        else if (results > 9)
                        {
                                putchar(',');
                                putchar(' ');
                                putchar('0' + (results / 10));
                                putchar('0' + (results % 10));
                        }
                }
                putchar('\n');
        }
                               
}
