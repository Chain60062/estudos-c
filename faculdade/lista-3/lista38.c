#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int numero = 0, inicial = 0, final = 0;

    while (true)
    {
        printf("Tabuada, digite um numero de 1 - 9: ");
        scanf("%d", &numero);

        printf("Digite ate qual o primeiro numero da tabuada: ");
        scanf("%d", &inicial);

        printf("Digite ate qual numero ir: ");
        scanf("%d", &final);

        if (numero > 9 || inicial < 0 || final < inicial)
        {
            printf("Numero invalido\n");
            continue;
        }

        for (size_t i = inicial; i <= final; i++)
        {
            printf("%d x %d = %d\n", numero, i, (numero * i));
        }
    }

    return 0;
}