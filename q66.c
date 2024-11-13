#include<stdio.h>
void main(){
    char i=0, j=0,str1[20],str2[20];
    gets(str1);
    gets(str2);
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        j++;
        i++;
    }
    puts(str1);
}