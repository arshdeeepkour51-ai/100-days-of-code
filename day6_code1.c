//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    { 
        printf("%d is an even integer.\n", num);
    }
    else
    {
        printf("%d is an odd integer.\n", num);
    }
    return 0;
}