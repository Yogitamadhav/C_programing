#include<stdio.h>
int n;
void main(){
    printf(" enter the no: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even", n);

    }
    else{
        printf("%d is odd", n);
    }
}