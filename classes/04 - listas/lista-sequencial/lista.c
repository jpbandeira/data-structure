#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

const int TAM = 100;

struct Lista{
	int vetor[100];
	int quantidade;
};

TLista* criar() {
	TLista* lista = (TLista*) malloc(sizeof(TLista));
	lista->quantidade = 0;
	
	return lista;
}

int tamanho(TLista* lista) {
	return lista->quantidade;
}

void inserir(TLista* lista, int valor) {
	int quantidadeElementos = lista->quantidade;
	if (lista->quantidade == TAM) return;
	
	lista->vetor[quantidadeElementos] = valor;
	lista->quantidade++;
}

void inserirInicio(TLista* lista, int valor) {
	int index, quantidadeElementos = tamanho(lista);
	
	if (lista->quantidade == TAM) return;

	for (index = quantidadeElementos-1; index >= 0; index--) {
		lista->vetor[index + 1] = lista->vetor[index];
	}

	lista->vetor[index+1] = valor;
	lista->quantidade++;
}

int remover(TLista* lista, int valor) {
	int posicaoValorEncontrado = buscar(lista, valor), index;
	int quantidade = tamanho(lista);

	if (posicaoValorEncontrado == -1) {
		return -1;
	}	

	for (index = posicaoValorEncontrado +1; index < quantidade; index++) {
		lista->vetor[index - 1] = lista->vetor[index];		
	}

	lista->quantidade--;

	return posicaoValorEncontrado;
}

void removerTodos(TLista* lista, int valor) {
	int quantidadeElementos = lista->quantidade, index;
	int posicaoValorEncontrado = buscar(lista, valor);

	while(posicaoValorEncontrado != -1){		

		for (index = posicaoValorEncontrado + 1; index < quantidadeElementos; index++) {
			lista->vetor[index - 1] = lista->vetor[index];			
		}
		
		lista->quantidade--;
		posicaoValorEncontrado = buscar(lista, valor);
	}
}

int buscar(TLista* lista, int valor) {
	int quantidadeElementos = lista->quantidade, i;

	for (i = 0; i < quantidadeElementos; i++) {
		if (lista->vetor[i] == valor) {
			return i;
		}
	}

	return -1;
}

void exibe(TLista* lista) {
	int quantidadeElementos = lista->quantidade, i;

	printf("\n");

	for (i = 0; i < quantidadeElementos; i++) {
		printf(" [%i] ", lista->vetor[i]);
	}

	printf("\n");
}