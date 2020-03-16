#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    TPilha *pilha = criar(3);
    empilhar(pilha,1);
    empilhar(pilha,2);
    empilhar(pilha,3);
    mostrar(pilha);
    printf("%i\n",topo(pilha));

    desempilhar(pilha);
    mostrar(pilha);
    printf("%i\n",topo(pilha));
    //inverterPosicoes(pilha);
    //mostrar(pilha);
    //printf("%i",topo(pilha));

    //removerValor(pilha, 2);
    //mostrar(pilha);
    //printf("%i",topo(pilha));
    return 0;
}
