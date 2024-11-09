#include<stdio.h>
int i, j, n=1;
void main(){
    for(i = 4;i >= 1;i--){
        for(j = 1;j <= i;j++){
            printf("%d\t",n++ );
        }
        printf("\n");
    }
}