#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, temp;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = n; i >= 0; i--) {
        printf("%d ", t1);
        temp = t1 + t2;  
        t1 = t2;             
        t2 = temp;       
    }
    printf("\n");
    return 0;
}
