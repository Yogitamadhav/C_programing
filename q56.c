#include<stdio.h>
void main(){
    float n;
    int count=0, i=1;
    int d;
    printf("Enter the number: ");
    scanf("%f", &n);
    d = n;
    while(d > 0){
        d = d - i;
        i += 2;
        if(d >= 0){
            count++;
        }
    }
    printf("the square root is %d ", count);
}