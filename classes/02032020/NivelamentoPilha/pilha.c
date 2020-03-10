#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct Pilha{
    int *vetor;
    int quantidade, topo;
};

TPilha *criar(int valor){
    TPilha *pilha  = (TPilha *) malloc(sizeof(TPilha));
    pilha->vetor = malloc(sizeof(int)*valor);
    pilha->quantidade = valor;
    pilha->topo = -1;
    return pilha;
}
void empilhar(TPilha *pilha, int valor){
    if(pilha->topo < pilha->quantidade - 1){
        pilha->topo = pilha->topo + 1;
        pilha->vetor[pilha->topo] = valor;
    }
}
int desempilhar(TPilha *pilha){
    if(pilha->topo > - 1){
        pilha->topo = pilha->topo - 1;
        return pilha->vetor[pilha->topo + 1];
    }
}
int tamanho(TPilha *pilha){
    return pilha->quantidade;
}
int topo(TPilha *pilha){
    return pilha->vetor[pilha->topo];
}

void inverterPosicoes(TPilha *pilha){
    TPilha *pilhaAuxiliar = criar(10);
    int i,j;
    for(i = 0; i <= pilha->topo; i++){
        empilhar(pilhaAuxiliar,desempilhar(pilha));
    }

    for(j = i; j <= pilhaAuxiliar->topo; j--){
        empilhar(pilha,desempilhar(pilhaAuxiliar));
    }
}

void mostrar(TPilha *pilha){
    int i;
    for(i = 0; i <= pilha->topo; i++){
        printf("%i", pilha->vetor[i]);
    }
}
