#include <stdio.h>
#include <ctype.h> 

void main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) { 
        printf("The character is an alphabet.\n");

        if (islower(ch)) { 
            printf("It's a lowercase letter.\n");
            ch = toupper(ch); 
            printf("Converted to uppercase: %c\n", ch);
        } else { 
            printf("It's an uppercase letter.\n");
            ch = tolower(ch); 
            printf("Converted to lowercase: %c\n", ch);
        }

    } else if (isdigit(ch)) { 
        printf("The character is a digit.\n");

    } else { 
        printf("The character is a punctuation symbol or special character.\n");
    }
}
