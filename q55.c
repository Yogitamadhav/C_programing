#include <stdio.h>


int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    int gcd = findGCD(num1, num2);

  
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
