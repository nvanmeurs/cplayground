/*
 * Name: project8.c
 * Purpose: Calculate the remaining balance on a loan after the first, second and third monthly payments
 * Author: Nicky van Meurs
 */

#include <stdio.h>

float calc_new_balance(float balance, float monthly_payment, float monthly_interest_rate);

int main(void)
{
    float balance, interest_rate, monthly_payment, monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = interest_rate / 100 / 12;

    balance = calc_new_balance(balance, monthly_payment, monthly_interest_rate);
    printf("\nBalance remaining after first payment: %.2f\n", balance);

    balance = calc_new_balance(balance, monthly_payment, monthly_interest_rate);
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = calc_new_balance(balance, monthly_payment, monthly_interest_rate);
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}

float calc_new_balance(float balance, float monthly_payment, float monthly_interest_rate)
{
    return balance - monthly_payment + balance * monthly_interest_rate;
}