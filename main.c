#include <stdio.h>

int main() {
    unsigned int n;
    unsigned int i;
    unsigned long int factorial = 1;

    printf("Hullo, Mate!\n");
    printf("I can compute the factorial of any N number (N!).\n");
    printf("\nGive me a positive integer: ");

    scanf("%d", &n);

    i = n;
    while (i > 1) {
        factorial *= i--;
    }

    printf("Factorial of %d (%d!) = %ld\n", n, n, factorial);

    return 0;
}