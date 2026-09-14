//Q70: Rotate an array to the right by k positions.
#include <stdio.h>
int main()
{
    int arr[100], temp[100];
    int n, k, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for(i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}