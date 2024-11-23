#include<stdio.h>
int n,i,j,count=1;
void main(){
    printf("enter the row: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d\t",count);
            count++;
        }
        printf("\n");
    }
}