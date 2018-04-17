/*
 * Name: project7.c
 * Purpose: Calculate how to pay amount in USD with smallest amount of bills
 * Author: Nicky van Meurs
 */

#include <stdio.h>

#define TWENTY_BILL 20
#define TEN_BILL 10
#define FIVE_BILL 5
#define DOLLAR_BILL 1

int main(void)
{
    int amount, twenty_bills = 0, ten_bills = 0, five_bills = 0, dollar_bills = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty_bills = amount / TWENTY_BILL;
    amount = amount - twenty_bills * TWENTY_BILL;
    printf("$20 bills: %d\n", twenty_bills);

    ten_bills = amount / TEN_BILL;
    amount = amount - ten_bills * TEN_BILL;
    printf("$10 bills: %d\n", ten_bills);

    five_bills = amount / FIVE_BILL;
    amount = amount - five_bills * FIVE_BILL;
    printf(" $5 bills: %d\n", five_bills);

    dollar_bills = amount / DOLLAR_BILL;
    amount = amount - dollar_bills * DOLLAR_BILL;
    printf(" $1 bills: %d\n", dollar_bills);
}