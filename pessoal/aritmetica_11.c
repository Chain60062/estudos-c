#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int num_1 = 0, num_2 = 0;
    double resultado = 0.0;
    char operacao = 0, continuar_programa = 0;
    bool sair = false;

    while(!sair) {
        printf("------------------------------------\n");
        printf("|           Calculadora            |\n");
        printf("------------------------------------\n");
        printf("Digite a operação desejada (sem aspas): \n");
        printf("\"+\" para soma\n");
        printf("\"-\" para subtração\n");
        printf("\"*\" , \".\" ou \"x\" para multiplicação\n");
        printf("\"/\" para divisão\n");
        printf("\"^\" para potência\n");
        printf("------------------------------------\n");
        scanf(" %c", &operacao);
        printf("Digite o primeiro número: ");
        scanf("%d", &num_1);
        printf("Digite o segundo número: ");
        scanf("%d", &num_2);


        switch (operacao)
        {
        case '+':
            resultado = (double)num_1 + (double)num_2;
            printf("%d + %d = %.0f\n", num_1, num_2, resultado);
            break;
        case '-':
            resultado = (double)num_1 - (double)num_2;
            printf("%d - %d = %.0f\n", num_1, num_2, resultado);
            break;
        case '*':
        case '.':
        case 'x':
            resultado = (double)num_1 * (double)num_2;
            printf("%d x %d = %.0f\n", num_1, num_2, resultado);
            break;
        case '/':
            resultado = (double)num_1 / (double)num_2;
            printf("%d / %d = %.2f\n", num_1, num_2, resultado);
            break;
        case '^':
            resultado = pow(num_1, num_2);
            printf("%d ^ %d = %.0f\n", num_1, num_2, resultado);
            break;
        default:
            printf("Caractére inválido, tente novamente.\n");
            break;
        }
        printf("Deseja continuar (s/n): ");
        scanf(" %c", &continuar_programa);

        if (continuar_programa == 's' || continuar_programa == 'S') {
            continue;
        }else {
            break;
        }
    }

    return 0;
}