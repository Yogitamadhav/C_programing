#include<stdio.h>
int fact(int c);
void main(){
    int n,result;
    printf("enter the no:");
    scanf("%d",&n);
    result=fact(n);
    printf("factorial of %d is %d\n", n, result);
}

int fact(int c){
    if(c<=1){
        return 1;
    } 
    else{
        return c * fact(c-1);
    }
    
}