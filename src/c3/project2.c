/*
 * Name: project2.c
 * Purpose: Format product information entered by user
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int item_number, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$ %6.2f\t\t%d/%d/%d\n", item_number, unit_price, month, day, year);

    return 0;
}