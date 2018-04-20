/*
 * Name: broker.c
 * Purpose: Calculate a broker's commission
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    float trade_value, commission;

    printf("Enter value of trade: ");
    scanf("%f", &trade_value);

    if (trade_value < 2500)
    {
        commission = 30.00f + trade_value * .017f;
    }
    else if (trade_value < 6250)
    {
        commission = 56.00f + trade_value * .0066f;
    }
    else if (trade_value < 20000)
    {
        commission = 76.00f + trade_value * .0034f;
    }
    else if (trade_value < 50000)
    {
        commission = 100.00f + trade_value * .0022f;
    }
    else if (trade_value < 500000)
    {
        commission = 155.00f + trade_value * .0011f;
    }
    else
    {
        commission = 255.00f + trade_value * .0009f;
    }

    commission = (commission < 39.00f) ? 39.00f : commission;

    printf("Commission: $%.2f\n", commission);

    return 0;
}