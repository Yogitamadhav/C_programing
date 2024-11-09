#include <stdio.h>

int main() {
    int i;
    unsigned long long factorial = 1;

    printf("Factorial series for the first 10 natural numbers:\n");

    for (i = 1; i <= 10; i++) {
        factorial *= i;
        printf("Factorial of %d = %llu\n", i, factorial);
    }

    return 0;
}
