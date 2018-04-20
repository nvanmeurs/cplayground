/*
 * Name: project3.c
 * Purpose: Calculate a broker's commission
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    float shares_amount, share_price, trade_value, commission, rival_commission;

    printf("Enter amount of shares: ");
    scanf("%f", &shares_amount);

    printf("Enter price per share: ");
    scanf("%f", &share_price);

    trade_value = shares_amount * share_price;

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

    rival_commission = 33.00f + shares_amount * ((shares_amount < 2000) ? .03f : .02f);

    printf("Commission: $%.2f\n", commission);
    printf("Rival commission $%.2f\n", rival_commission);

    return 0;
}