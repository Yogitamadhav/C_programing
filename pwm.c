#include<stdio.h>

void main() {
    char c;
    int i = 0;  

    while(1) {
        printf("Enter 'u' to increment, 'd' to decrement, or 'q' to quit: ");
        scanf(" %c", &c);  

        if (c == 'u') {
            if (i <= 90) {  
                i += 10;
                printf("Incremented: %d\n", i);
            } else {
                printf("Reached upper limit: %d\n", i);
            }
        } 
        else if (c == 'd') {
            if (i >= 10) {  
                i -= 10;
                printf("Decremented: %d\n", i);
            } else {
                printf("Reached lower limit: %d\n", i);
            }
        } 
        else if (c == 'q') {
            printf("Exiting...\n");
            break;  
        } 
        else {
            printf("Invalid input! Please enter 'u', 'd', or 'q'.\n");
        }
    }
}
