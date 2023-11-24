#include <stdio.h>

int main(void) {
    int num = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 7 == 0)
        printf("%d é divisível por 2 ou por 7.\n", num);
    else
        printf("%d não é divisível por 2 nem por 7.\n", num);

    return 0;
}