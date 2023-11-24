#include <stdio.h>

int main(void) {
    long long num = 0;
    printf("Digite um número: ");
    scanf("%lld", &num);

    if (num > 0)
        num % 2 == 0 ? printf("%lld é par", num) : printf("%lld é ímpar", num);
    else
        printf("|%d| = %lld\n", num, num < 0 ? -num : num);

    return 0;
}