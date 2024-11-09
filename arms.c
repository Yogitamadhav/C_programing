#include<stdio.h>
int a=0,n,r,o;
void main(){
    printf("enter no:");
    scanf("%d",&n);
    o=n;
    while(n!=0){
        r=n%10;
        a+=r*r*r;
        n=n/10;
    }
    //printf("%d",a);
    if(a==o){
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
}