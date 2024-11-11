#include<stdio.h>
void main(){
    int large[6], i, j, largest=0;
    printf("enter number: ");
    for(i=0; i<=6; i++){
        scanf("%d", &large[i]);
    }
    for(j=0; j<=6;j++){
        if(largest<large[j]){
            largest=large[j];
        }
    }
    printf("largest no is %d\n", largest);
}