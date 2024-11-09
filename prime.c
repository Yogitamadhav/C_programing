#include<stdio.h>
int n,i,count=0;
void main(){
    printf("enter number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }
    }
    if(count!=2){
        printf("not prime number");
    }
    else{
        printf("prime number");
    }
}