#include <stdio.h>

int main(void) {
    int num_copias = 0;
    float total = 0.0f;
    printf("Digite o número de cópias: ");
    scanf("%d", &num_copias);

    if (num_copias <= 100)
        total = num_copias * .25;
    else 
        total = (100.0f * .25f) + (((float)num_copias - 100.0f) * .2f);

    printf("O total a ser pago para %d cópias é: R$%.2f\n", num_copias, total);
    return 0;
}