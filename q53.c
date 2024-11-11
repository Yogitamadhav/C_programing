#include <stdio.h>

int factorial(int n);  // Function to calculate factorial using recursion

void main() {
    int n, result;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is non-negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(n);  // Call the recursive function
        printf("Factorial of %d is: %d\n", n, result);
    }
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) {  // Base case: factorial of 0 or 1 is 1
        return 1;
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}
