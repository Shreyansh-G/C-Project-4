#include<stdio.h>
/* Program to calculate and print date and next date
*/
typedef enum month{jan=1,feb,march,april,may,june,july,aug,sept,oct,nov,dec} month;
typedef struct date{ month m ; int day;} date;

// Function to calculate the number of days in a given month
int daysInMonth(month month) {
    switch (month) {
        case jan:
        case march:
        case may:
        case july:
        case aug:
        case oct:
        case dec:
            return 31;
        case april:
        case june:
        case sept:
        case nov:
            return 30;
        case feb:
            return 28; // Assuming February has 28 days
        default:
            return -1; // Invalid month
    }
}

// Function to calculate the next day
date nextDay(const date currentDate) {
    date nextDate = currentDate;

    // Check if it's the last day of the month
    if (currentDate.day < daysInMonth(currentDate.m)) {
        nextDate.day++;
    } else {
        // Move to the next month
        nextDate.m = (month)((currentDate.m % 12) + 1);
        nextDate.day = 1;
    }

    return nextDate;
}
void printDate(const date date) {
    printf("Date: %d  / %d \n",date.m,date.day) ;
}



int main(){

date td1 = {dec, 12};
     printDate(td1);
    date tm1 = nextDay(td1);
    printDate(tm1);
date td2 = {feb,28};
    printDate(td2);
    date tm2 = nextDay(td2);
    printDate(tm2);
date td3 = {march, 14};
    printDate(td3);
    date tm3 = nextDay(td3);
    printDate(tm3);
date td4 = {oct,31};
    printDate(td4);
    date tm4 = nextDay(td4);
    printDate(tm4);
date td5 = {dec,31};
    printDate(td5);
    date tm5 = nextDay(td5);
    printDate(tm5);

    return 0;
}