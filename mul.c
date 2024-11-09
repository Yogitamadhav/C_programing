#include <stdio.h>

int n, i=1;

int main() {
    printf("Enter the number: ");
    scanf("%d", &n);  // Removed the newline character here
/*  for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
*/
/*
    while (i<=10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
 */
do{
    printf("%d * %d = %d\n", n, i, n * i);
        i++;
} while (i<=10);

    return 0;
}
