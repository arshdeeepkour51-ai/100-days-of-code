//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
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

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 1;
    }

    int dq[n];
    int front = 0, back = 0;

    for (int i = 0; i < n; i++) {
        if (front < back && dq[front] <= i - k) {
            front++;
        }
        while (front < back && arr[dq[back - 1]] <= arr[i]) {
            back--;
        }
        dq[back++] = i;

        if (i >= k - 1) {
            printf("%d%s", arr[dq[front]], i < n - 1 ? " " : "");
        }
    }
    printf("\n");
    return 0;
}