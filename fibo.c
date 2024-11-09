#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = n; i >= 0; i--) {
        printf("%d ", t1);
        nextTerm = t1 + t2;  // Calculate the next term in the series
        t1 = t2;             // Update t1 to the next term
        t2 = nextTerm;       // Update t2 to the next term
    }

    printf("\n");
    return 0;
}
