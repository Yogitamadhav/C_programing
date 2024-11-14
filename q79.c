#include <stdio.h>


int sumadd(int n) {
    int rem, add = 0;
    while (n != 0) {
        rem = n % 10;
        add = add + (rem * rem); 
        n = n / 10;
    }
    return add;
}

int main() {
    int n, add;
    
   
    printf("Enter the number: ");
    scanf("%d", &n);


    add = n;

   
    while (add != 1 && add != 4) {
        add = sumadd(add);
    }

    
    if (add == 1) {
        printf("Happy number\n");
    } else {
        printf("Not a happy number\n");
    }

    return 0;
}
