#include<stdio.h>
void main(){
    int a=4,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d and b is %d", a,b);
}