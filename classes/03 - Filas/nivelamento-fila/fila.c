#include <stdio.h>
#include <stdlib.h>
#include "fila.h"



struct Fila {
	int vetor[5];
	int inicio, final, quantidade;
};

TFila* criar() {
	TFila* fila = (TFila*)malloc(sizeof(TFila));
	fila->inicio = -1;
	fila->final = -1;
	fila->quantidade = 0;

	return fila;
}

void enfileirar(TFila* fila, int valor) {

	if ( ! ((fila->final + 1) % 5 == fila->inicio) ) {
		if (fila->inicio == -1) fila->inicio = 0;
		fila->final = (fila->final + 1) % 5;
		fila->vetor[fila->final] = valor;
		fila->quantidade++;
	}

}

int desenfileirar(TFila* fila) {

	int desenfileirado = -1;
	if (fila->inicio > -1) {
		desenfileirado = fila->vetor[fila->inicio];
		if (fila->inicio == fila->final)
			fila->inicio = fila->final = -1;
		else fila->inicio = (fila->inicio + 1) % 5;
		fila->quantidade--;
	}

	return desenfileirado;
	
}

void exibir(TFila* fila) {

	int i, index;
	index = fila->inicio;
	printf("\nInicio: %i\n", fila->vetor[fila->inicio]);
	printf("\nFinal: %i\n", fila->vetor[fila->final]);
	for (i = 0; i < fila->quantidade; i++) {
		printf("\n%i\n", fila->vetor[index]);
		index = (index + 1) % 5;
	}
}

int tamanho(TFila* fila) {
	return fila->quantidade;
}

int inicio(TFila* fila) {
	if (fila->inicio > -1) {
		return fila->inicio;
	}
}

int final(TFila* fila) {
	if (fila->final > -1) {
		return fila->final;
	}
}

int inicioRetornarValorInicio(TFila* fila) {
	if (fila->inicio > -1) {
		return fila->vetor[inicio(fila)];
	}
}

int vazia(TFila* fila) {
	if (fila->inicio == -1) {
		return 0;
	}
	else {
		return 1;
	}
}

int cheia(TFila* fila) {
	if (((fila->final + 1) % 5 == fila->inicio)) {
		return 0;
	}
	else {
		return 1;
	}
}