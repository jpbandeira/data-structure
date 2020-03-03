#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct Pilha{
    int *vetor;
    int quantidade, topo;
};

TPilha *criar(int valor){
    TPilha *pilha  = (TPilha *) malloc(TPilha);
    pilha->vetor = malloc(sizeof(int)*valor);
    pilha->quantidade = valor;
    pilha->topo = -1;
    return pilha;
};
void empilhar(TPilha *pilha, int valor){
    if(pilha->topo < pilha->quantidade - 1){
        pilha->topo = pilha->topo + 1;
        pilha->vetor[pilha->topo] = valor;
    }
};
int desempilhar(TPilha *pilha){
    if(pilha->topo > - 1){
        pilha->topo = pilha->topo - 1;
        return pilha->vetor[pilha->topo + 1];
    }
};
int tamanho(TPilha *pilha){
    return pilja->quantidade;
};
int topo(TPilha *pilha){
    return pilha->vetor[pilha->topo];
};
