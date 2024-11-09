#include<stdio.h>
void main()
{
    int num, reversedNum=0, remainder,origionalNum;
    printf("enter number: ");
    scanf("%d",&num);
    origionalNum=num;
    while(num!=0){
        remainder=num%10;
        reversedNum=reversedNum*10+remainder;
        num=num/10;
    }
    printf("%d is original number\n", origionalNum);
    printf("%d is reverse", reversedNum);


}