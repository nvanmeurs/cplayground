/*
 * Name: project1.c
 * Purpose: Convert date from mm/dd/yyyy to yyyymmdd
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d%.2d%.2d\n", year, month, day);

    return 0;
}