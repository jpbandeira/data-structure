#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    TPilha *pilha = criar(10);
    empilhar(pilha, 4);
    empilhar(pilha, 5);
    empilhar(pilha, 6);
    mostrar(pilha);
    inverterPosicoes(pilha);
    printf("\n");
    mostrar(pilha);
    return 0;
}
