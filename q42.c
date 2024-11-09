#include <stdio.h>
void decimalToBinary(int num) ;
void decimalToOctal(int num);
void decimalToHexadecimal(int num);
int main() {
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("\nConversions:\n");
    decimalToBinary(number);
    decimalToOctal(number);
    decimalToHexadecimal(number);

    return 0;
}
void decimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32]; 
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimalToOctal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int octal[32]; 
    int i = 0;

    while (num > 0) {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void decimalToHexadecimal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    char hex[32]; 
    int i = 0;

    while (num > 0) {
        int temp = num % 16;
        if (temp < 10) {
            hex[i] = temp + '0';
        } else {
            hex[i] = temp - 10 + 'A';
        }
        num /= 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

