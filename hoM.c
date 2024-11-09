#include <stdio.h>

int main() {
    int choice, qty, rate, total, grandTotal = 0;
    char moreItems;

    printf("\nMENU CARD \n Select your drink:\n");
    printf("1. Espresso (Rs 30)\n");
    printf("2. Latte (Rs 50)\n");
    printf("3. Cappuccino (Rs 40)\n");
    printf("4. Mocha (Rs 45)\n");
    printf("5. Green Tea (Rs 20)\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Espresso.\nEnter the quantity: ");
                scanf("%d", &qty);
                rate = 30;
                total = qty * rate;
                printf("Total for Espresso: Rs %d\n", total);
                grandTotal += total;
                break;
                
            case 2:
                printf("You have selected Latte.\nEnter the quantity: ");
                scanf("%d", &qty);
                rate = 50;
                total = qty * rate;
                printf("Total for Latte: Rs %d\n", total);
                grandTotal += total;
                break;
                
            case 3:
                printf("You have selected Cappuccino.\nEnter the quantity: ");
                scanf("%d", &qty);
                rate = 40;
                total = qty * rate;
                printf("Total for Cappuccino: Rs %d\n", total);
                grandTotal += total;
                break;
                
            case 4:
                printf("You have selected Mocha.\nEnter the quantity: ");
                scanf("%d", &qty);
                rate = 45;
                total = qty * rate;
                printf("Total for Mocha: Rs %d\n", total);
                grandTotal += total;
                break;
                
            case 5:
                printf("You have selected Green Tea.\nEnter the quantity: ");
                scanf("%d", &qty);
                rate = 20;
                total = qty * rate;
                printf("Total for Green Tea: Rs %d\n", total);
                grandTotal += total;
                break;
                
            default:
                printf("Invalid choice, please select a valid item.\n");
                break;
        }

        printf("Do you want to add more items? (y/n): ");
        scanf(" %c", &moreItems);
    } while (moreItems == 'y' || moreItems == 'Y');

    printf("\n----- BILL SUMMARY -----\n");
    printf("Grand Total: Rs %d\n", grandTotal);
    printf("------------------------\n");

    return 0;
}
