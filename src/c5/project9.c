/*
 * Name: project9.c
 * Purpose: Compare two dates
 * Author: Nicky van Meurs
 */

#include <stdio.h>

enum Ordering
{
    LESSER = -1,
    EQUAL = 0,
    GREATER = 1
};

struct Date
{
    int year, month, day;
};

enum Ordering compare_dates(struct Date d1, struct Date d2)
{
    if (d1.year > d2.year)
        return GREATER;

    if (d1.year < d2.year)
        return LESSER;

    if (d1.month > d2.month)
        return GREATER;

    if (d1.month < d2.month)
        return LESSER;

    if (d1.day > d2.day)
        return GREATER;

    if (d1.day < d2.day)
        return LESSER;

    return EQUAL;
}

int main(void)
{
    struct Date d1, d2;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &d1.month, &d1.day, &d1.year);

    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &d2.month, &d2.day, &d2.year);

    printf("%.2d/%.2d/%4d is ", d1.month, d1.day, d1.year);

    switch (compare_dates(d1, d2))
    {
    case LESSER:
        printf("before");
        break;

    case EQUAL:
        printf("the same as");
        break;

    case GREATER:
        printf("after");
        break;
    }

    printf(" %.2d/%.2d/%4d.\n", d2.month, d2.day, d2.year);

    return 0;
}