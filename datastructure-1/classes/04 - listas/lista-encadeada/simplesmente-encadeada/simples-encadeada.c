#include <stdio.h>
#include <stdlib.h>
#include "simples-encadeada.h"

struct ListaSimples{
	int elemento;
	TListaSimples* proximo;
};

TListaSimples* criar(int valor) {
	TListaSimples *lista = (TListaSimples *) malloc(sizeof(TListaSimples));
	lista->elemento = valor;
	lista->proximo = NULL;

	return lista;
}
int tamanho(TListaSimples* lista) {
	int count = 0;
	TListaSimples* listaAuxiliar = lista->proximo;

	if (lista == NULL) return -1;

	while (listaAuxiliar != NULL) {
		count++;
		listaAuxiliar = listaAuxiliar->proximo;
	}

	return count;
}

void inserir(TListaSimples* lista, int valor) {
	TListaSimples* listaAuxiliar = lista;
	
	if (lista == NULL) return;

	while (listaAuxiliar->proximo != NULL) {
		listaAuxiliar = listaAuxiliar->proximo;
	}

	listaAuxiliar->proximo = criar(valor);
}

int remover(TListaSimples* lista, int valor) {
	TListaSimples* listaAuxiliar = lista;

	if (lista == NULL) return;

	while (listaAuxiliar->proximo != NULL){
		if (listaAuxiliar->proximo->elemento == valor) {
			listaAuxiliar->proximo = listaAuxiliar->proximo->proximo;
		}else {
			listaAuxiliar = listaAuxiliar->proximo;
		}
	}
}

TListaSimples *buscar(TListaSimples* lista, int valor) {
	TListaSimples* listaAuxiliar = lista->proximo;

	if (lista == NULL) return;

	while (listaAuxiliar != NULL){
		if (listaAuxiliar->elemento == valor) {
			return listaAuxiliar;
		}else {
			listaAuxiliar = listaAuxiliar->proximo;
		}
	}
}

void exibir(TListaSimples* lista) {
	TListaSimples* listaAuxiliar = lista;

	if (lista == NULL) return;

	printf("\n");

	while (listaAuxiliar->proximo != NULL){
		listaAuxiliar = listaAuxiliar->proximo;
		printf(" [%i] " ,listaAuxiliar->elemento);
	}
}

void mostraNo(TListaSimples* lista) {
	printf(" [%i] ", lista->elemento);
}

void inserirNoInicio(TListaSimples* lista, int valor) {
	TListaSimples* novaLista = criar(valor);
	
	if (lista == NULL) return NULL;

	novaLista->proximo = lista->proximo;
	lista->proximo = novaLista;
}

TListaSimples* removerNoInicio(TListaSimples* lista) {
	TListaSimples* valorARemover = lista->proximo;
	
	if (lista == NULL) return NULL;
	
	lista->proximo = valorARemover->proximo;
	return valorARemover;
}

void inserirNaPosicao(TListaSimples* lista, int valor, int posicao) {
	TListaSimples* listaAuxiliar = lista;
	int contador = 0;

	if (lista == NULL) return;

	while (contador < posicao) {
		listaAuxiliar = listaAuxiliar->proximo;
		contador++;		
	}

	TListaSimples* listaNova = criar(valor);
	
	listaNova->proximo = listaAuxiliar->proximo;
	listaAuxiliar->proximo = listaNova;
	
}

void removerNaPosicao(TListaSimples* lista, int posicao) {
	TListaSimples* listaAuxiliar = lista;
	int contador = 0;

	if (lista == NULL) return;

	while (contador < posicao) {
		listaAuxiliar = listaAuxiliar->proximo;		
		contador++;
	}

	//Verificando se o proximo do proximo do elemento presente é null e igualando o proximo do elemento presente para null,
	//onde nesse caso serve para quando quiser remover o ultimo elemento da lista. Se não for, passa o proximo do elemento presente
	//para ser o proximo do proximo, para quando a posição passada não for a ultima da lista.
	if (listaAuxiliar->proximo->proximo == NULL) {		
		listaAuxiliar->proximo = NULL;
	}else{
		listaAuxiliar->proximo = listaAuxiliar->proximo->proximo;
	}	
}

int removerOrdenadoDecrescente(TListaSimples* lista, int valor) {
	TListaSimples* listaAuxiliar = lista;

	if (lista == NULL) return;

	while (listaAuxiliar->proximo != NULL) {
		TListaSimples* valorRemovido = NULL;;
		if (listaAuxiliar->proximo->elemento <= valor) {
			valorRemovido = listaAuxiliar->proximo = listaAuxiliar->proximo->proximo;
			return valorRemovido;
		}else {
			listaAuxiliar = listaAuxiliar->proximo;
		}
	}
}