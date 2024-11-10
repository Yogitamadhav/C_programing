#include<stdio.h>
void dtob(int n);
void main(){
    int n;
    printf("enter the decimal: ");
    scanf("%d",&n);
    printf("Binary equivalent of %d is: ", n);
    dtob(n);  
    printf("\n");
}
void dtob(int n){
    if(n==0){
        return;
    }
    dtob(n/2);
    printf("%d", n % 2); 
}