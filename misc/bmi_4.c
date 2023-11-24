#include <stdio.h>
#include <stdbool.h>

int main(void) {
    float altura = 0.0f, ideal = 0.0f;
    char genero = 0, continuar = 0;
    bool sair = false;

    while (!sair)
    {
            printf("Digite sua altura: ");
            scanf("%f", &altura);

            if (altura >= 3 || altura <= 0) {
                printf("Altura inválida.\n");
                continue;
            }

            printf("Digite seu gênero (h/m): ");
            scanf(" %c", &genero);
            printf("Genero é: %c\n",genero);

            switch (genero) {
                case 'm':
                case 'M':
                    ideal = 62.1f * altura - 44.7f;
                    break;
                case 'h':
                case 'H':
                    ideal = 72.7f * altura - 58.0f;
                    break;
                default:
                    printf("Gênero inválido deve ser escrito como: h para homem ou m para mulher.\n");
                    continue;
            }
        printf("Seu peso ideal calculado foi: %.1fkg\n", ideal);
        printf("Deseja continuar?(s/n): ");
        scanf(" %c", &continuar);

        switch (continuar) {
        case 's':
        case 'S':
            continue;;
        case 'n':
        case 'N':
            break;
        default:
            break;
        }
    }

    return 0;
}