#include<stdio.h>
void main(){
    int display1[2][2],display2[2][2],result[2][2],i,j,k;
    printf("enter element array 1:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("display1[%d][%d]: ",i,j);
            scanf("%d",&display1[i][j]);
        }
    }
    printf("enter element array 2:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("display2[%d][%d]: ",i,j);
            scanf("%d",&display2[i][j]);
        }
    }
    printf("Multiplication print:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
         result[i][j]=0;
         for(k = 0; k < 2; k++){
            result[i][j] += display1[i][k] * display2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
   
}