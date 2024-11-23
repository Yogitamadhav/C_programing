#include <stdio.h>
int n;
void main() {
 
    printf("Enter a character: ");
    scanf("%c", &n);


    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
        printf("%c is an alphabet.\n", n);
    }

    else if (n >= '0' && n <= '9') {
        printf("%c is a number.\n", n);
    }
 
    else {
        printf("%c is a symbol.\n", n);
    }
}
