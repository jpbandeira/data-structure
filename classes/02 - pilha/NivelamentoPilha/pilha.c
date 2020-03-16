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
    if(estaVazia(pilha) == 1){
        TPilha *pilhaAuxiliar = criar(pilha->quantidade);
        TPilha *pilhaAuxiliar2 = criar(pilha->quantidade);
        int i,j, index;
        for(i = 0; i <= pilha->quantidade; i++){
            empilhar(pilhaAuxiliar,desempilhar(pilha));
        }

        for(j = 0; j <= pilhaAuxiliar->quantidade; j++){
            empilhar(pilhaAuxiliar2,desempilhar(pilhaAuxiliar));
        }

        for(index = 0; index <= pilhaAuxiliar2->quantidade; index++){
            empilhar(pilha,desempilhar(pilhaAuxiliar2));
        }
    }
}

void mostrar(TPilha *pilha){
    int i;
    if(estaVazia(pilha) == 1){
        for(i = 0; i <= pilha->topo; i++){
            printf("%i", pilha->vetor[i]);
        }
    }
    printf("\n");
}

int estaVazia(TPilha *pilha){
    if(pilha->topo == -1){
        return 0;
    }
    return 1;
}

int removerValor(TPilha *pilha, int valor){
    if(estaVazia(pilha) == 1){
        TPilha *pilhaAuxiliar = criar(pilha->quantidade);
        int i,j;
        for(i = 0; i <= pilha->quantidade; i++){
            if(topo(pilha) == valor){
                desempilhar(pilha);
            }
            empilhar(pilhaAuxiliar,desempilhar(pilha));
        }

        for(j = 0; j <= pilhaAuxiliar->quantidade; j++){
            empilhar(pilha, desempilhar(pilhaAuxiliar));
        }
    }
}
