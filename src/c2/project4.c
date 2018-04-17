/*
 * Name: project4.c
 * Purpose: Calculate amount with 5% tax
 * Author: Nicky van Meurs
 */

#include <stdio.h>

#define TAX 0.05f

int main(void)
{
    float amount, taxed_amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    taxed_amount = amount + amount * TAX;

    printf("With tax added: %.2f\n", taxed_amount);

    return 0;
}