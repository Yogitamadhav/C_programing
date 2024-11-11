#include<stdio.h>

void main() {
    char str[100];
    int i, j, temp;


    printf("Enter a string: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++);
    i = i - 1;
   
    for (j = 0; j < i; j++, i--) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    printf("Reversed string: %s", str);
}
