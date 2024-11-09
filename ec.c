#include <stdio.h>

int main() {
    int num, digit;
    int zeroCount = 0, oddCount = 0, evenCount = 0;

    // Prompt the user to enter a 4-digit number
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Check if the input is a 4-digit number
    if (num < 1000 || num > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1; // Exit the program if the input is not a 4-digit number
    }

    // Process each digit
    while (num != 0) {
        digit = num % 10; // Extract the last digit

        // Check if the digit is zero, odd, or even
        if (digit == 0) {
            zeroCount++;
        } else if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        num /= 10; // Remove the last digit
    }

    // Display the counts
    printf("Zeroes: %d\n", zeroCount);
    printf("Odd digits: %d\n", oddCount);
    printf("Even digits: %d\n", evenCount);

    return 0;
}
