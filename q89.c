#include<stdio.h>
void main(){
    int a,n = 0;
    printf("enter the number:");
    scanf("%d", &n);
    a = n * 10;
    a = a - n;
    printf("%d",a);
}