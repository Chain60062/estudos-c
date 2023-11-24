#include <stdio.h>

int main(void) {
    int num = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0)
        printf("%d é divisível por 2 e 3.\n", num);
    else
        printf("%d não é divisível por 2 e 3.\n", num);

    return 0;
}