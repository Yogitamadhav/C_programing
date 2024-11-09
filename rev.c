#include<stdio.h>
int n, rem,a;
void main(){
    printf("enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        a=a*10+rem;
        n=n/10;
    }
    printf("%d",a);
}