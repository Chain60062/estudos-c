#include <stdio.h>

int reverseHelper(int num, int reversed)
{
    if (num == 0)
        return reversed;
    
    reversed = reversed * 10 + num % 10;

    return reverseHelper(num / 10, reversed);
}

int reverse(int num)
{
    return reverseHelper(num, 0);
}

int main(void)
{
    int input = 0;

    scanf("%d", &input);

    printf("%0d\n", reverse(input));
}