#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    TPilha *pilha = criar(6);
    empilhar(pilha,1);
    empilhar(pilha,2);
    empilhar(pilha,3);
    empilhar(pilha,4);
    empilhar(pilha,5);
    empilhar(pilha,6);
    mostrar(pilha);
    removerValor(pilha, 2);
    mostrar(pilha);
    removerValor(pilha, 6);
    mostrar(pilha);
    return 0;
}
