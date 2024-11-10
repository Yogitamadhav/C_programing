#include<stdio.h>
void main(){
    int r,c;
    printf("enter the row and column:");
    scanf("%d%d",&r,&c);
    int display1[r][c], i, j, display2[c][r];
    printf("enter the number:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("matrix[%d][%d]:",i,j);
            scanf("%d",&display1[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",display1[i][j]); 
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            display2[j][i]=display1[i][j];  
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",display2[i][j]); 
        }
        printf("\n");
    }
    
}