#include<stdio.h>
int n;
void main(){
    printf(" enter the char: ");
    scanf("%c",&n);
    if(n=='a'< n=='z'){
        printf("%c is lowercase", n);

    }
    else{
        printf("%c is uppercase", n);
    }
}