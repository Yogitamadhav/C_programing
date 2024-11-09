#include<stdio.h>
int marks, a, b,c,d,e;
void main(){
    printf("enter sunject marks:");
    scanf("%d\t%d\t%d\t%d\t%d",&a,&b,&c,&d,&e);
    marks=(a+b+c+d+e)/5;
    printf("%d",marks);
    if(marks>=81 && marks<=100){
        printf("grade is A ");
    }
    else if(marks>=61 && marks<=80){
        printf("grade is B ");
    }
    else if(marks>=40 && marks<=60){
        printf("pass");
    }
    else if(marks<=40){
        printf("fail");
    }
}