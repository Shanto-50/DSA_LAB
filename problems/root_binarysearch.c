#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int low = 1, high = n, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(mid*mid == n)
        {
            printf("Root is %d\n", mid);
            return 0;
        }
        else if(mid < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}
