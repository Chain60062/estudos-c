#include <stdio.h>
#include <limits.h>
#include <float.h>
#define char_constant 'A'
int main(void)
{
    int n = 0;
    printf("Enter a number ");
    scanf("%d", &n);

    for (int d = 2; d < n; d++)
    {
        if (n % d == 0)
            break;
        if (d < n)
            printf("%d is divisible by %d\n", n, d);
        else
            printf("%d is prime\n", n);
    }

    return 0;
}