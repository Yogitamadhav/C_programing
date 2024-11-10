#include<stdio.h>
#include<string.h>
void main(){
    char str[200];
    printf("enter the string: ");
    gets(str);
    puts(str);
    strrev(str);
    puts(str);
}