/*
 * Name: project4.c
 * Purpose: Reformat telephone number
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int tel_part1, tel_part2, tel_part3;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &tel_part1, &tel_part2, &tel_part3);

    printf("%d.%d.%d\n", tel_part1, tel_part2, tel_part3);

    return 0;
}