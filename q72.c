#include<stdio.h>
void main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    if(((n/2)*2)==n){
        printf("even");
    }
    else{
        printf("odd");
    }
}