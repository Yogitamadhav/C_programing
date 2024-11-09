#include<stdio.h>
void main(){
    int num, i=1, mul;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num>=0){
        while(i<=10){
        mul=num*i;
        printf("%d\n",mul);
        i++;
        } 
    }
    else{
        printf("negative");
    }
}