#include <stdio.h>


void displayMenu();
double convertCurrency(double amount, double rate);

int main() {
    int choice;
    double amount, convertedAmount;
    const double INR_TO_USD = 0.012;
    const double INR_TO_EUR = 0.011;
    const double INR_TO_GBP = 0.0095;
    const double INR_TO_JPY = 1.81;

    printf("Welcome to the Currency Converter!\n");

    while (1) {
        displayMenu();
        printf("Enter your choice (1-5, 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program. Thank you!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        printf("Enter the amount in INR: ");
        scanf("%lf", &amount);

        switch (choice) {
            case 1:
                convertedAmount = convertCurrency(amount, INR_TO_USD);
                printf("%.2lf INR = %.2lf USD\n", amount, convertedAmount);
                break;
            case 2:
                convertedAmount = convertCurrency(amount, INR_TO_EUR);
                printf("%.2lf INR = %.2lf EUR\n", amount, convertedAmount);
                break;
            case 3:
                convertedAmount = convertCurrency(amount, INR_TO_GBP);
                printf("%.2lf INR = %.2lf GBP\n", amount, convertedAmount);
                break;
            case 4:
                convertedAmount = convertCurrency(amount, INR_TO_JPY);
                printf("%.2lf INR = %.2lf JPY\n", amount, convertedAmount);
                break;
            case 5:
                printf("%.2lf INR = %.2lf INR\n", amount, amount);
                break;
        }
    }

    return 0;
}


void displayMenu() {
    printf("\nCurrency Converter Options:\n");
    printf("1. Convert to USD\n");
    printf("2. Convert to EUR\n");
    printf("3. Convert to GBP\n");
    printf("4. Convert to JPY\n");
    printf("5. Convert to INR\n");
}


double convertCurrency(double amount, double rate) {
    return amount * rate;
}
