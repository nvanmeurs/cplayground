/*
 * Name: project3.c
 * Purpose: Break down ISBN number into the individual groups
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int gs1_prefix, group, publisher, item, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group, &publisher, &item, &check_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", check_digit);

    return 0;
}