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
    TPilha *pilhaAuxiliar = criar(pilha->quantidade);
    int i,j, index;
    for(i = 0; i <= pilha->quantidade; i++){
        empilhar(pilhaAuxiliar,desempilhar(pilha));
    }

    for(j = 0; j <= pilhaAuxiliar->quantidade; j++){
        empilhar(pilha,pilhaAuxiliar->vetor[j]);
    }
}

void mostrar(TPilha *pilha){
    int i;
    for(i = 0; i <= pilha->topo; i++){
        printf("%i", pilha->vetor[i]);
    }
}

int estaVazia(TPilha *pilha){
    if(pilha->topo == -1){
        return 0;
    }
    return 1;
}
