#include <stdio.h>

int main(void) {
    typedef union {
        int inteiro;
        double comTrocado;
    } money;

    money m;

    m.inteiro = 12;

    printf("%d\n", m.inteiro);

    m.comTrocado = 12.32;
    printf("%f\n", m.comTrocado);

    //printf("%f\n", m.inteiro);//undefined behaviour union só pode ser de um tipo 
}
