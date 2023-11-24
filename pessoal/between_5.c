#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 20 && num <= 90)
        printf("%d está entre 20 e 90\n", num);
    else
        printf("%d não está entre 20 e 90\n", num);

    return 0;
}