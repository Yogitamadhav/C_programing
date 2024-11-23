#include<stdio.h>
int marks, a, b,c,d,e;
void main(){
    printf("enter sunject marks:");
    scanf("%d\t%d\t%d\t%d\t%d",&a,&b,&c,&d,&e);
    marks=(a+b+c+d+e)/5;
    //printf("%d",marks);
    if(marks>=81 && marks<=100){
        printf("percentage = %d and grade is A ", marks);
    }
    else if(marks>=61 && marks<=80){
        printf("percentage = %d and grade is B ", marks);
    }
    else if(marks>=40 && marks<=60){
        printf("percentage = %d and pass", marks);
    }
    else if(marks<=40){
        printf("percentage = %d and fail", marks);
    }
}