#include <stdio.h>
#include <string.h>
int v = 0, c = 0;

int main() {
    char str[20];
    
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (strchr("aeiouAEIOU", str[i])) {
            v++; 
        } else {  
            c++;  
        }
    }

    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);

    return 0;
}
