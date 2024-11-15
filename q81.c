#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidEmail(char email[]) {
 
    char *atPos = strchr(email, '@');
    //printf("%d\n", atPos);
    if (atPos == NULL || atPos == email || *(atPos + 1) == '\0') {
        return 0; 
    }


    char *dotPos = strchr(atPos + 1, '.');
    //printf("%d\n", dotPos);
    if (dotPos == NULL || *(dotPos + 1) == '\0') {
        return 0; 
    }

    
    for (int i = 0; email[i] != '\0'; i++) {
        if (!isalnum(email[i]) && email[i] != '@' && email[i] != '.' && email[i] != '-' && email[i] != '_') {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char email[100];
    
    printf("Enter email address: ");
    scanf("%s", email);
    
    if (isValidEmail(email)) {
        printf("The email address is valid.\n");
    } else {
        printf("The email address is not valid.\n");
    }

    return 0;
}
