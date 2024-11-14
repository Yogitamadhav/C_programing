#include <stdio.h>

int main() {
    int n, i, evenSum = 0, oddSum = 0;
    int arr[100];  // Assuming a maximum size of 100 for simplicity

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    // Display the results
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
