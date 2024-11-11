#include<stdio.h>
#define SIZE 10
int digonadd(int matrix[SIZE][SIZE], int n);
int digonadd(int matrix[SIZE][SIZE], int n){
    int sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j){
                sum+=matrix[i][j];
               
            }
        }
    }
    return sum;

}
void main(){
    int n;
    int matrix[SIZE][SIZE];

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("%d",digonadd(matrix, n));

}