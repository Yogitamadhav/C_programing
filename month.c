#include<stdio.h>

void main() {
    int month;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Check for each month and display the month name along with the number of days
    switch(month) {
        case 1:
            printf("January has 31 days.\n");
            break;
        case 2:
            printf("February typically has 28 days, and 29 days in a leap year.\n");
            break;
        case 3:
            printf("March has 31 days.\n");
            break;
        case 4:
            printf("April has 30 days.\n");
            break;
        case 5:
            printf("May has 31 days.\n");
            break;
        case 6:
            printf("June has 30 days.\n");
            break;
        case 7:
            printf("July has 31 days.\n");
            break;
        case 8:
            printf("August has 31 days.\n");
            break;
        case 9:
            printf("September has 30 days.\n");
            break;
        case 10:
            printf("October has 31 days.\n");
            break;
        case 11:
            printf("November has 30 days.\n");
            break;
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }
}

