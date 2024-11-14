#include<stdio.h>
#include<string.h>
void main(){
    char d, str1[20],str2[20];
    printf("enter str1: ");
    gets(str1);
    puts(str1);
    strcpy(str2,str1);
    strrev(str2);
    puts(str2);
    d=strcmp(str1,str2);
    if(d==0){
        printf("pallidrome");
    }
    else{
        printf("not pallidrome");
    }


}