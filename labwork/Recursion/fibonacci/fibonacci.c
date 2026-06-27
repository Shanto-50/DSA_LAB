#include <stdio.h>
void fib(int a, int b, int n)
{
    if (n == 0)
        return;
    printf("%d ", a);
    fib(b, a + b, n - 1);
}
int main()
{
    int n, a = 0, b = 1;
    printf("enter the term no.:\n");
    scanf("%d", &n);
    fib(a, b, n);
    return 0;
}
