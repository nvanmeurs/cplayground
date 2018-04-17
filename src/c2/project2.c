/*
 * Name: project2.c
 * Purpose: Compute the volume of a sphere
 * Author: Nicky van Meurs
 */

#include <stdio.h>

#define FRACTION (4.0f / 3.0f)
#define PI 3.14159265358979323846

int main(void)
{
    int radius;
    float volume;

    printf("Enter sphere radius: ");
    scanf("%d", &radius);

    volume = FRACTION * PI * radius * radius * radius;

    printf("Volume: %.1f\n", volume);

    return 0;
}