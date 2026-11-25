//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

    int negIdx[n];
    int front = 0, back = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negIdx[back++] = i;
        }
        while (front < back && negIdx[front] <= i - k) {
            front++;
        }
        if (i >= k - 1) {
            int val = (front < back) ? arr[negIdx[front]] : 0;
            printf("%d%s", val, i < n - 1 ? " " : "");
        }
    }
    printf("\n");
    return 0;
}