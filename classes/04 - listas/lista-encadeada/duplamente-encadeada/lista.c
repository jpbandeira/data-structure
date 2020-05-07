#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct No{
	int informacao;
	TNo* proximo;
	TNo* anterior;
};

TNo* criar(int valor) {
	TNo* lista = (TNo*)malloc(sizeof(TNo));
	lista->informacao = valor;
	lista->proximo = NULL;
	lista->anterior = NULL;

	return lista;
}

int tamanho(TNo* no) {
	int contador = 0;
	
	if (no == NULL) return -1;

	TNo* listaAuxiliar = no->proximo;	

	while (listaAuxiliar != NULL){
		listaAuxiliar = listaAuxiliar->proximo;
		contador++;
	}

	return contador;
}

void inserir(TNo* no, int valor) {
	if (no == NULL) return;

	TNo* listaAuxiliar = no;

	while (listaAuxiliar->proximo != NULL){
		listaAuxiliar = listaAuxiliar->proximo;
	}

	TNo* novoElemento = criar(valor);
	
	listaAuxiliar->proximo = novoElemento;
	novoElemento->anterior = listaAuxiliar;
}

TNo* buscar(TNo* no, int valor) {
	if (no == NULL) return NULL;

	TNo* listaAuxiliar = no->proximo;	

	while (listaAuxiliar != NULL){
		if (listaAuxiliar->informacao == valor) {
			return listaAuxiliar;
		}
		listaAuxiliar = listaAuxiliar->proximo;
	}

	return NULL;
}

int remover(TNo* no, int valor) {
	if (no == NULL) return NULL;

	TNo* listaAuxiliar = no->proximo;

	while (listaAuxiliar != NULL) {
		
		if (listaAuxiliar->informacao == valor){
			if (listaAuxiliar->proximo == NULL) {
				listaAuxiliar->anterior->proximo = NULL;
				free(listaAuxiliar);
			}else{
				listaAuxiliar->anterior->proximo = listaAuxiliar->proximo;
				listaAuxiliar->proximo->anterior = listaAuxiliar->anterior;
				free(listaAuxiliar);
			}			

			return listaAuxiliar->informacao;
		}
		listaAuxiliar = listaAuxiliar->proximo;
	}
}

void exibeTodos(TNo* no) {
	TNo* listaAuxiliar = no->proximo;

	printf("\n");

	while (listaAuxiliar != NULL){
		printf(" [%i] ", listaAuxiliar->informacao);
		listaAuxiliar = listaAuxiliar->proximo;
	}
}

void exibeNo(TNo* no) {
	if(no != NULL) printf(" [%i] ", no->informacao);
}

void inserirNaPosicao(TNo* no, int valor, int posicao) {
	int contador = 0;

	if (no == NULL) return;

	TNo* listaAuxiliar = no;

	while (contador < posicao) {		
		listaAuxiliar = listaAuxiliar->proximo;
		contador++;
	}

	TNo* novoElemento = criar(valor);

	//Realizando tratamento para o casa de quere inserir valor na ultima posi��o
	if (listaAuxiliar->proximo != NULL) novoElemento->proximo = listaAuxiliar->proximo;
	if (listaAuxiliar->proximo != NULL) listaAuxiliar->proximo->anterior = novoElemento;

	listaAuxiliar->proximo = novoElemento;
	novoElemento->anterior = listaAuxiliar;
}

TNo* removerNaPosicao (TNo* no, int posicao){
	int contador = 0;

	if (no == NULL) return NULL;

	TNo* listaAuxiliar = no;

	while (contador <= posicao) {
		//N�o permite que seja removido um valor na posi��o ap�s a ultima, evitando que o programa trave.
		if (listaAuxiliar->proximo == NULL) {			
			return NULL;
		}

		listaAuxiliar = listaAuxiliar->proximo;
		contador++;
	}

	if (listaAuxiliar->proximo == NULL) {
		listaAuxiliar->anterior->proximo = NULL;
		free(listaAuxiliar);
	}
	else {
		listaAuxiliar->anterior->proximo = listaAuxiliar->proximo;
		listaAuxiliar->proximo->anterior = listaAuxiliar->anterior;
		free(listaAuxiliar);
	}

	return NULL;
}
