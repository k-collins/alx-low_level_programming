#include "main.h"

int main(void)
{
        char putchars[] = "_putchar";
        int length = strlen(putchars);

        int i;


        for (i = 0; i < length; i++)
        {
                putchar(putchars[i]);
        }
        putchar('\n');

        return (0);
}
