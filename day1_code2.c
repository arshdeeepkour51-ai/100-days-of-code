//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a, b, sum, difference, product, quotient;
    printf("Enter two numbers: ");
    scanf("%d,%d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    difference = a - b;
    printf("Difference: %d\n", difference);
    product = a * b;
    printf("Product: %d\n", product);
    quotient = a / b;
    printf("Quotient: %d\n", quotient);

    return 0;
}