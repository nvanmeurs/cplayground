/*
 * Name: project5.c
 * Purpose: Calculate the check digit of a EAN (European Article Number)
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int d[12], even_digits_sum, odd_digits_sum, total, check_digit;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d[0], &d[1], &d[2], &d[3], &d[4], &d[5], &d[6], &d[7], &d[8], &d[9], &d[10], &d[11]);

    even_digits_sum = d[1] + d[3] + d[5] + d[7] + d[9] + d[11];
    odd_digits_sum = d[0] + d[2] + d[4] + d[6] + d[8] + d[10];

    total = even_digits_sum * 3 + odd_digits_sum - 1;
    check_digit = 9 - (total % 10);

    printf("Check digit: %d\n", check_digit);

    return 0;
}