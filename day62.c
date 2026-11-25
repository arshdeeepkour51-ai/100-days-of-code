//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long currentSum = arr[0];
    long long maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = (currentSum + arr[i] > arr[i]) ? (currentSum + arr[i]) : arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%lld\n", maxSum);
    return 0;
}