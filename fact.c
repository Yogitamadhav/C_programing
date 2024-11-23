#include <stdio.h>

int main() {
    int factorial = 1;

    printf("Factorial series for the first 10 natural numbers:\n");

    for (int num = 1; num <= 10; num++) {
        factorial = 1; 
        for (int i = 1; i <= num; i++) {
            factorial *= i;  
        }
        printf("Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
