#include<stdio.h>
int n;
void main(){
    printf(" enter the no: ");
    scanf("%d",&n);
    if(n>0){
        printf("%d is positive", n);

    }
    else{
        printf("%d is negative", n);
    }
}