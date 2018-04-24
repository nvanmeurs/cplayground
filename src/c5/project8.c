/*
 * Name: project8.c
 * Purpose: Display closests flight departure and arrival time
 * Author: Nicky van Meurs
 */

#include <stdio.h>

#define MINS_IN_HR 60
#define EIGHT_AM_FLIGHT 8 * MINS_IN_HR + 103 / 2
#define NINE_AM_FLIGHT 9 * MINS_IN_HR + 43 + 96 / 2
#define ELEVEN_AM_FLIGHT 11 * MINS_IN_HR + 19 + 88 / 2
#define TWELVE_PM_FLIGHT 12 * MINS_IN_HR + 47 + 73 / 2
#define TWO_PM_FLIGHT 14 * MINS_IN_HR + 105 / 2
#define THREE_PM_FLIGHT 15 * MINS_IN_HR + 45 + 195 / 2
#define SEVEN_PM_FLIGHT 19 * MINS_IN_HR + 165 / 2

int main(void)
{
    int hours, mins, mins_since_midnight;

    printf("Please enter a time(hh:mm): ");
    scanf("%2d:%2d", &hours, &mins);

    mins_since_midnight = (hours * MINS_IN_HR) + mins;

    if (mins_since_midnight <= EIGHT_AM_FLIGHT)
        printf("Closest departure time is 8:00 AM., arriving at 10:16 AM.\n");
    else if (mins_since_midnight < NINE_AM_FLIGHT)
        printf("Closest departure time is 9:43 AM., arriving at 11:52 AM.\n");
    else if (mins_since_midnight < ELEVEN_AM_FLIGHT)
        printf("Closest departure time is 11:19 AM., arriving at 1:31 PM.\n");
    else if (mins_since_midnight <= TWELVE_PM_FLIGHT)
        printf("Closest departure time is 12:47 PM., arriving at 3:00 PM.\n");
    else if (mins_since_midnight <= TWO_PM_FLIGHT)
        printf("Closest departure time is 2:00 PM., arriving at 4:08 PM.\n");
    else if (mins_since_midnight <= THREE_PM_FLIGHT)
        printf("Closest departure time is 3:45 PM., arriving at 5:55 PM.\n");
    else if (mins_since_midnight <= SEVEN_PM_FLIGHT)
        printf("Closest departure time is 7:00 PM., arriving at 9:20 PM.\n");
    else
        printf("Closest departure time is 9:45 PM., arriving at 11:58 PM.\n");

    return 0;
}