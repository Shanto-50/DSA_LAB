#include <stdio.h>
int main()
{
    int n,value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &value);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }
    }
        printf("Element not found\n");
    return 0;
}
