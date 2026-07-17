#include <stdio.h>
int main()
{
    int n, value;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: \n");
    scanf("%d", &value);

    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == value)
        {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        }
        else if(arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found\n");
    return 0;
}
