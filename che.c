#include<stdio.h>
int n;
void main(){
    printf(" enter the char: ");
    scanf("%c",&n);
    if(n=='a'< n=='z'||n=='A'< n=='Z'){
        printf("%c is alphabets", n);

    }
    else if(n>='0'){
        printf("%c is number", n);
    }
    else{
        printf("%c is symbol", n);
    }
}