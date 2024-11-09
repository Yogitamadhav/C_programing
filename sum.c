#include<stdio.h>
int  n, r, a=0;
int sum ();
void main(){
printf("sum is %d\n",sum());

}
int sum(){
    printf("enter the no:");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        a+=r;
        n=n/10;
    }
    return a;
}