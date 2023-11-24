#include <stdio.h>
#include <stdbool.h>

int main(void){
    int numero = 0;

    while(true){
        printf("Tabuada, digite um numero de 1 - 9: ");
        scanf("%d", &numero);

        if (numero > 9)
        {
            printf("Numero invalido\n");
            continue;
        }

        for (size_t i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", numero, i, (numero * i));
        }        
    }

    return 0;
}