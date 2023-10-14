#include "main.h"

int main(void)
{
        char putchars[] = "_putchar";

        for (int i = 0; i < strlen(putchars); i++)
        {
                putchar(putchars[i]);
        }
        putchar('\n');

        return (0);
}
