#include "main.h"

int main(void)
{
        char putchars[] = "_putchar";
        char length = strlen(putchars);

        char i = '0';


        for (i; i < length; i++)
        {
                putchar(putchars[i]);
        }
        putchar('\n');

        return (0);
}
