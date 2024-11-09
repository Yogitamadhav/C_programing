#include<stdio.h>
int i, j;
void main(){
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c%c\t", 64+j,96+j);
        }
        printf("\n");
    }
}