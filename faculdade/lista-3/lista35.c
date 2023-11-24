#include <stdio.h>

int main(void){
    int numero = 0, quantia_de_numeros = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Pares: \n");

    for (size_t i = 1; i <= numero; i++)
    {
        if(i % 2 == 0){
            printf(" %u ", i);
            quantia_de_numeros++;
        }
    }
    printf("\nExiste um total de %d numeros pares ate %d\n", quantia_de_numeros, numero);

    return 0;
}