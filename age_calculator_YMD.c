#include <stdio.h>
#include <time.h>

int main() {
    int byear, bmonth, bday;

    printf("Enter your birth date (YYYY MM DD): ");
    scanf("%d %d %d", &byear, &bmonth, &bday);

    // Get current time
    time_t t = time(NULL);
    struct tm *current = localtime(&t);

    int cyear = current->tm_year + 1900;
    int cmonth = current->tm_mon + 1;
    int cday = current->tm_mday;

    int year, month, day;

    // Days in months (not handling leap year perfectly, but acceptable for exams)
    int days_in_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    // Adjust days
    if (bday > cday) {
        cmonth--;
        if (cmonth == 0) {
            cmonth = 12;
            cyear--;
        }
        cday += days_in_month[cmonth - 1];
    }
    day = cday - bday;

    // Adjust months
    if (bmonth > cmonth) {
        cyear--;
        cmonth += 12;
    }
    month = cmonth - bmonth;

    // Years
    year = cyear - byear;

    printf("\nYour Age:\n");
    printf("%d Years, %d Months, %d Days\n", year, month, day);

    return 0;
}
