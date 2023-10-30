#include <stdio.h>

void printFibonacci(int n) {
    unsigned long long int first = 0; // First Fibonacci number
    unsigned long long int second = 1; // Second Fibonacci number
    unsigned long long int next; // To store the next Fibonacci number

    printf("%llu, %llu, ", first, second); // Print the first two numbers

    for (int i = 2; i < n; i++) {
        next = first + second;
        printf("%llu", next);

        if (i != n - 1) {
            printf(", "); // Print comma and space except for the last number
        }

        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    // Print the first 98 numbers of the Fibonacci sequence
    printFibonacci(98);

    return 0;
}
