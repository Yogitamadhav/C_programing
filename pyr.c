#include<stdio.h>
int n,i,j,k;
void main(){
    printf("enter the num: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++){
            printf("%c",'*');
        }
        printf("\n");
    }
}