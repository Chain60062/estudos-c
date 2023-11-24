#include <stdio.h>
#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
} REGISTRO;

typedef struct 
{
    REGISTRO ARRANJO[MAX];
    int numElementos;
} LISTA;



void inicializarLista(LISTA* lista){
    lista->numElementos = 0;
}
int numeroDeElementos(LISTA* lista){
    return lista->numElementos; //equivalente a (*lista).numElementos;
}
int main(void){
    typedef union{
        int inteiro;
        double comTrocado;
    } money;
    
    money m;

    m.inteiro = 12;

    printf("%d\n", m.inteiro);

    m.comTrocado = 12.32;
    printf("%f\n", m.comTrocado);
}
