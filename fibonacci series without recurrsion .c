#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms of the Fibonacci series
    printf("Fibonacci Series: %d %d ", a, b);

    // Calculate and print the remaining terms
    for (i = 2; i < n; i++) {
        next = a + b;  // Next Fibonacci number
        printf("%d ", next);

        // Update a and b for the next iteration
        a = b;
        b = next;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms of the Fibonacci series
    printf("Fibonacci Series: %d %d ", a, b);

    // Calculate and print the remaining terms
    for (i = 2; i < n; i++) {
        next = a + b;  // Next Fibonacci number
        printf("%d ", next);

        // Update a and b for the next iteration
        a = b;
        b = next;
    }

    return 0;
}
