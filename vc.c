#include<stdio.h>
int n;
void main(){
    printf(" enter the char: ");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
        printf("%c is vowels", n);

    }
    else{
        printf("%c is consonant", n);
    }
}