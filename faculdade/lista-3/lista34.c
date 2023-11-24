#include <stdio.h>

int main(void){
    int soma = 0;
    for (size_t i = 0; i <= 100; i++)
    {
        soma += i;
    }
    printf("%d\n", soma);
    
    return 0;
}