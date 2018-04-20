/*
 * Name: project4.c
 * Purpose: Display windspeed description based on Beaufort scale
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int wind_speed;
    char *description;

    printf("Enter a wind speed in knots: ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
    {
        description = "Calm";
    }
    else if (wind_speed < 4)
    {
        description = "Light air";
    }
    else if (wind_speed < 28)
    {
        description = "Breeze";
    }
    else if (wind_speed < 48)
    {
        description = "Gale";
    }
    else if (wind_speed < 63)
    {
        description = "Storm";
    }
    else
    {
        description = "Hurricane";
    }

    printf("Wind speed description: %s\n", description);

    return 0;
}