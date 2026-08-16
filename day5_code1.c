//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, simple_interest, compound_interest, amount;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100.0;
    amount = principal + simple_interest;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Total Amount: %.2f\n", amount);

    return 0;
}