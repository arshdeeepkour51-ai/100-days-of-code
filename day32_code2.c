//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main()
{
    long long num;
    int count[10] = {0};
    int digit, max = 0, most = 0;
    int i;
    printf("Enter an integer number: ");
    scanf("%lld", &num);
    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    for(i = 0; i <= 9; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }
    printf("Digit that occurs the most times: %d", most);
    return 0;
}