#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the number: ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swap number: a is %d and b is %d", a,b);
}