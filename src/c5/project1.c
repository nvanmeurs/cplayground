/*
 * Name: project1.c
 * Purpose: Calculates how many digits a number contains
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int number, remainder, digits = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    remainder = number;

    while ((remainder /= 10))
        digits++;

    printf("The number %d has %d digit%c\n", number, digits, (digits > 1) ? 's' : '\0');

    return 0;
}