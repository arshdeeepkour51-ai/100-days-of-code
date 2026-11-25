//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 1) {
        return 1;
    }

    int arr[n];
    int minVal = 0, maxVal = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0 || arr[i] < minVal) {
            minVal = arr[i];
        }
        if (i == 0 || arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    long long range = (long long)maxVal - minVal + 1;
    if (range <= 1000000) {
        unsigned char *seen = calloc((size_t)range, sizeof(unsigned char));
        if (!seen) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            long long idx = (long long)arr[i] - minVal;
            if (seen[idx]) {
                printf("%d\n", arr[i]);
                free(seen);
                return 0;
            }
            seen[idx] = 1;
        }
        free(seen);
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d\n", arr[i]);
                    return 0;
                }
            }
        }
    }

    return 0;
}