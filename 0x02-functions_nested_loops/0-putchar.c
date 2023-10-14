#include "main.h"

int main(void)
{
        char putchars[] = "_putchar";
        char length = strlen(putchars);

        char i;


        for (i = 0; i < length; i++)
        {
                putchar(putchars[i]);
        }
        putchar('\n');

        return (0);
}
