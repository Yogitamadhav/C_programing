#include <stdio.h>

int main() {
    int num, digit;
    int zeroCount = 0, oddCount = 0, evenCount = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1; 
    }

    
    while (num != 0) {
        digit = num % 10; 

        if (digit == 0) {
            zeroCount++;
        } else if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        num /= 10; 
    }

    printf("Zeroes: %d\n", zeroCount);
    printf("Odd digits: %d\n", oddCount);
    printf("Even digits: %d\n", evenCount);

    return 0;
}
