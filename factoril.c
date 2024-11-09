#include<stdio.h>
void main(){
    int a, i=1;
    printf("enter the number: ");
    scanf("%d", &a);
    if(a>0){
        while(a!=0){
            i=i*a;
            a--;
      
        }
              printf("%d",i);
    }
    else{
        printf("negative");
    }

}