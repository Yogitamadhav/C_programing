#include<stdio.h>
void main(){
    int cost_prise, sell_prise, profitorloss=0 ;
    printf("Enter the Cost Price: ");
    scanf("%d", &cost_prise);
    printf("Enter the Selling Price: ");
    scanf("%d", &sell_prise);
    if(sell_prise>cost_prise){
        profitorloss=sell_prise-cost_prise;
        printf("profit is %d\n", profitorloss);
    }
    else if(cost_prise>sell_prise){
        profitorloss=cost_prise-sell_prise;
        printf("loss is %d\n", profitorloss);
    }
    else{
        printf("No Profit, No Loss.\n");
    }
    
}