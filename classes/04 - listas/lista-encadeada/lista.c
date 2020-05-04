#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

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