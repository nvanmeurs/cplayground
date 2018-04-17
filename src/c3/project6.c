/*
 * Name: project6.c
 * Purpose: Add two fractions
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, num_result, denom_result;

    printf("Enter two ftions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    num_result = num1 * denom2 + num2 * denom1;
    denom_result = denom1 * denom2;

    printf("The sum is %d/%d\n", num_result, denom_result);
}