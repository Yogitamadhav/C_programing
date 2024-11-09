#include<stdio.h>
int n, i, a=0;
void main(){
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n/2;i++){
        if(n%i==0){
            a+=i;   
        }
    }
    if(a==n){
        printf("Perfect number");
    }
    else{
        printf("not Perfect");
    }
}