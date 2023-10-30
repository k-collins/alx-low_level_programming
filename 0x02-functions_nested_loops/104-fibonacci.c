#include <stdio.h>

int main(void)
{
    float first = 0;
    float second = 1; 
    float next;
    int n = 98;
    int i;

    printf("%.0f, %.0f, ", first, second); 

    for (i = 2; i < n; i++) {
        next = first + second;
        printf("%.0f", next);

        if (i != n - 1) {
            printf(", "); 
        }

        first = second;
        second = next;
    }
    printf("\n");
}
