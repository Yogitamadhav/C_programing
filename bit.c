#include<stdio.h>
void swap(int x, int y);
void main(){
    int x,y;
    printf("enter two no:");
    scanf("%d%d",&x,&y);
    swap(x,y);
}
void swap(int x, int y){
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x is %d and y is %d",x,y);
}