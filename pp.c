#include <stdio.h>

int main() {
    int i, j;
    int n = 1; // Start with the first odd number
    int count = 1; // Number of odd numbers to print in each row

    for (i = 1; i <= 3; i++) { // Loop for 3 rows
        for (j = 1; j <= count; j++) { // Print 'count' odd numbers in the row
            printf("%d\t", n); // Print the current odd number
            n += 2; // Move to the next odd number
        }
        count++; // Increase the count for the next row
        printf("\n"); // New line after each row
    }

    return 0; // Return success
}
