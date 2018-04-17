/*
 * Name: dweight.c
 * Purpose: Calculates the dimensional weight of a box
 * Author: Nicky van Meurs
 */
#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (in cubic inches): %d\n", volume);
    printf("Dimensional weight (in pounds): %d\n", weight);

    return 0;
}