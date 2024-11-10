#include<stdio.h>
#include<string.h>
void main(){
    char str1[200],str2[200];
    printf("enter the string: ");
    gets(str1);
    puts(str1);
    strcpy(str2,str1);
    puts(str1);
    puts(str2);
}