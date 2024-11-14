#include <stdio.h>

int main() {
    int n, m, arr1[10][10], arr2[10][10], i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) { 
            scanf("%d", &arr1[i][j]);
        }
    }

  
    printf("Original matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) { 
            arr2[j][i] = arr1[i][j];
        }
    }

    
    printf("Transposed matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) { 
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
