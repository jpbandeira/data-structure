#include <stdio.h>
#include <stdlib.h>
#include "prioridade.h"


const int TAM = 10;

struct FilaPri {
	int vetor[11];
	int quantidade;
};

TFilaPri* criar() {
	TFilaPri* filaPrioridade = (TFilaPri*)malloc(sizeof(TFilaPri));
	filaPrioridade->quantidade = 0;
	return filaPrioridade;	
}

void corrigirSubindo(TFilaPri* fila) {
	int i = fila->quantidade;
	while (i >= 2 && fila->vetor[i / 2] < fila->vetor[i / 2]) {
		fila->vetor[i / 2] = fila->vetor[i];
		fila->vetor[i] = fila->vetor[i / 2];
		i = i / 2;
	}
}

void inserir(TFilaPri* fila, int n) {
	if (fila->quantidade < TAM) {
		fila->quantidade++;
		fila->vetor[fila->quantidade] = n;
		corrigirSubindo(fila);
	}
}

void tamanho(TFilaPri* f);
int extrairMax(TFilaPri* f);

void exibir(TFilaPri* f);
void quantidade(TFilaPri* f);