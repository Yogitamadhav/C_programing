#include<stdio.h>
int n;
void main(){
    printf(" enter the year: ");
    scanf("%d",&n);
    if(n%100==0){
        if(n%400==0){
            printf("%d is leap year", n);
        }
        else{
            printf("%d is not leap year", n);
        }
    }
    else {
        if(n%4==0)
        {
         printf("%d is leap year", n);
         }
         else{
             printf("%d is not leap year", n);
         }
    }
}