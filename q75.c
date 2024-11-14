#include <stdio.h>

int binaryToDecimal(long long binary) {
    int decimal = 0;
    int base = 1;  

    while (binary > 0) {
        int last_digit = binary % 10;  
        binary = binary / 10;  
        decimal += last_digit * base;  
        base = base * 2; 
    }

    return decimal;
}

int main() {
    long long binary;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %d\n", decimal);
    
    return 0;
}
