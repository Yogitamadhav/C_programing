#include <stdio.h>
#include <ctype.h> // For isalpha, isdigit, islower, isupper, tolower, toupper functions

void main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) { // Check if it's an alphabet
        printf("The character is an alphabet.\n");

        if (islower(ch)) { // Check if it's lowercase
            printf("It's a lowercase letter.\n");
            ch = toupper(ch); // Convert to uppercase
            printf("Converted to uppercase: %c\n", ch);
        } else { // It must be uppercase
            printf("It's an uppercase letter.\n");
            ch = tolower(ch); // Convert to lowercase
            printf("Converted to lowercase: %c\n", ch);
        }

    } else if (isdigit(ch)) { // Check if it's a digit
        printf("The character is a digit.\n");

    } else { // Check for other symbols
        printf("The character is a punctuation symbol or special character.\n");
    }
}
