#include <stdio.h>

int main(void){
    char input_string[64] = {0};
    printf("Digite uma frase: ");
    fgets(input_string, 64, stdin);
}