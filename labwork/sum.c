#include <stdio.h>
int sum(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + sum(arr, n - 1);
}
int main()
{
    int n;
    printf("Enter size:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int result = sum(arr, n);
    printf("Sum=%d", result);
    return 0;
}