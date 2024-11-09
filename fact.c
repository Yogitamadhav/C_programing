#include <stdio.h>

int n, i, a = 1; // Initialize 'a' to 1

int main() {
    printf("Enter the number: ");
    scanf("%d", &n);

    i = n;

    // Calculate the factorial of n using a do-while loop
    do {
        a *= i; // Multiply 'a' by 'i'
        i--;
    } while (i >= 1);

    printf("Factorial of %d is %d\n", n, a);

    return 0;
}
