#include <stdio.h>

int main(void) {
    int idade = 0;
    printf("Digite um número: ");
    scanf("%d", &idade);

    if (idade < 18 && idade >= 1)
        printf("Menor de idade.\n");
    else if (idade >= 18 && idade < 65)
        printf("Maior de idade.\n");
    else if(idade >= 65 && idade <= 150)
        printf("Terceira idade.\n");
    else{
        printf("Idade inválida\n");
    }
    return 0;
}