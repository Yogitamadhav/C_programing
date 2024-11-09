#include<stdio.h>
int n, i;
void main(){
    printf("enter the number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }
}