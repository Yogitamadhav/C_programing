#include<stdio.h>
void main()
{
    int i, j, row, k;
    printf("enter the row:");
    scanf("%d", &row);
    for(i=1; i<=row;i++)
    {
        for(j=i;j<row;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i - 1);k++){
            printf("*");
        }
        printf("\n"); 
    }
}