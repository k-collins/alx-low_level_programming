#include <stdio.h>

int main(void)
{
    float first = 0; // First Fibonacci number
    float second = 1; // Second Fibonacci number
    float next; // To store the next Fibonacci number
    int n = 98;

    printf("%.0f, %.0f, ", first, second); // Print the first two numbers

    for (int i = 2; i < n; i++) {
        next = first + second;
        printf("%.0f", next);

        if (i != n - 1) {
            printf(", "); // Print comma and space except for the last number
        }

        first = second;
        second = next;
    }
    printf("\n");
}
