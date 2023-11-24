#include <stdio.h>
#include <stdbool.h>

int main(void){
    int soma = 0;
    int i = 0;

    printf("Digite números indefinidamente, para terminar digite 0.");
    while(true){
        i = 0;
        printf("Digite um numero: ");
        scanf("%d", &i);

        if(i == 0){
            break;
        }
        soma += i;
    }
    printf("A soma total foi: %d", soma);
    return 0;
}