/*
 * Name: project2.c
 * Purpose: Split and reverse a three digit number
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int number, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%3d", &number);

    digit3 = number % 10;
    digit2 = number / 10 % 10;
    digit1 = number / 10 / 10 % 10;

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}