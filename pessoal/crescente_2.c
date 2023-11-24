#include <stdio.h>

int main(void) {

    int num_1 = 0, num_2 = 0, menor = 0, maior = 0;
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &num_1);
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &num_2);
    
    if(num_1 < num_2){
        menor = num_1; 
        maior = num_2; 
    }else{
        menor = num_2; 
        maior = num_1; 
    }
    
    printf("Ordenados: %d, %d\n", menor, maior );
    return 0;
}