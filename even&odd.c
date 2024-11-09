#include<stdio.h>
void main(){
    int num=0,i=0,j=0;
    do{
        if (num%2==0){
            i=i+num;
            printf("even addition %d\n",i);            
        }
        else{
            j=j+num;
            printf("odd addition %d",j);
        }
        num++;
    }
    while(num>=50);
    
}