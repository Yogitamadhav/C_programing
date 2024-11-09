#include<stdio.h>
int i, j;
void main(){
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c\t", 96+j);
        }
        printf("\n");
    }
    for(i=3;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c\t", 96+j);
        }
        printf("\n");
    }
}