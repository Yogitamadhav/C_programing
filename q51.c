#include<stdio.h>
void main(){
    int n, rev=0, rem, org;
    printf("enter the number: ");
    scanf("%d",&n);
    org=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(org==rev){
        printf("palidrome");
    }
    else{
        printf("not ");
    }
}