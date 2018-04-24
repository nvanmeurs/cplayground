/*
 * Name: project7.c
 * Purpose: Find the largest and smallest of four integers
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int nums[4], i, min, max;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3]);

    min = max = nums[0];

    for (i = 1; i < 4; i++)
    {
        if (nums[i] < min)
            min = nums[i];

        if (nums[i] > max)
            max = nums[i];
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}