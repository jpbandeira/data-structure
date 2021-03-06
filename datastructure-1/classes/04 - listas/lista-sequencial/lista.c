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

// 1 2 4 5
// 0 1 2 3 4 5

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

void removerNoInicio(TLista* lista) {
	int index, quantidade = tamanho(lista);

	if (tamanho(lista) == 0) return;

	for (index = 1; index < quantidade; index++) {
		lista->vetor[index - 1] = lista->vetor[index];
	}

	lista->quantidade--;
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

void inverter(TLista* lista) {
	int index, n, quantidadeElementos = tamanho(lista);
	int posicaoInicio = 0;

	if (lista->quantidade == TAM) return;

	for (index = 0; index < quantidadeElementos/2; index++) {			
		posicaoInicio = lista->vetor[index];

		lista->vetor[index] = lista->vetor[quantidadeElementos - index - 1];
		lista->vetor[quantidadeElementos - index - 1] = posicaoInicio;
		
	}
}

int comparar(TLista* lista, TLista* lista2) {
	int i, valorAtual, valorLista2, quantidadeLista = tamanho(lista);
	int contador = 0;

	for (i = 0; i < quantidadeLista; i++) {
		valorAtual = lista->vetor[i];
		valorLista2 = buscar(lista2, valorAtual);
		if (valorLista2 != -1){
			contador++;
		}		
	}

	return contador;
}

void inserirNaPosicao(TLista* lista, int valor, int posicao) {
	int index, quantidadeElementos = tamanho(lista);

	//Verifica��o para lista cheia e se a posicao passada � maior ou igual a quantidade + 1, n�o deixando ficar valor duplicado
	// no vetor ou lixo;
	if (lista->quantidade == TAM || posicao >= lista->quantidade+1) return;

	for (index = quantidadeElementos - 1; index >= 0; index--) {		
		lista->vetor[index + 1] = lista->vetor[index];
		
		//Permite colocar valor no meio do vetor ou uma posi��o a frente da ultima
		if (index == posicao || index + 1 == posicao) {
			lista->vetor[posicao] = valor;
			lista->quantidade++;
			return;
		}		
	}	
}

void removerNaPosicao(TLista* lista, int posicao) {
	int index, quantidadeElementos = tamanho(lista);
	int valorRemovido = 0;

	if (lista->quantidade == TAM) return;

	//A posi��o precisa est� dentro do limite dos elementos da lista;
	printf("Posicao: %i", posicao);
	if (posicao <= quantidadeElementos) {
		for (index = posicao; index < quantidadeElementos; index++) {
			lista->vetor[index] = lista->vetor[index + 1];
			valorRemovido = lista->vetor[index - 1];
			exibe(lista);
		}

		lista->quantidade--;

		if (posicao == quantidadeElementos) {
			return valorRemovido;
		}
	}
	else{
		return;
	}
}

int removerImpares(TLista* lista) {
	int index = 0;
	
	while (index != tamanho(lista)) {

		if (lista->vetor[index] % 2 != 0) {
			remover(lista, lista->vetor[index]);
			index = 0;
		}else {
			index++;
		}
				
	}

	return 0;
}