/*
 * Name: project11.c
 * Purpose: Translate 2-digit number to English
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    char *first_digits_tens[] = {
        "Ten",
        "Eleven",
        "Twelve",
        "Thirteen",
        "Fourteen",
        "Fifteen",
        "Sixteen",
        "Seventeen",
        "Eighteen",
        "Nineteen"};

    char *first_digits[] = {
        "", /* Zero */
        "", /* Ten */
        "Twenty",
        "Thirty",
        "Fourty",
        "Fifty",
        "Sixty",
        "Seventy",
        "Eighty",
        "Ninety"};

    char *second_digits[] = {
        "", /* Zero */
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"};

    int num[2];

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &num[0], &num[1]);

    printf("You entered the number ");

    if (num[0] == 1)
    {
        printf("%s.\n", first_digits_tens[num[1]]);
        return 0;
    }

    printf("%s%c%s.\n", first_digits[num[0]], (num[1] == 0) ? '\0' : '-', second_digits[num[1]]);

    return 0;
}