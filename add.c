#include<stdio.h>
void main(){
    int num=1,i=0,j=0;
    do{
        if (num%2==0){
            i=i+num;
                       
        }
        else{
            j=j+num;
            
        }
        num++;
    }
    while(num<=50);
    printf("even addition %d\n",i); 
    printf("odd addition %d",j);
    
}