/*
 * Name: date.c
 * Purpose: Printing a date in legal form
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int day_d1, day_d2, month, year;
    char *day_suffix;
    char *day_suffixes[] = {"th", "st", "nd", "rd"};
    char *month_name;
    char *month_names[] = {"January",
                           "February",
                           "March",
                           "April",
                           "May",
                           "June",
                           "July",
                           "August",
                           "September",
                           "October",
                           "November",
                           "December"};

    printf("Enter date (mm/dd/yy): ");
    scanf("%2d/%1d%1d/%2d", &month, &day_d1, &day_d2, &year);

    month_name = month_names[month - 1];
    day_suffix = day_suffixes[(day_d1 == 1 || day_d2 > 3) ? 0 : day_d2];

    printf("Dated this %d%d%s day of %s, 20%.2d\n", day_d1, day_d2, day_suffix, month_name, year);

    return 0;
}