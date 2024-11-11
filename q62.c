#include<stdio.h>
int power(int n, int e);
int power(int n,int e){
    if(e==0){
        return 1;
    }
    return n * power(n, e-1);
}
void main(){
    int n, e;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("enter power: ");
    scanf("%d",&e);
    printf("%d",power(n, e));

}