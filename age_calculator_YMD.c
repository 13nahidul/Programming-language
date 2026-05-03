#include <stdio.h>
#include <time.h>

int main() {
    int birth_year, birth_month, birth_day;
    int age_years, age_months, age_days;

    // Get current date
    time_t now;
    struct tm *current_date;

    time(&now);
    current_date = localtime(&now);

    int current_year = current_date->tm_year + 1900;  // tm_year is years since 1900
    int current_month = current_date->tm_mon + 1;     // tm_mon is 0-11
    int current_day = current_date->tm_mday;

    // Get birth date from user
    printf("Enter your birth date:\n");
    printf("Year (e.g., 1990): ");
    scanf("%d", &birth_year);
    printf("Month (1-12): ");
    scanf("%d", &birth_month);
    printf("Day (1-31): ");
    scanf("%d", &birth_day);

    // Check if birth date is valid
    if (birth_year > current_year ||
        (birth_year == current_year && birth_month > current_month) ||
        (birth_year == current_year && birth_month == current_month && birth_day > current_day)) {
        printf("Error: Birth date cannot be in the future!\n");
        return 1;
    }

    // Calculate age in years, months, days
    age_years = current_year - birth_year;
    age_months = current_month - birth_month;
    age_days = current_day - birth_day;

    // Adjust for negative days
    if (age_days < 0) {
        // Days in previous month
        int days_in_prev_month;

        // Determine days in the month before current month
        if (current_month == 1) {
            // January - previous month is December
            days_in_prev_month = 31;
        } else {
            // For other months, check days in the previous month
            int prev_month = current_month - 1;
            if (prev_month == 2) {
                // Check for leap year
                if ((current_year % 4 == 0 && current_year % 100 != 0) || (current_year % 400 == 0))
                    days_in_prev_month = 29;
                else
                    days_in_prev_month = 28;
            } else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) {
                days_in_prev_month = 30;
            } else {
                days_in_prev_month = 31;
            }
        }

        age_days += days_in_prev_month;
        age_months--;
    }

    // Adjust for negative months
    if (age_months < 0) {
        age_months += 12;
        age_years--;
    }

    // Display results
    printf("\n=== Age Calculation ===\n");
    printf("Current date: %d-%02d-%02d\n", current_year, current_month, current_day);
    printf("Birth date:    %d-%02d-%02d\n", birth_year, birth_month, birth_day);
    printf("\nYour current age is:\n");
    printf("%d years, %d months, %d days\n", age_years, age_months, age_days);

    return 0;
}
