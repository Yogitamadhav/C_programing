#include<stdio.h>
int largest(int a,int b, int c);
void main(){
    int d,e,f;
    printf("enter 3 number:");
    scanf("%d%d%d",&d,&e,&f);
    printf("%d is largest",largest(d,e,f));
}

int largest(int a,int b, int c){
    if(a>b || a>c){
        return a;
    }
    else if(b>a || b>c){
        return b;
    }
    else{
        return c;
    }
}