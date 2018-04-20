/*
 * Name: project2.c
 * Purpose: Convert 24 hour time to 12 hour form
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    char *suffix;
    int hours, minutes;

    printf("Enter a  24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    if (hours > 12)
    {
        suffix = "PM";
        hours -= 12;
    }
    else
    {
        suffix = "AM";
    }

    printf("Equivalent 12-hour time: %d:%d %s\n", hours, minutes, suffix);

    return 0;
}