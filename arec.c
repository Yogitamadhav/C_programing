#include<stdio.h>
void main(){
    int display[2][2],i,j,k=0;
    printf("enter element:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("display[%d][%d]: ",i,j);
            scanf("%d",&display[i][j]);
        }
    }
    printf("data print:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(display[j]!=display[i]){
                k=k+display[i][j];
            }
        }
    }
    printf("%d addition ",k);
}