#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};


int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; 
    }
}

int calculateTotalDays(struct Date date) {
    int totalDays = 0;

    for (int i = 0; i < date.year; i++) {
        totalDays += isLeapYear(i) ? 366 : 365;
    }

    for (int i = 1; i < date.month; i++) {
        totalDays += getDaysInMonth(i, date.year);
    }

    totalDays += date.day;

    return totalDays;
}

int getDateDifference(struct Date date1, struct Date date2) {
    int totalDays1 = calculateTotalDays(date1);
    int totalDays2 = calculateTotalDays(date2);

    return totalDays2 - totalDays1;
}

int main() {
    struct Date date1, date2;

    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int difference = getDateDifference(date1, date2);

    printf("The difference between the two dates is %d day(s).\n", difference);

    return 0;
}
