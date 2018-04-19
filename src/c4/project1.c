/*
 * Name: project1.c
 * Purpose: Split and reverse a two digit number
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int number, digit1, digit2;

    printf("Enter a two-digit number: ");
    scanf("%2d", &number);

    digit1 = number / 10;
    digit2 = number % 10;

    printf("The reversal is: %d%d\n", digit2, digit1);

    return 0;
}