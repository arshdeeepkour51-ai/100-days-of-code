//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int missing = n;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        missing ^= i ^ val;
    }

    printf("%d\n", missing);
    return 0;
}