#include<stdio.h>
int n,a,r,b=0;
void main(){
    printf("enter number:");
    scanf("%d",&n);
    a=n;
    while (n!=0)
    {
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    if (a == b) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
        
}