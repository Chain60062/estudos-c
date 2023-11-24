#include <stdio.h>

int sum(int size, int nums[size]); // int, int [*]
int power(int x, int n);

int main(void)
{
    int result = sum(5, (int[]){1, 2, 4, 5, 5});
    int result2 = power(5, 3);
    printf("%d\n%d\n", result, result2);
    return 0;
}

int sum(int size, int nums[size])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }
    return sum;
}

int power(int x, int n)
{
    return n == 0 ? 1 : x * power(x ,n - 1);
}