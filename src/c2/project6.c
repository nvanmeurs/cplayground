/*
 * Name: project6.c
 * Purpose: Calculate result of polynomial for provided value
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Enter value for x: ");
    scanf("%d", &x);

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Result: %d\n", result);

    return 0;
}