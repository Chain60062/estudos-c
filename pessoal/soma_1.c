#include <stdio.h>

int main(void) {

    int num_1 = 0, num_2 = 0, soma = 0;
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &num_1);
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &num_2);

    soma = num_1 + num_2;
    soma = soma < 20 ? soma + 8 : soma - 5;
    
    printf("Soma ajustada foi %d\n", soma);
    return 0;
}